#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
        int a,b;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>a>>b;
            arr[i]=(a-b);
        }
        if(arr[n-1]<0)
        {
            cout<<2<<" "<<abs(arr[n-1]);
        }
        else
        {
            cout<<1<<" "<<arr[n-1];
        }
    
    return 0;
}