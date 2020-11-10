#include <iostream>
#include <string>
#include <math.h>

// loop the calculator

// passing var to the function (Add example)
float Add(float number1, float number2)
{

	float result = number1 + number2;

	return result;
}

void Subtraction()
{

	float number1 = 0;
	float number2 = 0;
	float result = 0.0f;



	std::cout << " Please enter number 1 : " << std::endl;
	std::cin >> number1;
	std::cout << " Please enter number 2 : " << std::endl;
	std::cin >> number2;
	result = number1 - number2;
	std::cout << " The result is : " << result << std::endl;

}

void Division()
{

	float number1 = 0;
	float number2 = 0;
	float result = 0.0f;



	std::cout << " Please enter number 1 : " << std::endl;
	std::cin >> number1;
	std::cout << " Please enter number 2 : " << std::endl;
	std::cin >> number2;
	result = number1 / number2;
	std::cout << " The result is : " << result << std::endl;

}

void Multiplication()
{

	float number1 = 0;
	float number2 = 0;
	float result = 0.0f;



	std::cout << " Please enter number 1 : " << std::endl;
	std::cin >> number1;
	std::cout << " Please enter number 2 : " << std::endl;
	std::cin >> number2;
	result = number1 * number2;
	std::cout << " The result is : " << result << std::endl;

}

void Power()
{

	float number1 = 0;
	float number2 = 0;
	float result = 0.0f;



	std::cout << " Please enter number 1 : " << std::endl;
	std::cin >> number1;
	std::cout << " Please enter number 2 : " << std::endl;
	std::cin >> number2;
	float result2 = number1;
	int i = 1;
	while (i < number2)
	{
		result2 = result2 * number1;
		i++;

	}

	std::cout << " The result is : " << result2 << std::endl;

}

void Reminder()
{

	float number1 = 0;
	float number2 = 0;
	float quotient;
	float reminder;


	std::cout << " Please enter number 1 : " << std::endl;
	std::cin >> number1;
	std::cout << " Please enter number 2 : " << std::endl;
	std::cin >> number2;


	quotient = number1 / number2;



	std::cout << " Quotient is : " << quotient << std::endl;

}


int main()
{

	char opera = ' ';

	std::cout << "	         _   _      " << std::endl;
	std::cout << "                | | | |      " << std::endl;
	std::cout << " _ __ ___   __ _| |_| |___   " << std::endl;
	std::cout << "| '_ ` _  |/ _` | __| '_  |  " << std::endl;
	std::cout << "| | | | | | (_| | |_| | | |  " << std::endl;
	std::cout << "|_| |_| |_|\__,__|___|_| |_| " << std::endl;
	std::cout << "                             " << std::endl;

	std::cout << " |#############################|" << std::endl;
	std::cout << " |Press 1. For addition        |" << std::endl;
	std::cout << " |Press 2. For subtraction     |" << std::endl;
	std::cout << " |Press 3. For division        |" << std::endl;
	std::cout << " |Press 4. For multiplication  |" << std::endl;
	std::cout << " |Press 5. For power of        |" << std::endl;
	std::cout << " |Press 6. For reminder        |" << std::endl;
	std::cout << " |#############################|" << std::endl;



	std::cout << " Please enter number from the menu : " << std::endl;
	std::cin >> opera;





	if (opera == '1')
	{

		float number1 = 0;
		float number2 = 0;

		std::cout << " Please enter number 1 : " << std::endl;
		std::cin >> number1;
		std::cout << " Please enter number 2 : " << std::endl;
		std::cin >> number2;

		float result = Add(number1, number2);

		std::cout << " The result is : " << result << std::endl;
	}
	else if (opera == '2')
	{

		Subtraction();
	}
	else if (opera == '3')
	{

		Division();

	}
	else if (opera == '4')
	{
		Multiplication();

	}
	else if (opera == '5')
	{

		Power();

	}
	else if (opera == '6')
	{

		Reminder();


	}


	system("pause");
	return 0;

}