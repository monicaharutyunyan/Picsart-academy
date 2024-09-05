#include "../includes/Account.h"

Account::Account() : m_balance {0}, m_name{""} {
	m_id++;
}

Account::Account (std::string name, double balance) : m_name {name}, m_balance {balance}
{
	m_id++;
}

Account::Account (const Account&)
{
	
}
