#include<bits/stdc++.h>
using namespace std;

int setbit(int a ,int b){
    int count = 0;
    while (a) {
        count += a & 1;
        a >>= 1;
    }

    int sec = 0;
    while (b) {
        sec += b & 1;
        b >>= 1;
    }

    int ans  = count + sec;

return ans;
}

int main(){
    int a ,b ;
    cin >> a >>b;

    int answer = setbit(a,b);
    cout << "Answer = " << answer << endl;

    return 0;
}