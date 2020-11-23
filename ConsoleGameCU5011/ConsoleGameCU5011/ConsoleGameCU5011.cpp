#include <iostream>
#include <windows.h>


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

    std::cout << "                                 "<< " ____       : " << std::endl;
    std::cout << "                                 "<<" /\  _\                             : "               << std::endl;  
    std::cout << "                                 "<<" \ \ \ _   __      ___     ___   __  __: "            << std::endl;  
    std::cout << "                                 "<<"  \ \  _\/'__`\  /' _ `\  /'___\/\ \/\ \: "           << std::endl;  
    std::cout << "                                 "<<"   \ \ \/\ \L\.\_/\ \/\ \/\ \__   \ \_\ \: "          << std::endl;  
    std::cout << "                                 "<<"    \ \_\ \__/.\_\ \_\ \_\ \____\\/`____ \: "         << std::endl;  
    std::cout << "                                 "<<"     \/_/\/__/\/_/\/_/\/_/\/____/ `/___/> \: "        << std::endl;  
    std::cout << "                                 "<<"                                     /\___/: "        << std::endl;  
    std::cout << "                                 "<<"                                     \/__/ : "        << std::endl;  
    
    Sleep(400);

    std::cout << "                                                                    " << " ____                                       : "   << std::endl;  
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
    std::string name = " ";
    std::string yourLocation = " ";

    std::cout << "Please enter your name : ";
    std::cin >> name;
    std::cout << "Please enter the name of the game which you want to play : ";
    std::cin >> yourLocation;
    std::cout <<"Hi " <<name <<" from " << yourLocation << std::endl;
    std::cout << ". Your game will start now ! " << std::endl;
    std::cout << " Please choice number from the menu :" << std::endl;


    // menu
    int choice;



            std::cout << "##################################" << std::endl;
            std::cout << "             MENU                 " << std::endl;
            std::cout << "##################################" << std::endl;
            std::cout << "1.      GO TO NEXT GAME           " << std::endl;
            std::cout << "2.     STAY ON THAT GAME          " << std::endl;
            std::cout << "3.  RETURN TO THE PREVIOUS GAME   " << std::endl;
            std::cout << "4.           EXIT                 " << std::endl;
            std::cout << "##################################" << std::endl;
          
    
}
