// 30 March 2023
// Count the 1bit in 32bits input

#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter a 32 bit binary string = " <<" " ;
    cin >> n;
    int count = 0;
    while(n!=0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    cout << count <<endl;
}