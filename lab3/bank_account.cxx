#include "bank_account.h"

AccountData::AccountData(double b, double c)
{
	setBalance(b);
	setCreditLimit(c);
}

double AccountData::getBalance() const
{
	return balance;
}

double AccountData::getCreditLimit() const
{
	return creditLimit;
}

void AccountData::setBalance(double b)
{
	balance = b;
}

void AccountData::setCreditLimit(double c)
{
	creditLimit = c;
}


BankAccount::BankAccount(double b, double c) : data(b, c)
{

}