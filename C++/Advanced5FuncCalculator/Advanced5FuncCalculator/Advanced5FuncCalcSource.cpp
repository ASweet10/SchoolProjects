/*	June 3, 2018 | 	Advanced Five Function Calculator Lab  */

#include <iostream>
#include <string>
using namespace std;

double getUserValue();
string chooseCalculation();
double doSubtraction(double value1, double value2);
double doAddition(double value1, double value2);
double doMultiplication(double value1, double value2);
double doDivision(double value1, double value2);
void displayResults(double value1, double value2, string calcChoice);

double getUserValue()
{
	double userValue;
	cin >> userValue;
	return userValue;
};

string chooseCalculation()
{
	string calcChoice;
	cout << "+ = Addition" << endl;
	cout << "- = Subtraction" << endl;
	cout << "* = Multiplication" << endl;
	cout << "/ = Division" << endl;
	cout << "q = Quit" << endl;
	cin >> calcChoice;
	return calcChoice;
};

double doSubtraction(double value1, double value2)
{
	double *pValue1 = &value1;
	double *pValue2 = &value2;
	double subtractOne = pValue1 - pValue2;
	double subtractTwo = pValue2 - pValue1;
	return 0;
};

double doMultiplication(double value1, double value2)
{
	double *pValue1 = &value1;
	double *pValue2 = &value2;
	double product = (*pValue1) * (*pValue2);
	return product;
};

double doDivision(double value1, double value2)
{
	double *pValue1 = &value1;
	double *pValue2 = &value2;
	double quotient1 = (*pValue1) / (*pValue2);
	double quotient2 = (*pValue2) / (*pValue1);
	return 0;
};

double doAddition(double value1, double value2)
{
	double sumValues = value1 + value2;
	return sumValues;
};


void displayResults(double value1, double value2, string calcChoice)
{
	double sumValues = doAddition(value1, value2);
	double subtractOne = doSubtraction(value1, value2);
	double subtractTwo = doSubtraction(value2, value1);
	double product = doMultiplication(value1, value2);
	double quotientOne = doDivision(value1, value2);
	double quotientTwo = doDivision(value2, value1);
	double& rSumValues = sumValues;
	double& rSubtractOne = subtractOne;
	double& rSubtractTwo = subtractTwo;
	double& rProduct = product;
	double& rQuotientOne = quotientOne;
	double& rQuotientTwo = quotientTwo;

	if (calcChoice == "+")
	{
		cout << value1 << " + " << value2 << " = " << rSumValues << endl;
	}
	else if (calcChoice == " - ")
	{
		cout << value1 << "-" << value2 << " = " << rSubtractOne << endl;
		cout << value2 << " - " << value1 << " = " << rSubtractTwo << endl;
	}
	else if (calcChoice == "*")
	{
		cout << value1 << " * " << value2 << " = " << rProduct << endl;
	}
	else if (calcChoice == "/")
	{
		cout << value1 << " / " << value2 << " = " << rQuotientOne << endl;
		cout << value2 << " / " << value1 << " = " << rQuotientTwo << endl;
	}
}

int main()
{
	cout << "Welcome to the calculator." << endl;
		
	int calculatorOn = true;
	while (calculatorOn == true)
	{
		cout << "Please enter a value." << endl;
		double value1 = getUserValue();
		cout << "Please enter a second value." << endl;
		double value2 = getUserValue();
		string continueChoice;
		cout << "Please choose a calculation." << endl;
		string calcChoice = chooseCalculation();
		
		if (calcChoice == "+")
		{
			displayResults(value1, value2, "+");
		}
		else if (calcChoice == " - ")
		{
			displayResults(value1, value2, "-");
		}
		else if (calcChoice == "*")
		{
			displayResults(value1, value2, "*");
		}
		else if (calcChoice == "/")
		{
			displayResults(value1, value2, "/");
		}
		else if (calcChoice == "q" || calcChoice == "Q")
		{
			calculatorOn = false;
		}

		cout << "Would you like to do another calculation? Hit Y or N." << endl;
		cin >> continueChoice;
		if (continueChoice == "y" || continueChoice == "Y")
		{
			calculatorOn = true;
		}
		else
		{
			calculatorOn = false;
		}
	}
	system("Pause");
	return 0;
}