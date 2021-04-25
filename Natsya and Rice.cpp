#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,n;
        cin>>n>>a>>b>>c>>d;
        int ans1 = n*(a-b);
        int ans2 = n*(a+b);
        int p = (c-d);
        int q = c+d;
        if(ans2 < p || ans1 > q)
            cout<<"No";
        else
        {
            cout<<"Yes";
        }
        
        cout<<"\n";    
    }
    return 0;
}