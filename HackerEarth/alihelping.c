#include<stdio.h>

int main(){

    char c[9];
    scanf("%s", c);

    int a=0 , b=0;
    if((c[0]+c[1])%2==0 && (c[3]+c[4])%2==0 && (c[4]+c[5])%2==0 && (c[7]+c[8])%2==0 ){
        a = 1;
    }

    if(c[2] =='A' || c[2] =='E' || c[2] =='I' || c[2] =='O' || c[2] =='U' || c[2] =='Y'){
        b = 1;
    } 

    (a==1 && b==0) && printf("valid\n") || printf("invalid\n");
    // if(a==1 && b==0)
    // printf("valid\n"); 
    // else
    //  printf("invalid\n");
    
return 0;

}

