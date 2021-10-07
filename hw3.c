#include <stdio.h>

int main(){
    int num, cnt = 0;
    
    printf("Please enter a number : ");
    scanf("%d", &num);
    for(int i = 2; i < num+1; i++){
        if (num % i == 0){
            cnt += 1;
            if (cnt > 1){
                printf("It is not a prime number\n");
                break;
            }
        }
    }
    if (cnt == 1){
        printf("It is a prime number\n");
    } 
    return 0;
}