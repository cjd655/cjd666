//202511716132
//2792131611@qq.com
//MY-URL
#include <stdio.h>
int main() {
    int arr[5],sum = 0,i;
    for (i = 0;i < 4;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    arr[4] = sum;
    for (i = 0;i < 5;i++) {
        printf("%d", arr[i]);
        if(i<4)printf(" ");
    }
    printf("\n");
    return 0;
     }
