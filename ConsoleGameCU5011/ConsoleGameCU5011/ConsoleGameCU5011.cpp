#include <iostream>
#include <windows.h>


int main()
{
    // game intro

    
    std::cout << "  ____                                      "<< std::endl;                                     
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
    std::string gameName = " ";

    std::cout << "Please enter your name : ";
    std::cin >> name;
    std::cout << "Please enter the name of the game which you want to play : ";
    std::cin >> gameName;
    std::cout <<"Hi " <<name <<". Your game of " << gameName << " will start now !" ;

   
    
}
