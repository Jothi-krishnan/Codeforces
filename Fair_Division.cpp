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
        int sum = 0;
        int p =0;
        int q =0;
        for(int i = 0; i<n ; i++){
            cin>>a[i];
            sum += a[i];
            if(a[i] == 1)
            p++;
            else{
                q++;
            }
        }
        if(sum%2 == 1)
        {
            cout<<"NO"<<endl;
        }
        else{
            int w = q%2;
            if(w==0 && p%2 == 0)
            cout<<"YES"<<endl;
            else if(w == 0 && p%2 == 1)
            cout<<"NO"<<endl;
            else if(w == 1){
                int ln = p - 2*w;
                if(ln%2 == 0 && ln>=0)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}