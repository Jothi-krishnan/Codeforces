#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int k = s.length();
        for(int i =0; i<s.length();i++)
        {
            if(s[i] == '0')
            k--;
        }
        int b[k];
        int ptr =0;
        int z =0;
        for(int j = (s.length()-1); j>=0; j--)
        {
            if(s[j] != '0'){
                int temp = s[j] - '0';
                b[ptr] = temp*pow(10, z);
                ptr++;
            }
            z++;
        }
       cout<<k<<endl;
       for(int l =0; l<k; l++)
       cout<< b[l]<<" ";
       
       cout<<endl;
    }
    return 0;
}