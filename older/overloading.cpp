#include<bits/stdc++.h>
using namespace std;
void add(){
    int a = 12, b=34,c;
    c = a+b;
    cout<<"Sum of 1st add() : "<<c<<endl;
}

void add(int a, int b){
    int c = a+b;
    cout<<"Sum of 2nd add(a,b) : "<<c<<endl;
}

int main(){
    int a = 20 , b= 30;
    add();
    add(a,b);
    return 0;

}