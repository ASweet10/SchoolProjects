/* May 20, 2018 | Array Lab */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int playArrays = true;
	string playAgainInput;
	while (playArrays == true)
	{
		
		cout << "Welcome to arrays." << endl;
		cout << "Please enter four digits for array 1." << endl;

		double array1[4];
		for (int i = 1; i <= 4; i++)
		{
			cout << "Please enter a number, then hit enter." << endl;
			cin >> array1[i];
		}

		cout << "Please enter four more digits for array 2." << endl;

		double array2[4];
		for (int i = 1; i <= 4; i++)
		{
			cout << "Please enter a number, then hit enter." << endl;
			cin >> array2[i];
		}

		double array3[4];
		for (int i = 1; i <= 4; i++)
		{
			array3[i] = array1[i] + array2[i];
			cout << array1[i] << " + " << array2[i] << " = " << array3[i] << endl;
		}

		cout << "The sum values of array 3 are: " << endl;

		for (int i = 1; i <= 4; i++)
		{
			cout << array3[i] << endl;
		}

		cout << "Would you like to try again? Hit y or n." << endl;
		cin >> playAgainInput;
		if (playAgainInput == "y")
		{
			playArrays = true;
		}
		else
		{
			playArrays = false;
			break;
		}
	}
	cout << "Goodbye!" << endl;
	system("Pause");

	return 0;

}