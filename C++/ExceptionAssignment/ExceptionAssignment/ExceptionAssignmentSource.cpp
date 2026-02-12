/* September 14, 2018 | Assignment: Exceptions */

#include <iostream>
#include <string>
#include <exception>
#include <vector>

using namespace std;

double division(int a, int b) {
	if (b == 0) {
		throw "Division by zero condition!";
	}
	return (a / b);
}

double squareRoot(int d) {
	if (d < 0) {
		throw "Can't take square root of a negative!";
	}
	return sqrt(d);
}

int main() {
	int a = 10; //Exception 1 variable
	int b = 0; //Exception 1 variable
	double c = 0; //Exception 1 variable
	vector<int> vector1(10); //Exception 2 + 3 vector
	int d = -10;

	cout << "Welcome to exception handler demonstrator." << endl;

	cout << "Exception 1: Divide by Zero" << endl;
	cout << "Integer A = " << a << endl;
	cout << "Integer B = " << b << endl;
	cout << "If you try to divide Integer A by Integer B, you get... " << endl;
	
		try {
			c = division(a, b);
			cout << c << endl;
		}
		catch (const char* msg) {
			cerr << msg << "\n" << endl;
		} // End of Exception 1

		cout << "Exception 2: Out Of Range" << endl;
		cout << "Vector1 has 10 elements." << endl;
		cout << "If you try to access Vector1 element 25, you get... " << endl;

		try {
			vector1.at(25) = 100;
		}
		catch (const out_of_range& oor) {
			cerr << "Out of range error: " << oor.what() << "\n" << endl;
		}// End of Exception 2

		cout << "Exception 3: Length Error " << endl;
		cout << "Vector1 has 10 elements." << endl;
		cout << "If you try to resize Vector1 to a value above its max size... " << endl;

		try {
			vector1.resize(vector1.max_size() + 1);
		}
		catch (const length_error& le) {
			cerr << "Length Error: " << le.what() << "\n" << endl;
		}//End of Exception 3

		cout << "Exception 4: Domain Error" << endl;
		cout << "squareRoot function will give the square root of a passed integer." << endl;
		cout << "Integer D = -10" << endl;
		cout << "If you try to pass Integer D to squareRoot function you get... " << endl;

		try {
			squareRoot(d);
		}
		catch (const char* msg){
			cerr << msg << "\n" << endl;
		}//End of Exception 4
		
	system("Pause");
	return 0;
}