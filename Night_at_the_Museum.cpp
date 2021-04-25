#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int ptr = 'a' - 96;
    int count = 0;
    for(int i = 0; i<s.length();i++)
    {
        int tg = s[i] - 96;
        int n = abs(tg - ptr);
        int m = 26 + ptr - tg;
        int l = 26 + tg - ptr;
        count += min(m, min(n, l));
        ptr = tg;
    }
    cout<<count;
    return 0;
}