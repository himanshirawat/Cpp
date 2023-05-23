#include<iostream>
using namespace std;

int getmax(int arr[],int n){
    int max = INT16_MIN;
    for(int i =0 ; i<n ;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int getmin(int arr[],int n){
    int min = INT16_MAX;
    for(int i =0 ; i<n ;i++){
        if(arr[i] < min){
           min = arr[i];
        }
    }
    return min;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0;i<n ; i++){
        cin >> arr[i];
    }

    int max = getmax(arr,n);
    int min = getmin(arr,n);

    cout << "Max = " << max <<endl;
    cout << "Min = " << min <<endl;
}