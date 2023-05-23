#include <stdio.h>

int main(){
    int stick[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int num; 
    scanf("%d", &num); 

    for (int i = 0; i < num; i++){
        char str[1000] = {'\0'}, ans[1000] = {'\0'};
        int j = 0, k = 0;
        long long total_stick = 0;
        scanf("%s", &str);

        while (str[j] != '\0')
        j++, total_stick += stick[str[j - 1] - '0'];

        if ((total_stick % 2) == 1)
        ans[k] = '7', k++, total_stick -= 3;

        while (total_stick > 0)
        ans[k] = '1', k++, total_stick -= 2;
        printf("%s\n", ans);
    }
return 0;
}