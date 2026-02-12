/*	June 2, 2018 | Pointers Lab */

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int age = 25;
	int* pAge = &age; //Create Pointer to age
	double gpa = 3.50;
	double* pGPA = &gpa; //Create Pointer to double currentTemp
	float currentTemp = 90.0;
	float* pCurrentTemp = &currentTemp; //Create Pointer to currentTemp

	cout << "The value in " << "age" << " is " << *pAge << endl;
	cout << "The value in " << "gpa" << " is " << *pGPA << endl;
	cout << "The value in " << "currentTemp" << " is " << *pCurrentTemp << endl;

	string marbles[5] = { "Agate", "Cat's Eye", "China", "Cloud", "Swirl" };
	string *marblesPtr;
	marblesPtr = marbles; // Set each element of marblesPtr equal to each corresponding one in marbles?
	for (int i = 0; i < 5; i++)
	{
		cout << "The value in marbles " << i << " is " << marblesPtr[i] << endl;
	}

	system("Pause");
	return 0;
}