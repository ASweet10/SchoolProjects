/*	May 19, 2018 | Lab ASCII Tree */

#include <iostream>

using namespace std;

int main()
{
		int numLines;

		cout << "Welcome to christmas tree simulator." << endl;
		cout << "Please enter the number of lines you'd like in your tree." << endl;
		cin >> numLines;


		for (int i = 0; i <= numLines; i++)
		{
			for (int b = i + 1; b < numLines; b++)
			{
				cout << " ";
			}
			for (int b = 0; b <= (2 * i); b++)
			{
				cout << "*";
			}
			cout << endl;

		}
		
		cout << "Thank you for using the christmas tree simulator." << endl;

	system("Pause");
	return 0;

}