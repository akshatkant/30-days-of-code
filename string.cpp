#include <bits/stdc++.h>
#include <iostream>
#include <string.h>
using namespace std;

//int main()
//{
   /* cout<<"Enter your name"<<endl;
    char s[50];
    cin.getline(s,50);
    cout<<s<<endl;*/
   /* char s[50],c[50],p[50];


    cout<<"Enter a string"<<endl;
    cin.get(s,50); //c.getlin(s,50) can also be used
    cout<<strlen(s)<<endl;
    cin.ignore();

    cout<<"enter string to concatenate"<<endl;
    cin.get(c,50);
    cout<<strcat(s,c)<<endl;
    strcpy(p,s);
    cout<<p<<endl;*/

    /*string str;
    getline(cin,str);
    cout<<str.length()<<endl; //length and size are the same things
    cout<<str.size()<<endl;
    cout<<str.capacity()<<endl;
    str.clear();
    cout<<str.empty()<<endl;
   } */

/*int factorial(int n)
	{
	    
	    if(n>1)
        {
            return n*factorial(n-1);
        }
        else
        {
            return 1;
        }
	}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
       cout<< factorial(n);
    }
	return 0;*/

    int main()
    {
        int a,b,c,mini;
        cin>>a>>b>>c;
        mini=min(a,min(b,c));
        cout<<mini;

    }
   



    



