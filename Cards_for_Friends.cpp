#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w, h, n;
        cin>>w>>h>>n;
        int p =0;
        while(w%2 == 0){
            w /= 2;
            p++;
        }
        while(h%2 == 0)
        {
            h /= 2;
            p++;
        }
        int num = pow(2, p);
        if(num<n)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}