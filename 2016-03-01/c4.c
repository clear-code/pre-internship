#include<stdio.h>
int main()
{
    int tensu;
    
    printf("点数＝");
    scanf("%d", &tensu);
    
    if(tensu>=80){
        printf("評価＝A\n");
    }else if(tensu>=60){
        printf("評価＝B\n");
    }else{
        printf("評価＝C\n");
    }
    return 0;
}
