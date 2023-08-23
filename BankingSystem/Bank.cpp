#include "Bank.h"

Bank::Bank(int numCards)
{
    random_device rd;
    mt19937 gen(rd()); // Use a Mersenne Twister engine with a random seed

    for (int i = 0; i < numCards; i++)
    {

        // random pass generator
        //  Define the range for 4-digit numbers
        uniform_int_distribution<int> distribution(1000, 9999);
        Card *c = new Card();

        cards[c->getId()] = c;
        passwords[c] = distribution(gen);

        cout <<  "Card " << i+1 << ", ID : " << c->getId() << " , password : " << passwords[c] << endl;
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
