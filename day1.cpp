#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    
    int n;
    cin>>n;
    double y;
    cin>>y;
    string str;
    cin.get();
    getline(cin,str);
    string str3;
    str3 = s + str;
    cout<<n+sizeof(i)<<endl;
    printf("%0.1f \n",y+sizeof(float));
    cout<<str3;
    
    return 0;
}