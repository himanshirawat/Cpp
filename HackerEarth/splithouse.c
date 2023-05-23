#include<stdio.h>

int main(){

    int n,i;
    scanf("%d",&n);

    char house[n];
    scanf("%s",&house);

    for(i=0;i<n;i++){
        if(house[i]=='H' && house[i+1]=='H'){
            printf("No\n");
            break;
        }

        if(house[i]=='.'){
            house[i]='B';
            
        }
    }

    if (i==n)
    {
        printf("Yes\n%s",house);
    }

return 0;
}