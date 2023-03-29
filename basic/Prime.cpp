// 28 March 2023 
// Check Weather the number is Prime or Not
#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin >> n ;
    int i = 2;
    while (i<n){
        if(n%i==0){
            cout << "Not Prime Number "<< i <<endl;
        }
        else {
            cout << "Prime Number " << i <<endl;
        }
        i += 1;
    }
}