#include <iostream>
using namespace std;

int MainMenu() {
	int val1, val2, choice;
	char continueChoice = 'y';
	cout
		<< "--- Please Select for Math Solution to use ---\n"
		<< "1. Add\n"
		<< "2. Subtract\n"
		<< "3. Multipliction\n"
		<< "4. Division\n"
		<< "\n"
		<< "Enter Choice: ";
	cin >> choice;
	return choice;
	system("cls");
}

int main()
{
	int val1, val2, choice;
	char continueChoice = 'y';

	do
	{
		do
		{

			switch (MainMenu())
			{
			case 1:
				cout << "Please input value 1:";
				cin >> val1;
				cout << "Please input value 2:";
				cin >> val2;
				cout << val1 << " + " << val2 << " = " << val1 + val2 << "\n";
				break;
			case 2:
				cout << "Please input value 1:";
				cin >> val1;
				cout << "Please input value 2:";
				cin >> val2;
				cout << val1 << " - " << val2 << " = " << val1 - val2 << "\n";
				break;
			case 3:
				cout << "Please input value 1:";
				cin >> val1;
				cout << "Please input value 2:";
				cin >> val2;
				cout << val1 << " * " << val2 << " = " << val1 * val2 << "\n";
				break;
			case 4:
				cout << "Please input value 1:";
				cin >> val1;
				cout << "Please input value 2:";
				cin >> val2;
				cout << val1 << " / " << val2 << " = " << val1 / val2 << "\n";
				break;
			default:
				cout << "User Input Incorrect\n\n";
				break;
			}
		} while (choice < 0 || choice > 5);

		cout << "Do you want to Contninue [y/n]:";
		cin >> continueChoice;

		system("cls");

	} while (continueChoice == 'y');
}
