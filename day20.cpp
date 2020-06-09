#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    int no_of_swaps=0;
    for(int i=0; i<= n-2 ; i++)
    {
        for(int j=0 ; j<= n-2-i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j],a[j+1]);
                no_of_swaps++;
            }
        }
    }
    cout<<"Array is sorted in "<<no_of_swaps<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1];
    return 0;
}