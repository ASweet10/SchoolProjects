/* May 20, 2018 | String Functions Lab */

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string userString;
	string userString2;
	string passWord = "python";
	string passWordGuess;
	int passWordCheck = true;

	cout << "Welcome to string functions." << endl;
	cout << "Please enter a string to be evaluated." << endl;
	cin >> userString;

	int stringLength = userString.length(); //String Length

	cout << "The length of your string is: " << stringLength << " characters" << endl;
	cout << "Please enter another string." << endl;
	cin >> userString2;

	string joinStrings = userString + userString2; //Concatenate strings

	cout << "Both of your strings together: " << joinStrings << endl;
	
	cout << "Now to swap your strings. " << endl;
	
	swap(userString, userString2); //Swap strings

	cout << "Your first entered string is now: " << userString << endl;
	cout << "Your second entered string is now: " << userString2 << endl;


	userString.erase(3, userString.length()); //String element erasing
	userString2.erase(3, userString2.length()); //String element erasing

	cout << "Your strings with all but the first 3 characters removed: " << endl;
	cout << userString << " & " << userString2 << endl;

	cout << "Now you will try to guess a password to proceed." << endl;
	cout << "Hint: It's another common programming language." << endl;

	while (passWordCheck == true)
	{
		cin >> passWordGuess;

		if (passWordGuess == passWord) //String comparison to check if equal
		{
			cout << "Correct!" << endl;
			passWordCheck == false;
			break;
		}
		else
		{
			cout << "Try again! Hint: No capital letters." << endl;
			passWordCheck == true;
		}
	}
	
	system("Pause");
	return 0;
}