#include <iostream>
//================================================
//menu choice
enum  MenuCoice {NEXT_CASINO = 1, CURENT_CASINO, PREVIOUS_CASINO, EXIT};
//rooms in the casino
enum class CasinoRoom {ROOM_1, ROOM_2, ROOM_3};
//diferent casinos for the player to choose
enum class CasinoBuilding {ROYAL, VEGAS, MONACO};
//================================================
//function declaration
int Menu();
std::string PlayerInfo();
void DisplayCasinoName(CasinoBuilding casino);
void Casino(CasinoBuilding casino); 
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

    do
    {
        std::cout << " Please make your choice . " << std::endl;
        std::cin >> choice;
    } while (choice > MenuCoice::EXIT || choice < MenuCoice::NEXT_CASINO);

    return choice;

}
//================================================
//player information
std::string PlayerInfo()
{
    std::string name;
    std::cout << "Please enter your name : ";
    std::cin >> name;

    std::cout << "Hi " << name << std::endl;
    std::cout << ". Your game will start now ! " << std::endl;
    std::cout << " Please choice number from the menu :" << std::endl;
    return name;
}

//================================================
//display casino name
void DisplayCasinoName(CasinoBuilding casino)
{

    switch (casino)
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
}

void Casino(CasinoBuilding casino)
{
   std::cout << " Welcome to the casino " << std::endl;
   DisplayCasinoName(casino);
   system("pause");
}

int main()
{
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

    //================================================================

    name = PlayerInfo();

    //get choice from the menu
    

    do
    {
        choice = Menu();

        if (choice == MenuCoice::NEXT_CASINO)
        {
           
            //randomly choosing if there is a free space in the casino
            int luck = rand() % 100 + 1;

            if (luck >= 50)
            {
                //storing the casino first
                previousCasino = currentCasino;
                //randomly choose avaleble space in the casino
                currentCasino = (CasinoBuilding)(rand() % 3);

                std::cout << " Hi " << name << std::endl;
                std::cout << " Lets test your luck !!! " << std::endl;
                std::cout << " You are in the  " << std::endl;
                // std::cout << " You are in : " << currentCasino << " casino " << std::endl;

              
                Casino(currentCasino);
                choice = 0;
               
                
            }
            else
            {
                std::cout << " Hi " << name << std::endl;
                std::cout << " There is no fun games for you here !!! " << std::endl;
                system("pause");
                choice = 0;
            }
        }
        else if (choice == MenuCoice::CURENT_CASINO)
        {
            std::cout << " Lets test your luck !!! " << std::endl;
            std::cout << " You remain in the " << std::endl;
            // std::cout << " You are in : " << currentCasino << " casino " << std::endl;

            
           
            Casino(currentCasino);
            choice = 0;
        }
        else if (choice == MenuCoice::PREVIOUS_CASINO)
        {
            std::cout << " Lets test your luck !!! " << std::endl;
            std::cout << " You go back to  " << std::endl;
            // std::cout << " You are in : " << currentCasino << " casino " << std::endl;

           
                Casino(previousCasino);
                choice = 0;
                currentCasino = previousCasino;
            
        }

        else if (choice == MenuCoice::EXIT)
        {
            std::cout << " Thank you for playing . Good buy ! " << std::endl;
        }



    } while (choice != MenuCoice::EXIT);

    system("pause");
    return 0;
}
