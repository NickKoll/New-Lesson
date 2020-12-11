#include <iostream>
#include "Casino.h"
#include "Player.h"
//================================================
//Beting Menu Choice
enum BetMenu {BET_ALL = 1, BET_SOME, GO};

//menu choice
enum  MenuCoice {NEXT_CASINO = 1, CURENT_CASINO, PREVIOUS_CASINO, EXIT};

//Casino names
enum class Name { ROYAL, VEGAS, MONACO };

//================================================
//function declaration
int Menu();
void HUD(Player& player);
//================================================
//player information after every casino
int Menu()
{

    int choice;

    
    
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
        std::cout << "Please make your choice." << std::endl;
        std::cin >> choice;
    } while (choice > MenuCoice::EXIT || choice < MenuCoice::NEXT_CASINO);
    system("pause");
    return choice;

}
//================================================
//player information
void HUD(Player& player)
{
    std::string name;
    std::cout << "Please enter your name:";
    std::getline (std::cin, name);
    player.SetName(name);

    float funds;
    std::cout << "Hi " << name << std::endl;


    do
    {
        std::cout << ". How much money would you like to add to your wallet? " << std::endl;
        std::cout << "Please note , your available balance is between 0 and 1000." << std::endl;
        std::cin >> funds;

    } while (funds < 0 || funds > player.GetFundsMax());


    
    player.SetFunds(funds);

    std::cout << name <<". your game will start now!" << std::endl;

    system("pause");
 
   
}
//===================================================================================

int BetMenu()
{

   system("cls");
   int menuChoice;

       std::cout << "##################################" << std::endl;
       std::cout << "             MENU                 " << std::endl;
       std::cout << "##################################" << std::endl;
       std::cout << "1.       BET ALL YOUR MONEY       " << std::endl;
       std::cout << "2.      BET MUCH AS YOU WANT      " << std::endl;
       std::cout << "3.        LEAVE THE CASINO        " << std::endl;
       std::cout << "##################################" << std::endl;

       do
       {
           std::cout << " Please make your choice." << std::endl;
           std::cin >> menuChoice;
       } while (menuChoice > BetMenu::GO || menuChoice < BetMenu::BET_ALL);

       return menuChoice;
}

//void Casino(CasinoName, casino)
//{
//    
//   DisplayCasinoName(casino);
//
//
//
//   //BetMenu choice
//   int menuChoice;
//   //The amount of money which the player want to bet
//   int playerBetAmount;
//  
//
//   do
//   {
//       menuChoice = BetMenu();
//       
//       if (menuChoice == BetMenu::BET_ALL)
//       {
//           std::cout << " You just bet all your money" << std::endl;
//           std::cout << "Good luck" << std::endl;
//           system("pause");
//            
//       }
//       else if (menuChoice == BetMenu::BET_SOME)
//       {
//           std::cout << "Please enter the amount you want to bet." <<  std::endl;
//           std::cin >> playerBetAmount;
//           std::cout << "You just bet: " << playerBetAmount << std::endl;
//           std::cout << "Good luck" << std::endl;
//           system("pause");
//           
//          
//       }
//       else if (menuChoice == BetMenu::GO)
//       {
//           std::cout << " You are back to the main menu" << std::endl;
//
//       }
//       
//   } while (menuChoice != BetMenu::GO);
// 
//   system("pause");
//   
//}

int main()
{
    Player player;

    Casino royal;
    Casino monaco;
    Casino vegas;

    royal.SetName("ROYAL");
    royal.SetFunds(250.0f);

    vegas.SetName("VEGAS");
    vegas.SetFunds(350.0f);

    monaco.SetName("MONACO");
    monaco.SetFunds(400.0f);

    player.SetCurrentCasino(&royal);

    //money earn from work and stored in the bank
    int bank = 150;

    //money which can be earn from the casino
    
    int choice;

    //levels in th e specific casino
   
    //CasinoRoom casinoRoom = CasinoRoom::ROOM_1;

    //================================================================

    HUD(player);


    std::cout << " Please choice number from the menu:" << std::endl;
    //get choice from the menu
    

    do
    {
        player.HUD();
        choice = Menu();

        if (choice == MenuCoice::NEXT_CASINO)
        {
           
            //randomly choosing if there is a free space in the casino
            int luck = rand() % 100 + 1;

            if (luck >= 50)
            {
                int randomCasino = (rand() % 3);

                switch (randomCasino)
                {
                    case 0:
                    {
                        player.SetCurrentCasino(&royal);
                        break;
                    }
                    case 1:
                    {
                        player.SetCurrentCasino(&vegas);
                        break;
                    }   
                    case 2:
                    {
                        player.SetCurrentCasino(&monaco);
                        break;
                    }
                        
                    
                }

                std::cout << " Hi " << player.GetName() << std::endl;
                std::cout << " Lets test your luck!!! " << std::endl;
                player.GetCurrentCasino()->DisplayName();
                system("pause");
                choice = 0;
               
                
            }
            else
            {
                std::cout << " Hi " << player.GetName() << std::endl;
                std::cout << " There is no fun games for you here!!! " << std::endl;
                system("pause");
                choice = 0;
            }
        }
        else if (choice == MenuCoice::CURENT_CASINO)
        {
            std::cout << " thank you for staying with us !!!" << std::endl;
            system("pause");
            choice = 0;            
        }
        else if (choice == MenuCoice::PREVIOUS_CASINO)
        {
            std::cout << " Lets test your luck!!! " << std::endl;
            std::cout << " You go back to the previous casino  " << std::endl;

            if (player.GetPreviousCasino() != nullptr)
            {
                player.SetCurrentCasino(player.GetPreviousCasino());
                player.GetCurrentCasino()->DisplayName();       
                system("pause");
            }

            choice = 0;
        }

        else if (choice == MenuCoice::EXIT)
        {
            std::cout << "Thank you for playing. Good bye!" << std::endl;
           
        }



    } while (choice != MenuCoice::EXIT);

    system("pause");
    return 0;
}
