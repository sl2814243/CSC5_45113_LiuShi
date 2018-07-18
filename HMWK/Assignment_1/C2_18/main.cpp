#include <iostream>
using namespace std;

int main()
{
	int Customers  = 16500,
		BuyEDrinks = Customers * .15,
		Citrus 	   = BuyEDrinks * .58;

	cout << "The approximately " << BuyEDrinks << " customers in the survey\n";
	cout <<	"purchase one or more energy drinks per week.\n\n";
	cout << "The approximately " << Citrus << " customers in the survey\nprefer ";
	cout << "citrus flavored energy drinks.\n";
	return 0;
}