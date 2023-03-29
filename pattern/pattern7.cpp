// 28 March 2023 
// print the pattern 
// 12345
// 12345
// 12345
// 12345
// 12345

#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int row = 1;
    while (row <= n){
        int col = 1;
        while(col <= n){
            cout<< col;
            col++;
        } 
        cout<<endl;
        row++;
    }
}