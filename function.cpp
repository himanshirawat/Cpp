#include<bits/stdc++.h>
using namespace std;
void swap(int,int);
int main(){
    int a ,b;
    cout<<"Enter 1st no. : " ; cin>>a;
    cout<<"Enter 2nd no. : " ; cin>>b;

    cout <<"Before swapping values are : "<<a <<" "<<b<<endl;
    swap(a,b);
}

void swap(int a, int b){
    int c;
    c = a;
    a = b;
    b = c;
    cout <<"After swapping values are : "<<a <<" "<<b<<endl;

}