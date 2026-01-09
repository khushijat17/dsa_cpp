// Writefunctionthatacceptsacharacter(ch)asparameters&returnsthecharacterthatoccursafterchintheEnglishalphabet.Eg:input=‘c’,returnvalue=‘d’Note:forch=‘z’,return‘a’.
#include <iostream>
using namespace std;

char alp(char ch){
    if(ch=='z'){
        return 'a';
    }else{
        ch++;
        return ch;
    }
}
int main() {
 
  
   cout<<alp('b');
    return 0;
}
