#include <iostream>
using namespace std;

int main()
{
    int key;
    int A[]={1,4,3,5,6,9,8,7};
    cout<<"Enter a Key"<<endl;
    cin>>key;
    for(int i=0;i<9;i++)
    {
        if(key==A[i])
        {
            cout<<"The key is at element "<<i;
            return 0;
        }
    }
}