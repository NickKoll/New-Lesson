#pragma once

#include <string>
#include "Casino.h"


class Player
{
public:
	Player();
	~Player();
public:

	void SetFunds(float funds);
	void SetFundsMax(float funds);
	void SetName(const std::string& name);
	void SetCurrentCasino(Casino* casino);
	

	float GetFunds();
	float GetFundsMax();
	const std::string& GetName();

	Casino* GetCurrentCasino(); 
	Casino* GetPreviousCasino();

	void Bet();
	void HUD();


private:
	float m_fundsMax;
	float m_funds;
	std::string m_name;

	Casino* m_previousCasino;
	Casino* m_currentCasino;	

};

