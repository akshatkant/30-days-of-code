#include <iostream>
using namespace std;
int main()
{
    float amount;
    float discounted;
    float discount;
    cout<<"Enter amount"<<endl;
    cin>>amount;
    if(amount>=500)
    {
        
        discount=amount*20/100;
        discounted=amount-discount;
    }
    else if (100<=amount<=500)
    {
        
        discount=amount*10/100;
        discounted=amount-discount;
    }
    else
    {
        discount=0;

    }

    /*cout<<"amount price "<<amount<<endl;
    cout<<"discount "<<discount<<endl;
    cout<<"Discount "<<discounted<<endl;*/

    cout<<"You get "<<discount<<" rupees discount on amount of "<<amount<<" rupees. so the discounted price is "<<discounted<<endl;


}