#include <iostream>
#include "Player.h"
#include "Casino.h"

Player::Player()
{
	m_funds = 0;
	m_fundsMax = 1000.0f;
	m_currentCasino = nullptr;
	m_previousCasino = nullptr;
	std::cout << " Player created" << std::endl;


}

Player::~Player()
{
	std::cout << " Player destrohed" << std::endl;
}

void Player::Bet()
{

}

void Player::SetName(const std::string& name)
{
	m_name = name;
}

void Player::SetCurrentCasino(Casino* casino)
{
	m_previousCasino = m_currentCasino;
	m_currentCasino = casino;
}


void Player::HUD()
{
	system("cls");
	std::cout << "#===============================#" << std::endl;
	std::cout << "#         Player Stats          #" << std::endl;
	std::cout << "#===============================#" << std::endl;
	std::cout << "Name: " << m_name << std::endl;
	std::cout << "Wallet: " << m_funds << std::endl;
	std::cout << "Max Funds: " << m_fundsMax << std::endl;
	std::cout << "#===============================#" << std::endl;
  	m_currentCasino->DisplayName();
	std::cout << "#===============================#" << std::endl;
}

float Player::GetFunds()
{
	return m_funds;
}

float Player::GetFundsMax()
{
	return m_fundsMax;
}

const std::string& Player::GetName()
{
	return m_name;
}

Casino* Player::GetCurrentCasino()
{
	return m_currentCasino;
}

Casino* Player::GetPreviousCasino()
{
	return m_previousCasino;
}
 
void Player::SetFunds(float funds)
{

	m_funds = funds;


}

void Player::SetFundsMax(float funds)
{

	m_fundsMax = funds;

}
 