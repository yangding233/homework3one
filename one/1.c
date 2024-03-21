#include<stdio.h>
#include<stdlib.h>
int main(){
    int a = 0;
    int sum = 0;
    printf("please input an integer.\n");
    scanf("%d",&a);
    for (int i = 1; i < a; i++)
    {
        if (i%2 == 0){
            continue;
        }
        else{
            sum = sum + i;
        }

    }
    printf("The symmation of odd numbers less than %d is %d\n",a,sum);
    system("pause");
    return 0;
    }