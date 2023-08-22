#include "Card.h"

Card::Card()
{
    random_device rd;
    mt19937 gen(rd()); // Use a Mersenne Twister engine with a random seed

    // random id generator
    //  Define the range for 8-digit numbers (10^7 to 10^8 - 1)
    uniform_int_distribution<int> distribution(10000000, 99999999);
    id = distribution(gen);

    // random balance generator
    uniform_int_distribution<int> distribution(1, 99999);
    balance = distribution(gen);
}

int Card::getId()
{
    return this->id;
}

long Card::getBalance()
{
    return this->balance;
}

void Card::setBalance(long newBal)
{
    this->balance = newBal;
}
