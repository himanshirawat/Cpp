#include<bits/stdc++.h>
using namespace std;

int even(int n){
    if(n%2 == 0){
        return 0;  // false
    }
    return 1; // true
}

int main(){
    int n;
    cin >> n;
    if(even(n)){
        cout << "Odd Number"<<endl;
    }
    else {
        cout <<"Even Number" << endl;
    }
}