#pragma once

#include <iostream>

using namespace std;

class AccountData
{
private:
	double balance;
	double creditLimit;

public:
	AccountData(double b, double c);
	double getBalance() const;
	double getCreditLimit() const;
	void setBalance(double b);
	void setCreditLimit(double c);
};

class ProxyAccountData
{
private:
	AccountData data;

public:
	ProxyAccountData(double b, double c);
	double getBalance() const;
	double getCreditLimit() const;
	void setBalance(double b);
	void setCreditLimit(double c);
};

class BankAccount
{
protected:
	ProxyAccountData data;

public:
	BankAccount(double b, double c);
	virtual ~BankAccount(){};
	void report();
};

class RegularBankAccount : public BankAccount
{
public:
	RegularBankAccount(double b, double c) : BankAccount::BankAccount(b, c)
	{

	}
	void report()
	{
		cout << "This is a pleb regular account. It has a small credit limit. Here are the stats:" << endl;
		cout << "Balance: " << data.getBalance() << endl;
		cout << "Credit limit: " << data.getCreditLimit() << endl; 
	}
};

class PremiumBankAccount : public BankAccount
{
public:
	PremiumBankAccount(double b, double c) : BankAccount::BankAccount(b, c)
	{

	}
	void report()
	{	
		cout << "*****" << endl;
		cout << "This is a $WAG PrEmIuM BaNk AcCoUnT. However the only difference from a regular one is the increased credit limit." << endl;
		cout << "Balance: " << data.getBalance() << endl;
		cout << "Credit limit: " << data.getCreditLimit() << endl; 
		cout << "*****" << endl;
	}
};