#include<iostream>
using namespace std;

int isIt(int a[], int num, int n)
{
    for(int i = 0; i< n; i++)
    {
        if(a[i] == num){
            return 0;
        }
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[2*n];
        for(int i =0; i<2*n;i++)
            cin>>a[i];
        
        int b[n];
       
        for(int j =0; j< n; j++)
         {
             b[j] = 0;
         }
        
        int temp = 0;
        for(int i =0; i<2*n;i++)
        {
            if(i == 0){
                b[temp] = a[i];
                temp++;
            }
            else{
               int w = isIt(b, a[i], n);  
              if(w == 1){
                  b[temp] = a[i];
                  temp++;
                }
            }
        }
        for(int j =0; j< n; j++)
         {
              cout<<b[j]<<" ";
          }
         cout<<endl;
    }
    return 0;
}
