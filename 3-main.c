//202511716132
//2792131611@qq.com
//MY_URL
#include <stdio.h>
int main() {
    int a, b;
    char op;
    scanf("%d %d %c", &a, &b, &op);
    switch (op) {
    case '+':
            printf("%d\n",a+b);
            break;
    case '-':
            printf("%d\n",a-b);
            break;
    case '*':
            printf("%d\n",a*b);
            break;
    case '/':
        if (b !=0){
            printf("%d\n",a/b);
            }else{
                printf("除数不能为0\n");
            }
            break;
        default:
            printf("无效的运算\n");
        }
    return 0;
}
