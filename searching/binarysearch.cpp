#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int l,int r,int x){
    if(r>=l){
        int mid = l +(r-l)/2;
        if (arr[mid] == x){
            return mid;
        }
        if (arr[mid] > x)
            return search(arr, l, mid - 1, x);

        return search(arr, mid + 1, r, x);
    }
    return -1;
}

int main(void){
    int arr[20],n,x;

    cout<<"enter the size of array : " ; cin >> n;
    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout<<"enter the value to search :  "; cin >> x;

    int result = search(arr,0,n-1,x);
    if (result == -1){
        cout << "Element is not present in array" <<endl; 
    }
    else 
    cout << "Element present at index "<< result << endl;

    return 0;
}