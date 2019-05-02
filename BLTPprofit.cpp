#include <iostream>
#include <math.h>
#include <iomanip>

int main(int argc, char* argv[])
{
    //copper = 0.00XX
    //silver = 0.XX00
    //gold = X.0000
    float sell, buy, fee0=.05 , fee1=.10, argr;
    bool boop= true;
    std::cout<<"Welcome to BLTP profit calculator.\nCopper = 0.00XX\nSilver=0.XX00\nGold=X.0000\n\n";
    while(boop)
    {
        std::cout<<"Sell at: ";
        std::cin>>sell;
        if(sell ==0)
            boop=false;
        else
        {
            std::cout<<"Buy at: ";
            std::cin>>buy;

            argr = floor((sell - (sell*fee0) - (sell*fee1)) * 10000.0) / 10000.0;
            argr -= buy;
            std::cout<<"Your profit is: "<< std::setprecision(2) << argr<<"\n"<<std::endl;
        }

    }

    return 0;
}
