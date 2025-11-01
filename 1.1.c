//202511716132
//2792131611qq.com
//MY-URL
#include <stdio.h>
int main() 
{
    int n,i,isPrime = 1;
    scanf("%d", &n);
    if(n<=1){
    isPrime = 0;
}else {
    for(i = 2;i < n; i++){
    if(n % i == 0){
    isPrime = 0 ;
    break;
    }
      }
         }
if (isPrime) {
    printf("密钥安全,密码设置成功\n");
}else{
    printf ("密钥不安全,请重新输入\n");
}
    return 0;
}
