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
        int d = (4*n)-2;
        d /= 2;
        int count =1;
        for(int i =1;i<d;i++)
            count *= i;
        cout<<count<<endl;    
    }
    return 0;
}