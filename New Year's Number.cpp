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
        if(n<2020)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            int d = n/2020;
            if(n-d*2020 >=0 && n-d*2020 <=d)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
    return 0;
}