#include<bits/stdc++.h>
using namespace std;

void fib(int n,int a, int b){
    for (int i = 0; i<= n;i++){
        int next = a + b;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int a = 0, b= 1;
    cout << a <<" "<< b << " " ;

    fib(n,a,b);

    return 0 ;
}