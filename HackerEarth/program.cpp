#include<iostream>
using namespace std;
int main(){
    int a = 5 , b= 10, *p1,*p2;
    char c = 'z' , *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;

    *p1 = 10;
    *p2 = *p1;
    p1 = p2;
    *p1 = 20;
    *p3 = 'y';

    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;


}