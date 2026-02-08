#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
     for( int row=0;row<n;row++){
        
     int val=1;
        for(int col=0;col<=row;col++){
        cout<<val<<" ";
        val =val*(row-col)/(col+1);
        }
        cout<<endl;
    }
    return 0;
}
