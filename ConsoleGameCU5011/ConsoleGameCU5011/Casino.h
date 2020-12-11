#pragma once

#include <string>

#include "Player.h"


class Casino
{
public:

	//Casino rooms (levels)
	enum class Room { ROOM_1, ROOM_2, ROOM_3 };
	

public:   

	Casino();
	~Casino();

public:

	void SetFunds(float funds);
	void SetName(const std::string& name);
	void DisplayName();

private:

	Room m_room;
	float m_funds;
	std::string m_name;

};

