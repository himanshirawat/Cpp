// HackerEarth Divisibility Solution 

#include <stdio.h>

int main(){
int n,num;
//printf("Enter the value of n : ",n);
scanf("%d",&n);
//printf("Enter the values : ",num);
for(int i=0;i<n;i++)
scanf("%d",&num);
if(num%10){
	printf("No");
}
else{
	printf("yes");
}

//num%10&&printf("No")||printf("Yes");
return 0;
}