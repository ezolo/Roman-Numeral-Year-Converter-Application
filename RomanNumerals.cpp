/* Name: Eva Zolotarev
Program Title: When in Rome...
Program Description:
1.The following program should covert numbers to Roman form, while having a limit to how big or small
numbers a user may enter. It also should continuously ask the user whether to convert another number.
*/

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

	double num;
	int intnum, m, d, c, l, x, v, i, n;
	char yes = 'y';
	string input;

	cout << "\n\nWelcome to the Roman Numeral Program!!!";
	cout << "\n\nWill you be converting numbers to Roman form with us today?";
	cin >> input;
	if (input == "yes" || input == "y")
	{
		cout << "\nExcellent!  Glad to have you along!";
	}
	else if (input == "nah..." || input == "no")
	{
		cout << "\nThank you for using the RNP!!\n\nEndeavor to have a plebeian day!" << endl;
		exit(0);
	}

	while (input == "yes" || input == "y")
	{
		cout << "\nEnter a number: ";
		cin >> num;
		intnum = (int)num;

		if (intnum <= 4000)
		{
			m = intnum / 1000;
			n = 0;
			{
				cout << "\nAh, I believe that would be ";
				for (n; n < m; n++)
					cout << "M";
			}
			intnum = intnum % 1000;
		}
		else if (intnum > 4000)
		{
			cout << "\nOh, I'm sorry, that value is too large for Roman civilization.";
			cout << "\n\nPlease try again with a number [strictly] less than 4000, thank you..." << endl;
			cout << "\nEnter a number: ";
			cin >> num;
			intnum = (int)num;
		}

		if (intnum >= 900)
		{
			cout << "CM";
			intnum = intnum % 900;
		}
		else if (intnum >= 500)
		{
			{
				d = intnum / 500;
				n = 0;
				for (n; n < d; n++)
					cout << "D";
			}
			intnum = intnum % 500;
		}

		if (intnum >= 400)
		{
			cout << "CD";
			intnum = intnum % 400;
		}
		else if (intnum >= 100)
		{
			{
				c = intnum / 100;
				n = 0;
				for (n; n < c; n++)
					cout << "C";
			}
			intnum = intnum % 100;
		}
		if (intnum >= 90)
		{
			cout << "XC";
			intnum = intnum % 90;
		}

		else if (intnum >= 50)
		{
			{
				l = intnum / 50;
				n = 0;
				for (n; n < l; n++)
					cout << "L";
			}
			intnum = intnum % 50;
		}
		if (intnum >= 40)
		{
			cout << "XL";
			intnum = intnum % 40;
		}

		else if (intnum >= 10)
		{
			{
				x = intnum / 10;
				n = 0;
				for (n; n < x; n++)
					cout << "X";
			}
			intnum = intnum % 10;
		}

		if (intnum >= 9)
		{
			cout << "IX";
			intnum = intnum % 9;
		}

		else if (intnum >= 5)
		{
			{
				v = intnum / 5;
				n = 0;
				for (n; n < v; n++)
					cout << "V";
			}
			intnum = intnum % 5;
		}
		if (intnum >= 4)
		{
			cout << "IV";
			intnum = intnum % 4;
		}
		else if (intnum >= 1)
		{
			i = intnum;
			n = 0;
			for (n; n < i; n++)
				cout << "I";
		}
		else if (intnum <= 0)
		{
			cout << "\nOh, I'm sorry, that value is too small for Roman civilization.";
			cout << "\n\nPlease try again with a number [strictly] greater than 0, thank you..." << endl;
			cout << "\nEnter a number: ";
			cin >> num;
			intnum = (int)num;
		}

		cout << "\nWould you like to convert another number? ";
		cin >> input;
		if (input == "yes" || input == "y")
		{
			cout << endl;
		}
		else if (input == "nah..." || input == "no")
		{
			cout << "\nThank you for using the RNP!!\n\nEndeavor to have a plebeian day!" << endl;
			exit(0);
		}
	}
	return 0;
}
