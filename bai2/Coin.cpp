#include "Coin.h"

Coin::Coin(){
    toss();
}

void Coin::toss(){
 int randomNum = rand() % 2;
     if(randomNum == 0){
        this->sideUp = "heads";
     }else {
        this->sideUp = "tails";
     }
     
}

string Coin::getSideUp(){
    return this->sideUp;
}


