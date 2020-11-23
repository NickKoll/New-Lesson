#include <iostream>
#include <string>

struct Character
{
	int health = 0;
	float power = 0.0f;
	float stamina = 0.0f;
	std::string name;
};

void Fight(Character* player, Character* enemy)
{
	std::cout << "They fight..." << std::endl;

	player->health -= 1.5f;
	enemy->health -= 4.5f;
}

void Run(Character& player, Character& enemy)
{
	std::cout << "They run..." << std::endl;

	player.stamina -= 4.78f;
	enemy.stamina -= 8.87f;
}

int main()
{

	//pointers=======================================

	int number = 100;
	int* numberPtr = &number;

	number = 200;
	*numberPtr = 300;

	std::cout << "[VARIABLE] The number is: " << number << std::endl;
	std::cout << "[POINTER] The number is " << *numberPtr << std::endl;

	std::cout << "========================================================" << std::endl;

	//references=======================================
	int anotherNumber = 200;
	int& anotherRef = anotherNumber;

	anotherRef = 400;
	anotherNumber = 500;

	std::cout << "The other number is " << anotherNumber << std::endl;
	std::cout << "The other reference is " << anotherRef << std::endl;

	std::cout << "========================================================" << std::endl;

	Character player;
	player.health = 100;
	player.power = 80.5f;
	player.stamina = 45.0f;
	player.name = "John";

	Character enemy;
	enemy.health = 90;
	enemy.power = 56.5f;
	enemy.stamina = 21.0f;
	enemy.name = "Jack";

	std::cout << "The player's health is: " << player.health << std::endl;
	std::cout << "The enemy's health is: " << enemy.health << std::endl;

	std::cout << "========================================================" << std::endl;

	Fight(&player, &enemy);

	std::cout << "The player's health is: " << player.health << std::endl;
	std::cout << "The enemy's health is: " << enemy.health << std::endl;

	std::cout << "========================================================" << std::endl;

	std::cout << "The player's stamina is: " << player.stamina << std::endl;
	std::cout << "The enemy's stamina is: " << enemy.stamina << std::endl;

	std::cout << "========================================================" << std::endl;

	Run(player, enemy);

	std::cout << "The player's stamina is: " << player.stamina << std::endl;
	std::cout << "The enemy's stamina is: " << enemy.stamina << std::endl;

	std::cout << "========================================================" << std::endl;

	//dynamic memory allocation
	Character* newPlayer = new Character;
	newPlayer->health = 67;
	newPlayer->name = "Jessie";
	newPlayer->power = 1000;
	newPlayer->stamina = 87.43f;

	//do stuff with player here...

	//removing the object from memory
	delete newPlayer;
	newPlayer = nullptr;

	//===================================================

	//1. Create a struct called Inventory
	//2. Fill the struct with properties
	//2.1 Value
	//2.2 Power
	//2.3 Weight
	//2.4 Age

	//struct Inventory
	//{
	//
	//};

	//3. Create an array of Inventory items
	//4. Loop through all items and assign their properties
	//5. Create a function called SellItem() that receives one item at a time (how are you going to pass the data - ptr/ref?)
	//6. Loop through the array and pass each item to the function
	//7. The function should check if the item can be sold - use age or value


	system("pause");
	return 0;
}
