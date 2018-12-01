#pragma once

#include "bank_account.h"
#include <list>

using namespace std;

class AccountWarehouse
{
private:
	list<BankAccount*> resources;
	static AccountWarehouse * instance;
	AccountWarehouse() {}

public:
	static AccountWarehouse * getInstance();
	BankAccount * getAccount();
	void returnResource(BankAccount * resource);
};