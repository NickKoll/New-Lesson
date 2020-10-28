#include <iostream>
#include <string>
#include <math.h>

int main()
{
	float number1 = 0;
	float number2 = 0;
	float result = 0.0f;
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
	std::cout << " |Press 6. Forreminder         |" << std::endl;
	std::cout << " |#############################|" << std::endl;


	std::cout << " Please enter number from the menu : " << std::endl;
	std::cin >> opera;
	std::cout << " Please enter number 1 : " << std::endl;
	std::cin >> number1;
	std::cout << " Please enter number 2 : " << std::endl;
	std::cin >> number2;



	if (opera == '1')
	{
		result = number1 + number2;
		std::cout << " The result is : " << result << std::endl;
	}
	else if (opera == '2')
	{

		result = number1 - number2;
		std::cout << " The result is : " << result << std::endl;
	}
	else if (opera == '3')
	{

		result = number1 / number2;
		std::cout << " The result is : " << result << std::endl;
	}
	else if (opera == '4')
	{

		result = number1 * number2;
		std::cout << " The result is : " << result << std::endl;
	}
	else if (opera == '5')
	{

		float result2 = number1;
		int i = 1;
		while (i < number2)
		{
			result2 = result2 * number1;
			i++;

		}
		
		std::cout << " The result is : " << result2 << std::endl;
		
	}
	else if (opera == '6')
	{
		
		float quotient;
			
		quotient = number1 / number2;
		

		std::cout << " Quotient is : " << quotient << std::endl;
	

	}


	system("pause");
	return 0;

}