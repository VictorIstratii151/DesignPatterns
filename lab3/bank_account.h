#pragma once

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
	void setBalance();
	void setCreditLimit();
};

class BankAccount
{
private:
	AccountData data;

public:
	BankAccount();
	void report();
};
