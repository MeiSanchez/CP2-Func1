#include<iostream>
using namespace std;

int MainMenu() {
	int choice;
	char decision = 'y';
	cout << "(1) Add \n(2) Subtract \n(3) Multiply \n(4) Divide \n";
	cin >> choice;
	system("cls");
	return choice;
}

int add(int x, int y) {
	int sum = x + y;
	return sum;
}

int subtract(int x, int y) {
	int diff = x - y;
	return diff;
}

int multiply(int x, int y) {
	int prod = x * y;
	return prod;
}

int divide(int x, int y) {
	int quotient = x / y;
	return quotient;
}

int main() {
	int num1, num2, choice, result;
	char decision = 'y';
	do {
		system("cls");
		cout << "Enter first value: ";
		cin >> num1;
		cout << "Enter second value: ";
		cin >> num2;
		system("cls");
		do {
			switch (MainMenu()) {
			case 1:
				cout << "The sum is: " << add(num1, num2);
				break;
			case 2:
				cout << "The difference is: " << subtract(num1, num2);
				break;

			case 3:
				cout << "The product is: " << multiply(num1, num2);
				break;

			case 4:
				cout << "The quotient is: " << divide(num1, num2);
				break;

			default:
				cout << "Invalid Choice!!\n";
			}
		} while (choice < 0 || choice > 4);

		cout << "\n\nWould you like to try another operation?\n(Y) Yes\n(N) No\n";
		cin >> decision;
	} while (decision == 'y');
	system("cls");
	cout << "Thank you!";
	return 0;
}
