#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int c0 =0;
    int c1 =0;
    for(int i =0;i<n;i++)
    {
        if(s[i]=='0')
        c0 += 1;
        else
        {
            c1 += 1;
        }
        
    }
    cout<<abs(c1 - c0);
    return 0;
}