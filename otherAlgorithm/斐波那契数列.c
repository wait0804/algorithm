#include<stdio.h>
 
int fibonacci(int n);
 
int fibonacci(int n){
    if(n <= 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
 
    return fibonacci(n-1)+fibonacci(n-2);
}
 
void main(void){
    int number;
    int value;
 
    printf("ÇëÊäÈëì³²¨ÄÇÆõÊý£º");
    scanf("%d", &number);
 
    value = fibonacci(number);
    printf("%d\n", value);
}