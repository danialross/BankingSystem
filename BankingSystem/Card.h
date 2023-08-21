#include <iostream>
#include <random>

using namespace std;

class Card
{
private:
    int id;
    long balance;

public:
    Card();
    int getId();
    long getBalance();
    void setBalance(long newBal);
};