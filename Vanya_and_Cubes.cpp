#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ptr = 1;
    int ans = 0;
    int ctr = 2;
    while(n>0)
    {   if(n<ptr){
        break;
    }
        n -= ptr;
        ptr += ctr;
        ans += 1;
        ctr += 1;
    }

    cout<<ans;
    return 0;
}