#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    int a[12];
    cin>>k;
    for(int i =0;i<12;i++)
        cin>>a[i];
    sort(a,a+12);
    int sum =0;;
    int count =0;
    int j =11;
    while(sum<k && j>=0)
    {
        sum += a[j];
        count++;
        j--;
    }
    if(sum<k)
    cout<<-1;
    else
    {
        cout<<count; 
    }   
    return 0;
}