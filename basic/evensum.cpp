// 28 March 2023 
// Sum of even numbers from 1-n

#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter the value ";
    cin >> n ;
    int i = 2 , sum = 0;

    while (i<=n)
    {
       sum = sum + i;
       i = i + 2 ;
    }
    cout << " Sum = " << sum << endl;
    
}