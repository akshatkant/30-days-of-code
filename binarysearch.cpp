#include <iostream>
using namespace std;

int main()
{
    int key;
    int A[]={1,4,3,5,6,9,8,7};
    int l=0;
    int h=6;
    cout<<"Enter a Key"<<endl;
    cin>>key;
    int mid=l+h/2;
    while(l<=h)
    {

        if(key==A[mid])
        {
            cout<<"The key is at element "<<mid;
            return 0;
        }
        else if(key<A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;

        }
    }
}