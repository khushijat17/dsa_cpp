// binary to decimal 
#include <iostream>
using namespace std;

void bintodec(int binnum) {
    int n= binnum;
    int dec=0;
    int pow =1;
    while(n>0){
        int ls=n%10;
        dec += pow*ls;
        pow=pow*2;
        n=n/10;
        
    }
    cout<<dec<<endl;
}    
    
 int main(){
    bintodec(100);
     return 0;
 }    
