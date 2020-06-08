#include<iostream>
#include<unordered_map>
#include<map>
#include<string.h>
using namespace std;
int main()
{
    unordered_map<string ,int > d;
    int n;
    cin>>n;
    string name;
    int phone;
    for (int i = 0; i < n; i++)
    {
        cin>>name>>phone;
        d.insert(make_pair(name,phone));
    }
     string enteredname;
    while( cin>>enteredname)
    {
       

     if (d.find(enteredname) != d.end()) {
        cout << enteredname << "=" << d.find(enteredname)->second << endl;
    } else {
        cout << "Not found" << endl;
    }
    }
    return 0;
}