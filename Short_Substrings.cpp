#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string a;
        for(int i=0;i<s.length()-1;i++)
        {
            if(i==0)
            {
                a = s[i];
            }
            else{
                a += s[i];
                i++;
            }
        }
        a += s[s.length()-1];
        cout<<a<<endl;
    }
    return 0;
}