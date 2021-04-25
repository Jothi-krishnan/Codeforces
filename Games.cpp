#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][2];
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    int ptr =0;
    for(int m = 0; m<n;m++)
    {
        for(int l =0;l<n;l++)
        {
            if(a[l][1] == a[m][0])
            ptr++;
        }
    }
    cout<<ptr;
    return 0;
}