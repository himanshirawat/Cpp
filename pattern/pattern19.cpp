//29 March 2023
// Pattern 
// A
// BC
// CDE
// DEFG

#include<iostream>
using  namespace std;
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    int row = 1;
    while(row<=n){
        int col = 1;
        while (col<= row)
        {
            char ans = 'A'+ row + col - 2;
            cout << ans;
            col++;
        }
        cout<<endl;
        row++;
    }
}