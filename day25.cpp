#include<iostream>
#include<cmath>
using namespace std;
bool prime_or_not(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(prime_or_not(n))
        {
            cout<<"Prime"<<endl;
        }
        else
        {
            cout<<"Not prime"<<endl;
        }
    }
    return 0;
}