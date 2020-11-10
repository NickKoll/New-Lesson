#include <iostream>
#include <string>

//10/11/2020
struct Inventory
{
	int value = 0;
	float weight = 0;
	float power = 0.0f;
	int age = 0;
	float offer = 0.0f;
	std::string name;
};
int main()
{

	Inventory weapon;
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




	system("pause");
	return 0;
}