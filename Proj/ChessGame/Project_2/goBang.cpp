/*
* File: goBang.cpp
* Author: 
* Created on July 25, 2018, 2:00 AM
* Purpose: gobang game
*/
//System Libraries
#include <iostream> //Input/Output Stream Library
#include <iomanip> //Formatting Library
#include <fstream> //File I/O
#include <string> //String
#include <tuple> //Tuple
#include <algorithm> //sort
using namespace std;
//User Libraries

//Global Constants
#define MAX 17		// board size
#define CONDITION 5		// winning condition
#define MAX_USERS 100 // max users
//Function Prototypes
 
void readUsers(string filename,tuple<string,int,int> users[MAX_USERS],int &num_of_users);//read users
void CheckerBoard_Init(char CheckerBoard[MAX][MAX]);			//board initial
void CheckerBoard_Display(char CheckerBoard[MAX][MAX]);			//board display
int CheckerBoard_Play(char CheckerBoard[MAX][MAX], int &Step_Number);				//game start
int White_Play(char CheckerBoard[MAX][MAX], int x, int y);			//place white
int Black_Play(char CheckerBoard[MAX][MAX], int x, int y);			//place black
void writeUsers(string filename, tuple<string, int, int> users[MAX_USERS], int num_of_users);//write users
string getUser(tuple<string, int, int> users[MAX_USERS], int num_of_users); // get user
void update(string name, tuple<string, int, int> users[MAX_USERS], int num_of_users, bool win = true);
void showUsers(tuple<string, int, int> users[MAX_USERS], int num_of_users);
//Execution Begins Here!

int main()
{
	string filename = "users.dat";
	tuple<string, int, int> users[MAX_USERS];
	int num_of_users = 0;
	readUsers(filename, users, num_of_users);
	showUsers(users, num_of_users);
	string b_user, w_user;
	cout << "Please input black user" << endl;
	b_user = getUser(users, num_of_users);
	cout << "Please input white user" << endl;
	w_user = getUser(users, num_of_users);
	int Step_Number = 0;					//number of steps
	int Victory_Flag = false;					//victory flag
	char CheckerBoard[MAX][MAX];		//board 2-d array
	CheckerBoard_Init(CheckerBoard);		//initial board
	CheckerBoard_Display(CheckerBoard);		//display board
	while (!Victory_Flag)		//while game not end
	{
		Victory_Flag = CheckerBoard_Play(CheckerBoard, Step_Number);	//play game
	}
	switch (Victory_Flag)
	{
	case 1:			//1->white win
		cout << "=======================================" << endl;
		cout << "          White Win! Steps:<<Step_Number" << endl;
		cout << "=======================================" << endl;
		update(w_user, users, num_of_users);
		update(b_user, users, num_of_users, false);
		break;
	case 2:			//2->black win
		cout << "=======================================" << endl;
		cout << "          Black Win! Steps:" << Step_Number << endl;
		cout << "=======================================" << endl;
		update(b_user, users, num_of_users);
		update(w_user, users, num_of_users, false);
		break;
	case 3:			//3->deal
		cout << "=======================================" << endl;
		cout << "              Draw! Steps:" << Step_Number << endl;
		cout << "=======================================" << endl;
	}
	writeUsers(filename, users, num_of_users);
	showUsers(users, num_of_users);
	return 0;
}

void readUsers(string filename, tuple<string, int, int> users[MAX_USERS], int &num_of_users) {
	ifstream  in(filename);
	string name;
	int win, sum;
	while (in >> name >> win >> sum) {
		users[num_of_users++] = make_tuple(name, win, sum);
	}
	in.close();
}

void writeUsers(string filename, tuple<string, int, int> users[MAX_USERS], int num_of_users) {
	ofstream out(filename);
	for (int i = 0; i < num_of_users; i++) {
		out << get<0>(users[i]) << endl;
		out << get<1>(users[i]) << endl;
		out << get<2>(users[i]) << endl;
	}
	out.close();

}

string getUser(tuple<string, int, int> users[MAX_USERS], int num_of_users) {
	string name;
	for (;;) {		
		cout << "Please input user name:";
		cin >> name;
		for (int i = 0; i < num_of_users; i++) {
			if (get<0>(users[i]) == name) {
				return name;
			}
		}
		cout << "Cannot find the user,please try again" << endl;
	}
}

void update(string name, tuple<string, int, int> users[MAX_USERS], int num_of_users, bool win ) {
	for (;;) {
		for (int i = 0; i < num_of_users; i++) {
			if (get<0>(users[i]) == name) {
				if(win)
					get<1>(users[i]) += 1;
				get<2>(users[i]) += 1;
				return;
			}
		}
	}
}

bool cmp(tuple<string, int, int>u1, tuple<string, int, int>u2) {
	return 1.0*get<1>(u1) / get<2>(u1) > 1.0*get<1>(u2) / get<2>(u2);
}
void showUsers(tuple<string, int, int> users[MAX_USERS], int num_of_users) {
	cout << "===================ranking list====================" << endl;
	sort(users, users + num_of_users, cmp);
	cout << setw(10) << "name" << setw(10) << "win" << setw(10) << "sum"<<endl;
	for (int i = 0; i < num_of_users; i++) {
		cout << setw(10) << get<0>(users[i]) << setw(10) << get<1>(users[i]) << setw(10) << get<2>(users[i]) << endl;
	}
	cout << endl;
}

void CheckerBoard_Init(char CheckerBoard[MAX][MAX])		
{
	int i, j;
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			if (i == 0 || i == MAX - 1)			//border
			{
				CheckerBoard[i][j] = j;
			}
			else if (j == 0 || j == MAX - 1)
			{
				CheckerBoard[i][j] = i;
			}
			else						//not border
			{
				CheckerBoard[i][j] = '.';
			}
		}
	}
}

void CheckerBoard_Display(char CheckerBoard[MAX][MAX])				
{
	int i, j;
	for (i = 0; i < MAX; i++)
	{
		for (j = 0; j < MAX; j++)
		{
			if (i == 0 || i == MAX - 1)			//border print number
			{
				cout << setw(2) << static_cast<int>(CheckerBoard[i][j]);
			}
			else if (j == 0 || j == MAX - 1)
			{
				cout << setw(2) << static_cast<int>(CheckerBoard[i][j]);
			}
			else				//not border print char
			{
				cout << " "<< CheckerBoard[i][j];
			}
		}
		cout << "" << endl;
	}
}

int CheckerBoard_Play(char CheckerBoard[MAX][MAX], int &Step_Number)			
{
	int Flag = 3;
	while (Flag == 3 && Step_Number != (MAX - 2)*(MAX - 2))
	{
		if (!(Step_Number % 2))		//single black turn, double white turn
		{
			cout << "=======================================" << endl;
			cout << "    Black:x    Steps:"<<Step_Number+1 << endl;
			cout << "=======================================" << endl;
		}
		else
		{
			cout << "=======================================" << endl;
			cout << "               Steps:"<<Step_Number+1<<"    White:o" << endl;
			cout << "=======================================" << endl;
		}
		cout << "input position x and y:";
		int pos_x, pos_y;
		cin >> pos_x >> pos_y;
		if (pos_x == 0 || pos_x >= MAX - 1 || pos_y == 0 || pos_y >= MAX - 1)	//out of border
		{
			cout << "=======================================" << endl;
			cout << "         Beyond the Boundary!" << endl;
			cout << "=======================================" << endl;
		}
		else if (CheckerBoard[pos_x][pos_y] == '.')			//if current location available
		{
			if (!(Step_Number % 2))
			{
				Flag = Black_Play(CheckerBoard, pos_x, pos_y);		//single black turn
			}
			else
			{
				Flag = White_Play(CheckerBoard, pos_x, pos_y);		//double white turn
			}
			Step_Number++;		//increase step by 1
		}
		else			//location not available
		{
			cout << "=======================================" << endl;
			cout << "                Cover!" << endl;
			cout << "=======================================" << endl;
		}
		CheckerBoard_Display(CheckerBoard);	//print out the board
	}
	return Flag;
}

int White_Play(char CheckerBoard[MAX][MAX], int x, int y)		//white placement
{
	int i, Transverse = 1, Vertical = 1, LeftOblique = 1, RightOblique = 1;	//3 variables to calculate continuous numbers
	CheckerBoard[x][y] = 'o';						//set location to 'o'
	for (i = 1; CheckerBoard[x - i][y] == 'o'; i++)		//count vertical up continuous numbers
	{
		Vertical++;
	}
	for (i = 1; CheckerBoard[x + i][y] == 'o'; i++)		//count vertical down continuous numbers
	{
		Vertical++;
	}
	for (i = 1; CheckerBoard[x][y - i] == 'o'; i++)		//count vertical left continuous numbers
	{
		Transverse++;
	}
	for (i = 1; CheckerBoard[x][y + i] == 'o'; i++)		//count vertical right continuous numbers
	{
		Transverse++;
	}
	for (i = 1; CheckerBoard[x - i][y + i] == 'o'; i++)	//count left up continuous numbers
	{
		LeftOblique++;
	}
	for (i = 1; CheckerBoard[x + i][y - i] == 'o'; i++)	//count left down continuous numbers
	{
		LeftOblique++;
	}
	for (i = 1; CheckerBoard[x + i][y + i] == 'o'; i++)	//count right down continuous numbers
	{
		RightOblique++;
	}
	for (i = 1; CheckerBoard[x - i][y - i] == 'o'; i++)	//count right up continuous numbers
	{
		RightOblique++;
	}
	if (Vertical == CONDITION ||
		Transverse == CONDITION ||
		LeftOblique == CONDITION ||
		RightOblique == CONDITION)		//win condition return 1
	{
		return 1;
	}
	return 3;		//return 3
}

int Black_Play(char CheckerBoard[MAX][MAX], int x, int y)		//same as white
{
	int i, Transverse = 1, Vertical = 1, LeftOblique = 1, RightOblique = 1;
	CheckerBoard[x][y] = 'x';
	for (i = 1; CheckerBoard[x - i][y] == 'x'; i++)
	{
		Vertical++;
	}
	for (i = 1; CheckerBoard[x + i][y] == 'x'; i++)
	{
		Vertical++;
	}
	for (i = 1; CheckerBoard[x][y - i] == 'x'; i++)
	{
		Transverse++;
	}
	for (i = 1; CheckerBoard[x][y + i] == 'x'; i++)
	{
		Transverse++;
	}
	for (i = 1; CheckerBoard[x - i][y + i] == 'x'; i++)
	{
		LeftOblique++;
	}
	for (i = 1; CheckerBoard[x + i][y - i] == 'x'; i++)
	{
		LeftOblique++;
	}
	for (i = 1; CheckerBoard[x + i][y + i] == 'x'; i++)
	{
		RightOblique++;
	}
	for (i = 1; CheckerBoard[x - i][y - i] == 'x'; i++)
	{
		RightOblique++;
	}
	if (Vertical == CONDITION ||
		Transverse == CONDITION ||
		LeftOblique == CONDITION ||
		RightOblique == CONDITION)
	{
		return 2;
	}
	return 3;
}
