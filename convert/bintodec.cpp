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
void dectobin(int decnum){
    int n=decnum;
    int binnum=0;
    int pow =1;
    while(n>0){
        int rem =n%2;
        binnum += rem*pow;
         n=n/2;
        pow = pow*10;
        
        
    }
    cout<<binnum<<endl;
}
    
 int main(){
    bintodec(100);
    dectobin(4);
     return 0;
 }    
