#include <iostream>
using namespace std;

int main()
{
    int a[100];
    int n,i,sum=0;

    cout<<"Enter a number"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<i+1<<".Enter Element ";
        cin>>a[i];
        sum=sum+a[i];

    }

    cout<<sum<<endl;

    int avg=sum/n;
    cout<<avg;

}