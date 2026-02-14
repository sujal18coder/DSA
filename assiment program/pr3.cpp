#include<iostream>
using namespace std;
 int main(){
    int n,m;
    cin>>n>>m;
    
    int count=0;
    // cin>>m;
    while ( n>0){
        int digit= n%10;
        if(digit==m){
            count++;
        } 
        n/=10;
    }
 cout<<count<<endl;
 return 0;
 }