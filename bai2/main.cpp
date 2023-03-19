#ifndef bai2_Coin_h
#include "Coin.h"

int main(){
    int heads_count = 0, tails_count = 0;
    for(int i=0;i<20;i++){
        Coin coin1;
        string side = coin1.getSideUp();
        if(side == "heads"){
            heads_count ++;
        }else {
            tails_count ++;
        }
        cout << coin1.getSideUp() << endl;
    }

    cout << "So lan mo : " << heads_count << ", So lan up : " << tails_count;
    
    return 0;
}

#endif