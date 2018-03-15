

#ifndef CPP_CHECKINGACCOUNT_H
#define CPP_CHECKINGACCOUNT_H

#include <iostream>
using namespace std;

class CheckingAccount

    {
    private:
        int accNumber;
        float balance;

        CheckingAccount();

public:
    void openAccount(int, float = 0);
    void writecheck(float amount);
    void debit(float);
    void print();

};


#endif //CPP_CHECKINGACCOUNT_H
