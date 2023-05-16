#include<bits/stdc++.h>
using namespace std;

int value(int n){
    n++;
    cout<< "Value of n in value() = " << n <<endl;
    return n;
}

int main(){
    int n;
    cin >> n;
    value(n);
    cout << "Value of n in main() = " << n << endl;

    return 0;
}