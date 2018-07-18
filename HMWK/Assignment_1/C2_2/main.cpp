#include <iostream>
using namespace std;

int main()
{
	double POTS 		= .58,
		   CompSales 	= 8600000;
	int    ECSales		= CompSales * POTS;

	cout << "The East Coast division is predicted to generate $";
	cout << ECSales << " in sales." << endl; 
	return 0;
}
