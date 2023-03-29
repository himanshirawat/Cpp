//29 March 2023
// Pattern 
// D
// C D
// B C D
// A B C D

#include<iostream>
using  namespace std;
int main(){
    int n;
    cin >> n;
    char ch = 'A';
    int row = 1;
    while(row<=n){
        int col = 1;
        char start = 'A'+ n - row;
        while (col<= row)
        {
            cout << start;
            start++;
            col++;
        }
        cout<<endl;
        row++;
    }
}