#include <iostream>
#include "CheckingAccount.h"
using namespace std;


void CheckingAccount::openAccount(int, float bal)
{
 accNumber = acc;
    balance = bal;
    cout<<"Open an Account";

}
void CheckingAccount::debit(float b)
{
balance += bal;
}
void CheckingAccount::print()
{
 cout<<"Account Number:"<<accNumber<<"Current Balance:"<<balance<<endl;
}



#include "CheckingAccount.h"
