#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int const left ,int const mid, int const right){
    auto const one = mid -left+1;
    auto const two = right - mid;

    auto *leftarray = new int[one],
         *rightarray = new int[two];

    for(auto i=0;i<one;i++) 
        leftarray[i] = arr[left + i];
    for(auto j =0;j<two;j++)
        rightarray[j] = arr[mid +1+j];

    auto a = 0 , b = 0;
    int c = left ;

    while(a<one &&  b<two){
        if(leftarray[a]<= rightarray[b]){
            arr[c] = leftarray[a];
            a++;
        }
        else{
            arr[c]=rightarray[b];
            b++;
        }
        c++;
    }  

    while(a< one){
        arr[c] = leftarray[a];
        a++;
        c++;
    }

    while(b < two){
        arr[c] = rightarray[b];
        b++;
        c++;
    }
    delete[] leftarray;
    delete[] rightarray;
}
void mergeSort(int arr[],int const begin ,int const end){
    if (begin >= end)
    return ;

    auto mid = begin + (end - begin)/2;
    mergeSort(arr,begin,mid);
    mergeSort(arr,mid+1,end);
    merge(arr,begin,mid,end);
}

void printa(int A[],int n){
    for(auto i = 0 ;i<n ;i++)
    cout << A[i] << " ";
}

int main(){
    int arr[20],n,i;
    cout << "Enter the size of array : " ; cin >> n;
    cout << "Enter " << n << " numbers: " << endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    cout << "Given array is : \n";
    printa(arr,n);

    mergeSort(arr,0,n-1);

    cout << " \n Sorted array is :\n " ;
    printa(arr, n);
    cout<<endl;
    return 0;
}