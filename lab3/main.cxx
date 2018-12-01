#include "account_warehouse.h"

int main()
{
	AccountWarehouse * pool = AccountWarehouse::getInstance();

	RegularBankAccount rba(123.4, 567.8);
	PremiumBankAccount pba(5678.9, 9999.9);

	pool->returnResource(&rba);
	pool->returnResource(&pba);

	RegularBankAccount * regular = dynamic_cast<RegularBankAccount*>(pool->getAccount());
	regular->report();
	PremiumBankAccount * premium = dynamic_cast<PremiumBankAccount*>(pool->getAccount());
	premium->report();
}
