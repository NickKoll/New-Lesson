#include <iostream>
#include <string>

using namespace std;


int main()
{
	int nqkvi[] = { 1 , 2 , 3 };

	nqkvi[2] = 24;
	

	cout << nqkvi[2]<< endl;



	int myNumber = 10;
	int yourNumber = 0;
	int count = 0;
	while (myNumber != yourNumber)
	{
		if (count < 3)
		{
			cout << "Please ente your number" << endl;
			cin >> yourNumber;
			count++;
		}
		else if (yourNumber == myNumber && count < 3)
		{

			cout << "you win";
		}
		else 
		{

			cout << "you lose";
			break;
		}
			
		
	
	}

	




	return 0;
}