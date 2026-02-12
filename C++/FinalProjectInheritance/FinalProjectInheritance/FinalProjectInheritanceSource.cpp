/* June 8, 2018 | Final Project Inheritance and Classes */

#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string color;
	string diet;
	string noise;

public:
	string setColor();
	string setDiet();
	string setNoise();
	void display(string color, string diet, string noise);
};

string Animal::setColor()
{
	cout << "Please enter a color for your animal." << endl;
	cin >> color;
	return color;
}

string Animal::setDiet()
{
	cout << "Is your animal a Carnivore?" << endl;
	cout << "Is your animal an Herbivore?" << endl;
	cout << "Or is your animal an Omnivore?" << endl;
	cin >> diet;
	return diet;
}

string Animal::setNoise()
{
	cout << "What sound does your animal make?" << endl;
	cin >> noise;
	return noise;
}


void Animal::display(string color, string diet, string noise)
{
	cout << "The animal's color is: " << color;
	cout << ", it is mainly a(n) " << diet;
	cout << ", and the noise it makes is: " << noise;
}

//Bird Child Class
class Bird
{
private:
	string color;
	string diet;
	string noise;
public:
	string setColor();
	string setDiet();
	string setNoise();
	void display(string color, string diet, string noise);
};

string Bird::setColor()
{
	cout << "Please enter a color for your animal." << endl;
	cin >> color;
	return color;
}

string Bird::setDiet()
{
	cout << "Is your animal a Carnivore?" << endl;
	cout << "Is your animal an Herbivore?" << endl;
	cout << "Or is your animal an Omnivore?" << endl;
	cin >> diet;
	return diet;
}

string Bird::setNoise()
{
	cout << "What sound does your animal make?" << endl;
	cin >> noise;
	return noise;
}

void Bird::display(string color, string diet, string noise)
{
	cout << "The animal's color is: " << color;
	cout << ", its diet is: " << diet;
	cout << ", and the noise it makes is: " << noise;
}

//Dog child class
class Dog
{
private:
	string color;
	string diet;
	string noise;
public:
	string setColor();
	string setDiet();
	string setNoise();
	void display(string color, string diet, string noise);
};
string Dog::setColor()
{
	cout << "Please enter a color for your animal." << endl;
	cin >> color;
	return color;
}

string Dog::setDiet()
{
	cout << "Is your animal a Carnivore?" << endl;
	cout << "Is your animal an Herbivore?" << endl;
	cout << "Or is your animal an Omnivore?" << endl;
	cin >> diet;
	return diet;
}

string Dog::setNoise()
{
	cout << "What sound does your animal make?" << endl;
	cin >> noise;
	return noise;
}

void Dog::display(string color, string diet, string noise) 
{
	cout << "The animal's color is: " << color;
	cout << ", its diet is: " << diet;
	cout << ", and the noise it makes is: " << noise;
}

//Cat child class
class Cat
{
private:
	string color;
	string diet;
	string noise;
public:
	string setColor();
	string setDiet();
	string setNoise();
	void display(string color, string diet, string noise);
};

string Cat::setColor()
{
	cout << "Please enter a color for your animal." << endl;
	cin >> color;
	return color;
}

string Cat::setDiet()
{
	cout << "Is your animal a Carnivore?" << endl;
	cout << "Is your animal an Herbivore?" << endl;
	cout << "Or is your animal an Omnivore?" << endl;
	cin >> diet;
	return diet;
}

string Cat::setNoise()
{
	cout << "What sound does your animal make?" << endl;
	cin >> noise;
	return noise;
}

void Cat::display(string color, string diet, string noise)
{
	cout << "The animal's color is: " << color;
	cout << ", its diet is: " << diet;
	cout << ", and the noise it makes is: " << noise;
}

int getAnimalChoice()
{
	int animalChoice;
	cout << "Please enter 1 for Bird, 2 for Dog, or 3 for Cat." << endl;
	cin >> animalChoice;
	return animalChoice;	
}

int main()
{
	int userChoice;
	cout << "Welcome to interactive zoo" << endl;
	userChoice = getAnimalChoice();
	if (userChoice == 1)
	{
		cout << "You have chosen the bird." << endl;
		Animal Bird;
		string color = Bird.setColor();
		string diet = Bird.setDiet();
		string noise = Bird.setNoise();
		Bird.display(color, diet, noise);
	}
	if (userChoice == 2)
	{
		cout << "You have chosen the dog." << endl;
		Animal Dog;
		string color = Dog.setColor();
		string diet = Dog.setDiet();
		string noise = Dog.setNoise();
		Dog.display(color, diet, noise);
	}
	if (userChoice == 3)
	{
		cout << "You have chosen the cat." << endl;
		Animal Cat;
		string color = Cat.setColor();
		string diet = Cat.setDiet();
		string noise = Cat.setNoise();
		Cat.display(color, diet, noise);
	}
	else
	{
		cout << "Goodbye!" << endl;
	}

	system("Pause");
	return 0;
}