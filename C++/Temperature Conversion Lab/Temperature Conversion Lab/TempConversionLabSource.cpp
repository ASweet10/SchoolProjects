/* May 17, 2018 | Temperature Conversion Lab */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char convertTemp;
	convertTemp = true;
	while (convertTemp == true)
	{
		char playAgain;
		char tempType;
		double temp, fahrenheit, celsius;

		cout << "Welcome to temperature conversion." << endl;
		cout << "Please enter the temperature." << endl;
		cin >> temp;
		cout << "Enter an F if the temp is in fahrenheit or a C if it's in celsius";
		cin >> tempType;

		cout << setiosflags(ios::fixed)
			<< setiosflags(ios::showpoint)
			<< setprecision(2);

		if (tempType == 'f')
		{
			celsius = (temp * 5 / 9) - 32;
			cout << "The equivalent celsius temp is: "
				<< celsius << endl;
		}
		else
		{
			fahrenheit = 32 + (temp * 9 / 5);
			cout << "The equivalent fahrenheit temp is: "
				<< fahrenheit << endl;
		}

		cout << "Would you like to convert another temperature? Hit Y or N." << endl;
		cin >> playAgain;
		if (playAgain == 'y')
			convertTemp == true;
		else
			convertTemp == false;
		break;

	}

	system("Pause");
	return 0;
}