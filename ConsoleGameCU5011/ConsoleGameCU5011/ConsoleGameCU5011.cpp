#include <iostream>

//rooms in the casino
enum class CasinoRoom {ROOM_1, ROOM_2, ROOM_3};
//diferent casinos for the player to choose
enum class CasinoBuilding {ROYAL, VEGAS, MONACO};
//Global variables================================
std::string name;

//current player funds and maximum player funds 
int playerFunds = 0;
int playerFundsMax = 0;

//money earn from work and stored in the bank
int bank = 150;

//money which can be earn from the casino
int casinoFunds = 0;
int choice;
//levels in the specific casino
CasinoBuilding currentCasino = CasinoBuilding::ROYAL;
CasinoBuilding previousCasino = CasinoBuilding::ROYAL;
CasinoRoom casinoRoom = CasinoRoom::ROOM_1;


//================================================
//player information after every casino
int Menu()
{
    
    int choice;

    system("cls");
    
    //Main menu
    std::cout << "##################################" << std::endl;
    std::cout << "             MENU                 " << std::endl;
    std::cout << "##################################" << std::endl;
    std::cout << "1.       GO TO NEXT CASINO        " << std::endl;
    std::cout << "2.      STAY IN THAT CASINO       " << std::endl;
    std::cout << "3. RETURN TO THE PREVIOUS CASINO  " << std::endl;
    std::cout << "4.             EXIT               " << std::endl;
    std::cout << "##################################" << std::endl;

    std::cin >> choice;
    return choice;

}
void Info()
{


}
//================================================
    void Casino()
    {
        std::cout << " Welcome to the casino " << std::endl;
        
    }


int main()
{


    //================================================================

    std::cout << "Please enter your name : ";
    std::cin >> name;

    std::cout << "Hi " << name << std::endl;
    std::cout << ". Your game will start now ! " << std::endl;
    std::cout << " Please choice number from the menu :" << std::endl;


    do
    {
        int choice = Menu();

        if (choice == 1)
        {
           
            //randomly choosing if there is a free space in the casino
            int luck = rand() % 100 + 1;

            if (luck >= 50)
            {
                //storing the casino first
                previousCasino = currentCasino;
                //randomly choose avaleble space in the casino
                currentCasino = (CasinoBuilding)(rand() % 3);


                std::cout << " Lets test your luck !!! " << std::endl;
                std::cout << " You are in the  " << std::endl;
                // std::cout << " You are in : " << currentCasino << " casino " << std::endl;

                switch (currentCasino)
                {
                    case CasinoBuilding::ROYAL:
                    {
                        std::cout << " Royal Building " << std::endl;
                        break;
                    }

                    case CasinoBuilding::VEGAS:
                    {
                        std::cout << " Vegas Building " << std::endl;
                        break;
                    }

                    case CasinoBuilding::MONACO:
                    {
                        std::cout << " Monaco Building " << std::endl;
                        break;

                    }
                }

                Casino();
                choice = 0;
                
            }
            else
            {
                std::cout << " There is no fun games for you here !!! " << std::endl;
                system("pause");
                choice = 0;
            }
        }
        else if (choice == 2)
        {
            std::cout << " Lets test your luck !!! " << std::endl;
            std::cout << " You remain in the " << std::endl;
            // std::cout << " You are in : " << currentCasino << " casino " << std::endl;

            switch (currentCasino)
            {
                case CasinoBuilding::ROYAL:
                {
                    std::cout << " Royal Building " << std::endl;
                    break;
                }

                case CasinoBuilding::VEGAS:
                {
                    std::cout << " Vegas Building " << std::endl;
                    break;
                }

                case CasinoBuilding::MONACO:
                {
                    std::cout << " Monaco Building " << std::endl;
                    break;

                }
            }
            Casino();
            choice = 0;
        }
        else if (choice == 3)
        {
            std::cout << " Lets test your luck !!! " << std::endl;
            std::cout << " You go back to  " << std::endl;
            // std::cout << " You are in : " << currentCasino << " casino " << std::endl;

            switch (previousCasino)
            {
                case CasinoBuilding::ROYAL:
                {
                    std::cout << " Royal Building " << std::endl;
                    break;
                }

                case CasinoBuilding::VEGAS:
                {
                    std::cout << " Vegas Building " << std::endl;
                    break;
                }

                case CasinoBuilding::MONACO:
                {
                    std::cout << " Monaco Building " << std::endl;
                    break;

                }
                Casino();
                choice = 0;
                currentCasino = previousCasino;
            }
        }

        else if (choice == 4)
        {
            std::cout << " Thank you for playing . Good buy ! " << std::endl;
        }



    } while (choice != 4);

    system("pause");
    return 0;
}
