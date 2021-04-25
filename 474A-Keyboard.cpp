#include<iostream>
using namespace std;
int search(string a, char c)
{
    for(int j =0;j<a.length();j++)
    {
        if(a[j]==c)
        return j;
    }
        
    return 0;    
}
int main()
{
    char c;
    cin>>c;
    int p;
    if(c =='R')
    p =1;
    else
    {
        p = -1;
    }
    string str ="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s;
    cin>>s;
    for(int i =0;i<s.length();i++)
    {
        cout<<str[(search(str,s[i]))-p];
    }
    return 0;
}