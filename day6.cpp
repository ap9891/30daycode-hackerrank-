#include<iostream>
using namespace std;
void even(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i%2==0)
        {
            cout<<str[i];
        }
        
    }
    
}
void odd(char *str)
{
      for (int i = 0; str[i] != '\0'; i++)
    {
        if (i%2!=0)
        {
            cout<<str[i];
        }
        
    }
    
}
int main()
{
    int t;
    cin>>t;
    char str[10001];

    while(t--)
    {    
    cin>>str;
    
    even(str);
    cout<<" ";
    odd(str);
    cout<<endl;
    }
}