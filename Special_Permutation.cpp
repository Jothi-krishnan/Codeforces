#include<iostream>
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
        for(int i = 0; i<n;i++)
            a[i] = i+1;
        for(int j = 1; j<n; j+=2)    
        {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
        }
        if(n%2 ==1){
            int ext = a[n-1];
            a[n-1]= a[0];
            a[0] = ext;
        }
        for(int z =0; z<n;z++)
            cout<<a[z]<<" ";
        
        cout<<endl;
    }
    return 0;
}