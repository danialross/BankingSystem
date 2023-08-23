#ifndef BANK_H
#define BANK_H

#include <iostream>
#include <map>
#include "Card.h"

using namespace std;

class Bank
{
private:
    map<int, Card *> cards;
    map<Card *, int> passwords;

public:
    Bank(int numCards);
    bool isValidUser(int id, int pass);
};

#endif // BANK_H
