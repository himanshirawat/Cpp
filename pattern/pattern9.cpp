// 28 March 2023 
// print the pattern 
// 123
// 456
// 789

#include<iostream>
using namespace std;
int main(){
    int n ;
    cin>>n;
    int count = 1;
    int row = 1;
    while(row <= n){
        int col = 1;
        while(col <= n){
            cout<<count << " " ;
            count = count + 1;
            col++;
        }
        cout<<endl;
        row++;
    }
}