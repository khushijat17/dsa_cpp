#include <iostream>
using namespace std;
int sumofdigits(int n){
    int res=0;
    while(n>0){
        int ls = n%10;
        res=res+ls;
        n=n/10;
    }
    return res;
}
int main() {
    cout<<sumofdigits(1234);

    return 0;
}
