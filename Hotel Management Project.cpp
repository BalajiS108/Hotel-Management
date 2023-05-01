#include <iostream>
using namespace std;
int main()
{
	int A_dosa = 0, A_pasta = 0, A_samosa = 0; // Available food items
	int S_dosa = 0, S_pasta = 0, S_samosa = 0; // Sold food items
	int R_dosa, R_pasta, R_samosa;			   // Remaining food items
	int p_dosa = 10, p_pasta = 20, p_samosa = 30;
	int option, total_cost = 0;
	int r_dosa, r_pasta, r_samosa;

	cout << "\t\t Hello Wel come to Govindas";

	cout << "\nEnter no of Available Dosas:";
	cin >> A_dosa;
	cout << "\nEnter no of Available Pastas:";
	cin >> A_pasta;
	cout << "\nEnter no of Available samosas:";
	cin >> A_samosa;
	cout << "\n\tAvailable items are as below:";
	cout << "\n\nItems\t\tQuantity Available";
	cout << "\n1.Dosa:"
		 << "\t\t\t" << A_dosa;
	cout << "\n2.pasta:"
		 << "\t\t" << A_pasta;
	cout << "\n3.samosa:"
		 << "\t\t" << A_samosa;
m:
	cout << "\n\t Please choose option from below list:";

	cout << "\n1.Dosa:";
	cout << "\n2.pasta:";
	cout << "\n3.samosa:";
	cout << "\n4.Account Details:";
	cout << "\n5.Refill the quantity of items:";
	cout << "\n6.Quit\n";
	cin >> option;
	switch (option)
	{
	case 1:

		cout << "\nPlease enter how many dosas you want to sell:";
		cin >> S_dosa;
		if (A_dosa < S_dosa)
		{
			cout << "\nYou have only " << A_dosa << " Available";
		}
		else
		{
			R_dosa = A_dosa - S_dosa;
			cout << "\nRemaining Dosas after this order are:" << R_dosa;
			A_dosa = R_dosa;
		}
		break;

	case 2:

		cout << "\nPlease enter how many pastas you want to sell:";
		cin >> S_pasta;
		if (A_pasta < S_pasta)
		{
			cout << "\nYou dont have only " << A_pasta << " Available";
		}
		else
		{
			R_pasta = A_pasta - S_pasta;
			cout << "\nRemaining Pastas after this order are:" << R_pasta;
			A_pasta = R_pasta;
		}
		break;

	case 3:

		cout << "\nPlease enter how many samosas you want to sell:";
		cin >> S_samosa;
		if (A_samosa < S_samosa)
		{
			cout << "\nYou dont have only " << A_samosa << "  Available";
		}
		else
		{
			R_samosa = A_samosa - S_samosa;
			cout << "\nRemaining Dosas after this order are:" << R_samosa;
			A_samosa = R_samosa;
		}
		break;

	case 4:

		total_cost = total_cost + p_dosa * S_dosa + p_samosa * S_samosa + p_pasta * S_samosa;
		cout << "\nTotal cost of the sold food items today:" << total_cost;
		break;

	case 5:
		cout << " How many no of dosas you want to add";
		cin >> r_dosa;
		A_dosa = A_dosa + r_dosa;
		cout << "\n After adding now total available dosas are";
		cout << A_dosa;
		cout << "\nHow many no of pastas you want to add";
		cin >> r_pasta;
		A_pasta = A_pasta + r_pasta;
		cout << "\n After adding now, total available pastas are";
		cout << A_pasta;
		cout << " \nHow many no of samosas you want to add";
		cin >> r_samosa;
		A_samosa = A_samosa + r_samosa;
		cout << "\n After adding now total available samosas are";
		cout << A_samosa;

		break;

	case 6:
		exit(0);
		break;
	default:

		cout << " \nInvalid Entry...Please enter correct option";
		break;
	}

	goto m;
}
