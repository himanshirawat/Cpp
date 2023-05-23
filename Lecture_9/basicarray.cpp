#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i =0 ; i<n; i++){
        cin >> arr[i];
    }
    
    int size = sizeof(arr) / sizeof(int) ;
    cout<< size <<endl;

    return 0;
}