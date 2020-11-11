#include <iostream>
#include <string>

//11//11//2020//
struct Inventory
{
	int value = 0;
	float weight = 0;
	float power = 0.0f;
	int age = 0;
	float offer = 0.0f;
	std::string name;
};

void Buy(Inventory& weapon, Inventory& seller)
{
	std::cout << "Offere buying price..." << std::endl;

	weapon.age = 4;
	weapon.offer = 1.87f;
}

void SellItem(Inventory* weapon, Inventory* seller)
{
	std::cout << "Offere selling price..." << std::endl;

	weapon->value = 4.5f;
	seller->offer = 3.5f;
}

int main()
{
	
	
	
	int weapons[5] = { 1, 2, 3, 4, 5 };
	


	entory weapon;
	weapon.value = 100;
	weapon.weight = 2.5f;
	weapon.power = 45.0f;
	weapon.age = 4;

	Inventory seller;
	seller.value = 91;
	seller.weight = 56.5f;
	seller.power = 21.0f;
	seller.age = 4;

	std::cout << "The weapon value is : " << weapon.value << " pounds " << std::endl;
	std::cout << "The seller offer : " << seller.value << " pounds " << std::endl;


	if (seller.value <= weapon.value - 10)
	{
		std::cout << " I'm not selling" << std::endl;

	}

	else if (seller.value > weapon.value - 10)
	{
		std::cout << " I'm  selling the weapon" << std::endl;

	}


	std::cout << "The weapon weight is : " << weapon.weight << " KG " << std::endl;
	std::cout << "The seller offer : " << seller.weight << " pounds " << std::endl;


	if (seller.weight <= weapon.weight - 20)
	{
		std::cout << " I'm not selling" << std::endl;

	}

	else if (seller.weight > weapon.weight - 20)
	{
		std::cout << " I'm  selling the weapon" << std::endl;

	}



	std::cout << "The weapon power is : " << weapon.power << " NM " << std::endl;
	std::cout << "The seller offer : " << seller.power << " pounds " << std::endl;


	if (seller.power <= weapon.power - 15)
	{
		std::cout << " I'm not selling" << std::endl;

	}

	else if (seller.power > weapon.power - 15)
	{
		std::cout << " I'm  selling the weapon" << std::endl;

	}

	std::cout << "The weapon age is : " << weapon.age << " years " << std::endl;
	std::cout << "The seller offer : " << seller.age << " pounds " << std::endl;


	if (seller.age <= weapon.age - 2)
	{
		std::cout << " I'm not selling" << std::endl;

	}

	else if (seller.age > weapon.age - 2)
	{
		std::cout << " I'm  selling the weapon" << std::endl;

	}

	

	Inventory* newWeapon1 = new Inventory;
	newWeapon1->value = 67;
	newWeapon1->weight = 35;
	newWeapon1->power = 1000;
	newWeapon1->age = 87.43f;

	Inventory* newWeapon2 = new Inventory;
	newWeapon2->value = 56;
	newWeapon2->weight = 47;
	newWeapon2->power = 400;
	newWeapon2->age = 7;


	Inventory* newWeapon3 = new Inventory;
	newWeapon3->value = 16;
	newWeapon3->weight = 17;
	newWeapon3->power = 100;
	newWeapon3->age = 1;



	system("pause");
	return 0;
}