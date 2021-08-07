#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,number,rev=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>number;
    }
    while(number>0)
    {
        int r=number%10;
        number=number/10;
        rev=rev*10+r;
        
    } 
    
    cout<<rev;
    return 0;
}