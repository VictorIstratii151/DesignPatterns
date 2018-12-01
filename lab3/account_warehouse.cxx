#include "account_warehouse.h"

AccountWarehouse * AccountWarehouse::instance = 0;

AccountWarehouse * AccountWarehouse::getInstance()
{
	if (instance == 0)
    {
        instance = new AccountWarehouse;
    }
    return instance;
}

BankAccount * AccountWarehouse::getAccount()
{
    if (resources.empty())
    {
        cout << "Creating new." << endl;
        return new RegularBankAccount(123.4, 678.9);
    }
    else
    {
        cout << "Reusing existing." << endl;
        BankAccount* resource = resources.front();
        resources.pop_front();
        return resource;
    }
}

void AccountWarehouse::returnResource(BankAccount * resource)
{
	resources.push_back(resource);
}