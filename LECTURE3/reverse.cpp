#include<iostream>
using namespace std;
int main(){
     int ans=0,x,k,INT_MAX,INT_MIN;
        while(x!=0){
            int k=x%10;
            if((ans>INT_MAX/10)or(ans<INT_MIN/10)){
                return 0;
            }  
            ans= ans*10+k;
            x=x/10;
                  }
        return ans;
}
      