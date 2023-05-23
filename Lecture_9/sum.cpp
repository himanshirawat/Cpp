#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int sum(int arr[], int n){
    int add = 0;
    for(int i =0 ;i<n;i++){
        add = add + arr[i];
    }
    return add;
}

int main(){
    int n , arr[n];
    cin >> n;

    for(int i = 0;i<n;i++){
        cin >> arr[i];
    }
    
    printArray(arr,n);
    int ans = sum(arr,n);

    cout << "Sum of array = "<< ans << endl;

return 0;
}