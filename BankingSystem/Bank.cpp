#include "Bank.h"
#include "Card.h"

class Bank
{
private:
    map<int, Card> cards;
    map<Card, int> passwords;

public:
    Bank::Bank(list<Card> &customers)
    {
        random_device rd;
        mt19937 gen(rd()); // Use a Mersenne Twister engine with a random seed

        for (Card card : customers)
        {

            // random pass generator
            //  Define the range for 8-digit numbers (10^7 to 10^8 - 1)
            uniform_int_distribution<int> distribution(10000000, 99999999);
            cards[card.getId()] = card;
            passwords[card] = (distribution(gen));
        }
    }

    bool Bank::isValidUser(int id, int pass)
    {
        if (passwords[cards[id]] == pass)
        {
            return true;
        }

        return false;
    }
};