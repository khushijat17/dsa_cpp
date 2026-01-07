#include <iostream>
using namespace std;
void fun(int n){
    if(n%2==0){
        cout<<"even";
      }  else{
        cout<<"odd";
    }
}    
    
int fac(int n) {
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
  
    return fact;
    
}  
void val(int n,int r){
   int  val1=fac(n);
  int val2 = fac(r);
  int val3=  fac(n-r);
  cout<<val1/(val2*val3);
    
}
 bool isprime(int n)
 { 
     if(n<=1)
     return false;
     for (int i=2;i*i<=n;i++)
    {
         if(n%i==0)
     {
        return false;
     }
        
   } 
    return true;
     
 }
 int prime(int n){
     int i;
     for(int i=2;i<=n;i++){
         bool isprime=true;
         for(int j=2;j*j<=i;j++){
             if(i%j==0){
                 isprime= false;
             }
             cout<<i;
         }
     }
     return true;
     cout<<i;
 }
 int reverse(int n){
     int res=0;
     while(n>0){
         int lastd = n%10;
         res =res*10+lastd;
         n=n/10;
     }
     return res;
 }
 bool ispalindrome(int num){
     int revnum=reverse(num);
     return num==revnum;
 }
 
 

int main(){

   cout<<isprime(8)<<endl;
  val(3,2);
  cout<<endl;
   
  if(ispalindrome(101)){
      cout<<"palindorme";
  }else{
      cout<<"not palindrome";
  }
    return 0;
}
 

