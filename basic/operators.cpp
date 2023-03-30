#include<iostream>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b ;

    cout <<"a&b = " << (a&b) << endl;
    cout << "a|b = " << (a|b) << endl;
    cout << "~a = " << ~a << endl;
    cout << "a^b = " << (a^b) << endl;

    cout << "a++ = " << a++ << endl;
    cout << "++a = " << ++a << endl;
    cout << "a-- = " << a-- << endl;
    cout << "--a = " << --a << endl;

    cout << "Left shift a << 2 = "  << (a<<2)<< endl;
    cout << "Right shift b >> 1 = "  << (b >> 1)<< endl;

}