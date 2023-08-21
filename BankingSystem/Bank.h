#include <iostream>
#include <list>
#include <map>

using namespace std;

class Bank
{
private:
    map<int, Card> cards;
    map<Card, int> passwords;
    bool isOnline;

public:
    Bank(list<Card> &customers) {}
    bool isValidUser(int id, int pass) {}
};
