#include<bits/stdc++.h>
using namespace std;
int main(){
    int a ,b;
    cin >> a >> b;
    int num;
    cout << "Enter a value between 1 to 5 = " ;
    cin >> num;
    switch (num)
    {
    case 1: cout << a + b <<endl;
        break;
    case 2: cout << a - b <<endl;
        break;
    case 3: cout << a * b <<endl;
        break;
    case 4: cout << a % b <<endl;
        break;
    case 5: cout << a / b <<endl;
        break;
    }
return 0;
}
