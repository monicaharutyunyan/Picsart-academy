#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>


class	Account
{
	public:
		Account ();
		Account (std::string name, double balance);
		Account (const Account&);
		Account (Account&&);
		Account& operator=(const Account&);
		Account& operator=(Account&&);
	
		int					getId() const;
		double			getBalance () const;
		std::string	getName() const;

		void	deposit (double);
		void	withdraw (double);

	private:
		double						m_balance;
		std::string 			m_name;
		static inline int	m_id;
};

Account::m_id {1};

#endif
