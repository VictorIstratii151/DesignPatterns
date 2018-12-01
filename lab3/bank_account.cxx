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

ProxyAccountData::ProxyAccountData(double b, double c) : data(b, c)
{

}

double ProxyAccountData::getBalance() const
{
	return data.getBalance();
}

double ProxyAccountData::getCreditLimit() const
{
	return data.getCreditLimit();
}

void ProxyAccountData::setBalance(double b)
{
	data.setBalance(b);
}

void ProxyAccountData::setCreditLimit(double c)
{
	data.setCreditLimit(c);
}

BankAccount::BankAccount(double b, double c) : data(b, c)
{

}