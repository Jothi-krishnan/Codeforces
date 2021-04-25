#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    string a;
    string b[5];
    cin>>a;
    for(int x=0; x<5; x++)
        cin>>b[x];
    string comp = "";
    comp += b[0][0];
    string comp2 = "";
    comp2 += b[0][1];
    for(int i =1; i<5; i++)
    {
            comp += b[i][0];
            comp2 += b[i][1];
    }
    int ptr = 0;
    for(int k = 0; k<5; k++)
    {
        if(comp[k] == a[0] || comp2[k] == a[1]){
            ptr = 1;
            break;
        }
    }

    if(ptr == 1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}