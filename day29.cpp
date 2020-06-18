#include<iostream>
#include<climits>
using namespace std;
void counts(int n, int k)
{
    int count=0;
    int max = INT_MIN;
    for(int i=1; i<= n ;i ++)
    {
        for(int j=i+1; j <=n ;j++)
        {
            int z = i&j;
             if(z > max &&  z < k)
            { 
                max = z;
            }
        }
    }
    cout<<max;
}
int main()
{
    int n,k;
    int t;
    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    counts(n,k);
    cout<<endl;
    }
    return 0;
}