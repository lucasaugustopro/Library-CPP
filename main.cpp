#include "reverseString.h"
#include<iostream>
using namespace std;
int main(){
    string str = "Lucas Augusto";
    string reversed = reverseString(str);
    cout << "String Original: " << str << endl;
    cout << "String Revertida: " << reversed << endl;



    return 0;
}