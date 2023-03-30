// 28 March 2023 
// Sum of number from 1-n
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<< "Enter the value " ; 
    cin >> n ;

    int i = 1, sum = 0;
    while(i<=n){
        sum = sum + i;
        i = i+1;
    }
    cout << sum << endl;

}