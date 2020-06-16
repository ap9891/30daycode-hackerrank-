#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s("moc.liamg@");
    int lens = s.length();
    int i=0;
    int t;
    cin>>t;
    vector<string> v(t);
    string a,b;
    multimap<string,string> h;
    for(int i=0; i<t ;i++)
    {
        cin>>a>>b;
        h.insert(make_pair(a,b));
    }
    for(auto ele : h)
    {
        reverse(ele.second.begin(),ele.second.end());
        if((ele.second.compare(0,10,s,0,lens))==0)
        {
            cout<<ele.first<<endl;
        }
    }
    return 0;
}