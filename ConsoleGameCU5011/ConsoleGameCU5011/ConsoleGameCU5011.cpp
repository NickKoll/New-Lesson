#include <iostream>
#include <windows.h>


void Menu()
{
    int choice;



    std::cout << "##################################" << std::endl;
    std::cout << "             MENU                 " << std::endl;
    std::cout << "##################################" << std::endl;
    std::cout << "1.       GO TO NEXT CASINO        " << std::endl;
    std::cout << "2.      STAY IN THAT CASINO       " << std::endl;
    std::cout << "3. RETURN TO THE PREVIOUS CASINO  " << std::endl;
    std::cout << "4.           EXIT                 " << std::endl;
    std::cout << "##################################" << std::endl;

    std::cin >> choice;

    if (choice == 1)
    {
        int luck = rand() % 100 + 1;
       
        if (luck >= 50)
        {
            currentCasino = casinoName[rand() % 2];

            std::cout << " Lets test your luck !!! " << std::endl;
            std::cout << " You are in : " << currentCasino << " casino " << std::endl;

            Casino();
        }
        else 
        {
            std::cout << " There is no fun games for you here !!! " << std::endl;
            Menu();
        }
    }
    else if (choice == 2)
    {
        std::cout << "2." << std::endl;
    }
    else if (choice == 3)
    {
        std::cout << "3." << std::endl;
    }
    else if (choice == 4)
    {
        exit;
    }
    else
    {
        std::cout << "Invalid number . Please enter 1, 2, 3 or 4." << std::endl;
        Menu();
    }


}

void Info()
{
  
    std::cout << "Name : " << name << std::endl;
    std::cout << "Location : " << yourLocation << std::endl;

}

void Casino()
{


}

std::string name = " ";
std::string yourLocation = " ";
int funds = 0;
int maxFunds = 0;
int work = 0;
int casinoFunds = 0;
int casinoRoom = 0;
std::string casinoName[] = { "Royal", "Vega", "Monaco" };
std::string currentCasino = " ";

int main()
{
   


    // game intro

    
   
    std::cout << " /\  _\                                     "<< std::endl;             
    std::cout << " \ \ \ _   __      ___     ___   __  __     "<< std::endl;          
    std::cout << "  \ \  _\/'__`\  /' _ `\  /'___\/\ \/\ \    "<< std::endl;         
    std::cout << "   \ \ \/\ \L\.\_/\ \/\ \/\ \__   \ \_\ \   "<< std::endl;        
    std::cout << "    \ \_\ \__/.\_\ \_\ \_\ \____\\/`____ \  "<< std::endl;       
    std::cout << "     \/_/\/__/\/_/\/_/\/_/\/____/ `/___/> \ "<< std::endl;      
    std::cout << "                                     /\___/ "<< std::endl;      
    std::cout << "                                     \/__/  "<< std::endl;      
    
    Sleep(400);

    
    std::cout << "                                 "<<" /\  _\                             : "               << std::endl;  
    std::cout << "                                 "<<" \ \ \ _   __      ___     ___   __  __: "            << std::endl;  
    std::cout << "                                 "<<"  \ \  _\/'__`\  /' _ `\  /'___\/\ \/\ \: "           << std::endl;  
    std::cout << "                                 "<<"   \ \ \/\ \L\.\_/\ \/\ \/\ \__   \ \_\ \: "          << std::endl;  
    std::cout << "                                 "<<"    \ \_\ \__/.\_\ \_\ \_\ \____\\/`____ \: "         << std::endl;  
    std::cout << "                                 "<<"     \/_/\/__/\/_/\/_/\/_/\/____/ `/___/> \: "        << std::endl;  
    std::cout << "                                 "<<"                                     /\___/: "        << std::endl;  
    std::cout << "                                 "<<"                                     \/__/ : "        << std::endl;  
    
    Sleep(400);

                                     
    std::cout << "                                                                    " << " /\  _\                                     : "   << std::endl;  
    std::cout << "                                                                    " << " \ \ \ _   __      ___     ___   __  __     : "   << std::endl;  
    std::cout << "                                                                    " << "  \ \  _\/'__`\  /' _ `\  /'___\/\ \/\ \    : "   << std::endl;  
    std::cout << "                                                                    " << "   \ \ \/\ \L\.\_/\ \/\ \/\ \__   \ \_\ \   : "   << std::endl;  
    std::cout << "                                                                    " << "    \ \_\ \__/.\_\ \_\ \_\ \____\\/`____ \  : "   << std::endl;  
    std::cout << "                                                                    " << "     \/_/\/__/\/_/\/_/\/_/\/____/ `/___/> \ : "   << std::endl;  
    std::cout << "                                                                    " << "                                     /\___/ : "   << std::endl;  
    std::cout << "                                                                    " << "                                     \/__/  : "   << std::endl;  

    Sleep(400);



    // character input 
 

    std::cout << "Please enter your name : ";
    std::cin >> name;
    std::cout << "Please enter the name of your city : ";
    std::cin >> yourLocation;
    std::cout <<"Hi " <<name <<" from " << yourLocation << std::endl;
    std::cout << ". Your game will start now ! " << std::endl;
    std::cout << " Please choice number from the menu :" << std::endl;


    Menu();
   
          
    return 0;
}
