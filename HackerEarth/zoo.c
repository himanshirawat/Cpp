#include <stdio.h>
#include <string.h>
int main(){  
char num[20];
int x=0,y=0,i;
scanf("%s",&num);
for (i = 0; num[i] != '\0'; i++)
{
    if (num[i]=='z') {
        x++;
    }
    if(num[i]=='o') {
        y++;
    } 
}
//best case
if(2*x==y){
    printf("Yes");
}
else
printf("no");

// OPtional
//(y==x*2)&&printf("yes")||printf("No");

return 0;

}
