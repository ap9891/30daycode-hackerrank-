#include<iostream>
using namespace std;
int main()
{
    int count=0;
    int n;
    cin>>n;
    int max=INT_MIN;
    for (int i = n; i != 0; i=i>>1)
    {
        if (i&1==1)
        {
            count++;
        }
        else
        {
            count=0;
        }
        if(max <  count)
        {
            max=count;
        }
    }
    cout<<max;
    return 0;
}