// 28 March 2023
// Check weather the ch is uppercase lowercase or numeric
#include<iostream>
using namespace std;

int main(){
    char ch ;
    cout << "Enter the character " << endl;
    cin >> ch;

    if(ch>=97 && ch<=122){
        cout << "This is lowercase " << endl;
    }
    else if (ch>=65 && ch<=90){
        cout << "This is Uppercase" << endl;
    }
    else if(ch>= 48 && ch<=57) {
        cout << "This is numeric"<< endl;
    }

} 
