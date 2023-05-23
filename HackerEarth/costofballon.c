#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t); //test case

    for(int i=0;i<t;i++){
        int G,P,n;
        scanf("%d%d%d",&G,&P,&n);  //Cost of Green and Purple ballons and no.of values
        int A[n][2]; // matrix for n Values
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                scanf("%d",&A[j][k]); // For inerting the values in matrix
            }
            
        }
        
        int a=0 ,b=0;    // count of balloon
        for(int j=0;j<n;j++){
            a = a + A[j][0]; //1st column
            b = b + A[j][1]; //2nd column
        }


        int s1, s2;
        s1 = G*a + P*b;  
        s2 = P*a + G*b;
        (s1<s2)&&printf("%d\n",s1)||printf("%d\n",s2);

        // if(case1<case2){
        //     printf("%d\n",case1);
        // }
        // else{
        //     printf("%d\n",case2);
        // }

    }

return 0;
}