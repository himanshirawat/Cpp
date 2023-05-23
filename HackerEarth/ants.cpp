#include<bits/stdc++.h>
using namespace std;
int main(){ 
    long long int N,x;
    int M,T,i,y;
    cin >> N >> M >> T;
    int A[M];
    int t = M;
    while(t--){
        cin >> x >> y;
        if (y<0){
            x = (N-(T%N)+x)%N;
            if(x==0)
                x=N;
            else 
                x=x;
        }
        else if(y>0){
            x = (T%N+x)%N;
            if(x==0){
                x=N;
            }
            else 
            x=x;
        }
        A[i]=x;
        i++;
    }

    sort(A,A+M);
    for(i=0;i<M;i++){
        cout<<A[i]<<" " ;
    }
   
    return 0;
}