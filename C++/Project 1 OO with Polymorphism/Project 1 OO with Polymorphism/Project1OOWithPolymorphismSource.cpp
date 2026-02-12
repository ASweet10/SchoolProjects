/* September 4, 2018 | Project 1 OO with Polymorphism */

#include <iostream>
#include <string>
using namespace std;

class Character
{
protected:
	string gender;
	string armorColor;
public:
	Character()
	{}
	Character(string G, string A)
	{
		gender = G;
		armorColor = A;
	}
	void setGender(string G)
	{
		gender = G;
	}
	void setArmorColor(string A)
	{
		armorColor = A;
	}
	string setGender();
	string setArmorColor();
	void printInfo(string genderChoice, string armorColorChoice);
};

string Character::setGender()
{
	char setGenderLoop;
	setGenderLoop = true;
	while (setGenderLoop == true)
	{
		string gender;
		cout << "Would you like your character to be male or female?" << endl;
		cin >> gender;
		if (gender == "male")
		{
			cout << "Your character is male." << endl;
			setGenderLoop = false;
		}
		else if (gender == "female")
		{
			cout << "Your character is female." << endl;
			setGenderLoop = false;
		}
		else
		{
			cout << "Please enter either male or female (all lowercase)." << endl;
			setGenderLoop = true;
		}

		return gender;
	}
}

string Character::setArmorColor()
{
	char setArmorColorLoop;
	setArmorColorLoop = true;
	while (setArmorColorLoop == true)
	{
		string armorColor;
		cout << "Would you like blue, red, or yellow armor?" << endl;
		cin >> armorColor;
		if (armorColor == "blue")
		{
			cout << "Your armor is blue." << endl;
			setArmorColorLoop = false;
		}
		else if (armorColor == "red")
		{
			cout << "Your armor is red." << endl;
			setArmorColorLoop = false;
		}
		else if (armorColor == "yellow")
		{
			cout << "Your armor is yellow." << endl;
			setArmorColorLoop = false;
		}
		else
		{
			cout << "Please enter blue, red, or yellow. (all lowercase)." << endl;
			setArmorColorLoop = true;
		}
	}
	return armorColor;
}

void Character::printInfo(string genderChoice, string armorColorChoice)
{
	cout << "Your character is a " << genderChoice << "." << endl;
	cout << "Your character has " << armorColorChoice << " armor." << endl;
}

class Wizard : public Character
{
private:
	string staff;
	string magic;
public:
	Wizard()
	{}
	Wizard(string S, string M)
	{
		staff = S;
		magic = M;
	}
	string setStaff();
	string setMagic();
	void printInfo(string staffChoice, string magicChoice);
};

string Wizard::setStaff()
{
	char setStaffLoop;
	setStaffLoop = true;
	while (setStaffLoop == true)
	{
		string staff;
		cout << "What type of staff would you like your wizard to wield?" << endl;
		cout << "Holy = Holy Staff, Ddark = Dark Staff, Fire = Fire Staff." << endl;
		cin >> staff;
		if (staff == "Holy")
		{
			cout << "Your wizard wields a holy staff." << endl;
			setStaffLoop = false;
		}
		else if (staff == "Dark")
		{
			cout << "Your wizard wields a dark staff." << endl;
			setStaffLoop = false;
		}
		else if (staff == "Fire")
		{
			cout << "Your wizard wields a fire staff." << endl;
			setStaffLoop = false;
		}
		else
		{
			cout << "Please enter Holy, Dark, or Fire." << endl;
			setStaffLoop = true;
		}
	}
	return staff;
}

string Wizard::setMagic()
{
	char setMagicLoop;
	setMagicLoop = true;
	while (setMagicLoop == true)
	{
		string magic;
		cout << "What type of magic would you like your wizard to specialize in?" << endl;
		cout << "Holy = Holy magic, Dark = Dark magic, Fire = Fire magic." << endl;
		cin >> magic;
		if (magic == "Holy")
		{
			cout << "Your wizard specializes in holy magic." << endl;
			setMagicLoop = false;
		}
		else if (magic == "Dark")
		{
			cout << "Your wizard specializes in dark magic." << endl;
			setMagicLoop = false;
		}
		else if (magic == "Fire")
		{
			cout << "Your wizard specializes in fire magic." << endl;
			setMagicLoop = false;
		}
		else
		{
			cout << "Please enter Holy for holy, Ddark for dark, or Fire for fire magic." << endl;
			setMagicLoop = true;
		}
	}
	return magic;
}
void Wizard::printInfo(string staffChoice, string magicChoice)
{
	cout << "Your wizard wields a " << staffChoice << "." << endl;
	cout << "Your wizard specializes in " << magicChoice << " magic." << endl;
}

class Warrior : public Character
{
private:
	string weapon;
	string shield;
public:
	Warrior()
	{}
	Warrior(string W, string S)
	{
		weapon = W;
		shield = S;
	}
	string setWeapon();
	string setShield();
	void printInfo(string weaponChoice, string shieldChoice);

};

string Warrior::setWeapon()
{
	char setWeaponLoop;
	setWeaponLoop = true;
	while (setWeaponLoop == true)
	{
		string weapon;
		cout << "Would you like your warrior to wield a sword, axe, or mace?" << endl;
		cout << "Sword = Sword. Axe = Axe. Mace = Mace." << endl;
		cin >> weapon;
		if (weapon == "Sword")
		{
			cout << "Your warrior wields a sword." << endl;
			setWeaponLoop = false;
		}
		else if (weapon == "Axe")
		{
			cout << "Your warrior wields an axe." << endl;
			setWeaponLoop = false;
		}
		else if (weapon == "Mace")
		{
			cout << "Your warrior wields a mace." << endl;
			setWeaponLoop = false;
		}
		else
		{
			cout << "Please enter Sword for sword, Axe for axe, or Mace for mace." << endl;
			setWeaponLoop = true;
		}
	}
	return weapon;
}

string Warrior::setShield()
{
	char setShieldLoop;
	setShieldLoop = true;
	while (setShieldLoop == true)
	{
		string shield;
		cout << "Would you like your warrior to wield a buckler or kite shield?" << endl;
		cout << "Buckler = buckler. Kite = kite." << endl;
		cin >> shield;
		if (shield == "Buckler")
		{
			cout << "Your warrior wields a buckler." << endl;
			setShieldLoop = false;
		}
		else if (shield == "Kite")
		{
			cout << "Your warrior wields a kite." << endl;
			setShieldLoop = false;
		}
		else
		{
			cout << "Please enter Buckler for buckler or Kite for kite." << endl;
			setShieldLoop = true;
		}
	}
	return shield;
}

void Warrior::printInfo(string weaponChoice, string shieldChoice)
{
	cout << "Your warrior wields a " << weaponChoice << "." << endl;
	cout << "Your warrior also wields a " << shieldChoice << "." << endl;
}

int main()
{
	cout << "Welcome to character creator." << endl;
	Character Char1;
	string genderChoice = Char1.setGender();
	string armorColorChoice = Char1.setArmorColor();
	Char1.printInfo(genderChoice, armorColorChoice);

	char playerChoiceLoop;
	playerChoiceLoop = true;
	while (playerChoiceLoop == true)
	{
		string playerChoice;
		cout << "Would you like your character to be a wizard or a warrior?" << endl;
		cout << "Please type wiz or war" << endl;
		cin >> playerChoice;

		if (playerChoice == "wiz")
		{
			Wizard Wiz1;
			string staffChoice = Wiz1.setStaff();
			string magicChoice = Wiz1.setMagic();
			Char1.printInfo(genderChoice, armorColorChoice);
			Wiz1.printInfo(staffChoice, magicChoice);
			playerChoiceLoop = false;
		}
		else if (playerChoice == "war")
		{
			Warrior War1;
			string weaponChoice = War1.setWeapon();
			string shieldChoice = War1.setShield();
			Char1.printInfo(genderChoice, armorColorChoice);
			War1.printInfo(weaponChoice, shieldChoice);
			playerChoiceLoop = false;
		}
		else
		{
			cout << "Please enter either wiz or war (lower case)." << endl;
			playerChoiceLoop = true;
		}
	}

	system("Pause");
	return 0;
}