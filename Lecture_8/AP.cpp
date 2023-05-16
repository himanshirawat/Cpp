#include<bits/stdc++.h>
using namespace std;

int ap(int a ,int n, int d){
    return  a * n + d;
}

int main(){
    int a, n, d;
    cin >> a >> n >> d;
    cout << "a = "<< a <<endl;
    cout << "n = " << n <<endl;
    cout <<  "d = " << d <<endl;;
    int answer = ap(a,n,d);
    cout << "Answer = " << answer << endl;
return 0;

}