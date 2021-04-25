#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i = 0;i<n;i++)
        cin>>a[i];
        sort(a, a+n);
        int p = 1;
        for(int k = 1; k<n;k++)
        {
            if(a[k] != a[k-1])
                p++;
        }
        cout<<p<<endl;
    }
    return 0;
}