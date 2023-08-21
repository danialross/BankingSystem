#include "Bank.h"
#include "Card.h"

class Bank
{
private:
    map<Card, int> users;
    bool isOnline;

public:
    Bank::Bank(list<Card> &customers)
    {
        random_device rd;
        mt19937 gen(rd()); // Use a Mersenne Twister engine with a random seed

        this->isOnline = true;
        for (Card card : customers)
        {

            // random pass generator
            //  Define the range for 8-digit numbers (10^7 to 10^8 - 1)
            uniform_int_distribution<int> distribution(10000000, 99999999);
            users[card] = (distribution(gen));
        }
    }

    bool Bank::isValidUser(Card &card, int pass)
    {
        if (users[card] == pass)
        {
            return true;
        }

        return false;
    }
};