// 28 March 2023 
// print the pattern 
//   *
//   **
//   ***
//   ****

#include<iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i){
            cout<<"*";
            j += 1;
        }
        cout << "\n";
        i += 1;
    }
    
}