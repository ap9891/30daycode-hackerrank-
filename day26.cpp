#include<iostream>
using namespace std;
int main()
{
    int d1,m1,y1;
    int d2,m2,y2;
    int fine=0;
    cin>>d1>>m1>>y1;
    cin>>d2>>m2>>y2;
    if(d1<=d2 || m1<=m2 && y1<=y2)
    {
        fine=0;
    }
     if(y1 == y2 && m1==m2)
    {
        fine=15*abs(d1-d2);
    }
    if(m1 > m2 && y1==y2)
    {
        fine=500*abs(m1-m2);
    }
    if(y1 > y2 )
    {
        fine=10000;
    }
    cout<<fine;
    return 0;
}