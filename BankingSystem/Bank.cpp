#include "Bank.h"

Bank::Bank(int numCards)
{
    random_device rd;
    mt19937 gen(rd()); // Use a Mersenne Twister engine with a random seed

    for (int i = 0; i < numCards; i++)
    {

        // random pass generator
        //  Define the range for 8-digit numbers (10^7 to 10^8 - 1)
        uniform_int_distribution<int> distribution(10000000, 99999999);
        Card c = Card();

        cards[c.getId()] = c;
        passwords[c] = (distribution(gen));
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
