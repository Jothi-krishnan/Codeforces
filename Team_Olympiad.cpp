#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int z =0; z<n;z++)
    {
        cin>>a[z];
    }
    int x[n];
    int y[n];
    int z[n];
    int b1 = 0;
    int b2 = 0;
    int b3 = 0;
    for(int i =0;i<n;i++)
    {
        if(a[i]==1){
            x[b1] = i;
            b1++;
        }
        else if(a[i]==2){
            y[b2] = i; 
            b2++;
        } 
        else if(a[i]==3){
            z[b3] = i;    
            b3++;
        }
    }
    int w = min(b1, min(b2,b3));
    if(w == 0){
        cout<<0;
    }
    else
    {
        cout<<w<<endl;
        for(int i =0; i< w; i++)
        {
            cout<<x[i]+1<<" "<<y[i]+1<<" "<<z[i]+1<<endl;
        }
    }
    return 0;
}