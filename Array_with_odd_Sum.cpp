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
        int p =0;
        int q = 0;
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2 == 0)
            p++;
            else
            q++;
        }
        if(q == 0)
        {
            cout<<"NO"<<endl;
        }
        else{
            if(p == 0)
            {
                if(n%2 == 0)
                cout<<"NO"<<endl;
                else
                cout<<"YES"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        
    }
    return 0;
}