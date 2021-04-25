#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int sum =0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int count =0;
    for(int k =0;k<m;k++)
    {
        if(a[count]<0)
        {
            sum += a[count];
            count++;
        }
        else
        break;
    }
    cout<<sum*-1;
    return 0;
}