#include<iostream>
#include <cstdlib>  // for rand() and srand()
#include <ctime> 
using namespace std;

class Coin{
    private:
    string sideUp;
    public: 
    Coin();
    void toss();
    string getSideUp();
};