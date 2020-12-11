#include <iostream>
#include "Casino.h"

Casino::Casino()
{
	m_funds = 0;
	m_room = Room::ROOM_1;
	std::cout << "Casino created." << std::endl; 
}

Casino::~Casino()
{
	std::cout << "Casino destroyed ." << std::endl;
}

void Casino::SetFunds(float funds)
{
	m_funds = funds;
}

void Casino::SetName(const std::string& name)
{
	m_name = name;
}

void Casino::DisplayName()
{
  
        std::cout << " You are in the " << m_name << " building " << std::endl;
 
    system("pause");
}
