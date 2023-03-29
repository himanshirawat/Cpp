// 28 March 2023 
// print the pattern 
// 321
// 321
// 321

#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            cout<<(n-col+1);
            col++;
        }
        cout<<endl;
        row++;
    }
}
