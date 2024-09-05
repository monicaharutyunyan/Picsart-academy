#ifndef BANK_H
#define BANK_H

#include <vector>
#include <iostream>
#include "Account.h"

class	Bank{
	public:
		Bank ();
		Bank () : bankName{name};
		Bank (const Bank&);
		Bank (Bank&&);

		Bank& operator=(const Bank&);
		Bank	operator=(Bank&&);

		~Bank();

		void	createAccount(, double);
		void	withdrawFromAccount(std::sring, double);
		void	depositToAccount(std::string);
	
	private:
		static inline int			UserID;
		
		std::string						bankName;
		std::vector<Account>	accountList;
};

Bank::UserID {1};
#endif
