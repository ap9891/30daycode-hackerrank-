#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    try{
    int strno;
    strno = stoi(str);
    cout<<strno<<endl;
    }
    catch(exception a)
    {
        cout<<"Bad String"<<endl;
    }
    return 0;
}