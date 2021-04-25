#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    int b[n];
    int ptr =1;
    for (int j =0; j<n;j++)
    {
        for(int k=0;k<n;k++)
        {
            if(a[k] == ptr)
            {
                b[j] = k+1;
                ptr++;
                break;
            }
        }
    }
    for(int z =0; z<n;z++)
        cout<<b[z]<<" ";
    return 0;
}