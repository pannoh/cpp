#include <iostream>
using namespace std;

void clientCode3()
{
    CheckingAccount a,b;
    a.open(2345, 1500);
    a.writeCheck(835);
    a.writeCheck(284);
    a.debit(1450);
    a.display();

    b.open(9876, 4200);
    b.debit(720);
    b.writeCheck(2279);
    b.display();
}

void clientCode5()
{
    CheckingAccount accounts[5];

    CheckingAccount &a=accounts[0], &b=accounts[1];

    a.open(2345, 1500);
    a.writeCheck(835);
    a.writeCheck(284);
    a.debit(1450);
    a.display();

    b.open(9876, 4200);
    b.debit(720);
    b.writeCheck(2279);
    b.display();
}



