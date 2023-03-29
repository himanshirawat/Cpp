//29 March 2023
// Pattern 
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;  
    while (row <= n){

        int start = 1;
        int j = 1;
        while (j<=n-row+1){
            cout << start;
            start++;
            j++;
        }

        int star = row - 1;
        while(star){
            cout<<"*";
            star--;
        }

        int star2 = row -1;
        while(star2){
            cout<<"*";
            star2--;
        }

        int count = n-row+1;
        while (count){
            cout<<count;
            count--;
        }
        cout<<endl;
        row++;
        
    }
}