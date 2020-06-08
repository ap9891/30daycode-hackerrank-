#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
void patternhour(int arr[][10])
{
    int sum=0;
    int ans = INT_MIN;
  for (int i = 1; i < 5; i++)
  {
      for (int j = 1; j < 5; j++)
      {
        //   sum = arr[i+1][j+1];
        //   for (int p = 0; p < 3; p++)
        //   {
        //       sum += arr[i][j+p] + arr[i+2][j+p];
        sum = arr[i][j] + arr[i-1][j+1]+arr[i-1][j]+arr[i-1][j-1]+arr[i+1][j]+arr[i+1][j-1]+arr[i+1][j+1];
            if(sum>ans)
            {
                ans=sum;
            }
          }
      
  }
    cout<<ans;
}
int main()
{
    int arr[10][10];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>arr[i][j];
        }
    }
    patternhour(arr);
    return 0;
}