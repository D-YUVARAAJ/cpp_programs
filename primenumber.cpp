#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a;
    cout<<"enter the number to find prime or not ";
    cin>>a;

   for (int i=2;i<=sqrt(a);i++)
   {
    if(a<=1)
    {
        cout<<"not prime number";
    }

    else if (a%i==0)
    {
        cout<<"not a prime number ";

    }
    else
    {
        cout<<"prime number ";
    }


   


    return 0;
    }
}