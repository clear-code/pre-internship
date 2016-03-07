#include<stdio.h>
int main()
{
    int kubun,tanka,suryo,kingaku,ritu;
    
    printf("区分＝");
    scanf("%d", &kubun);
    printf("単価＝");
    scanf("%d", &tanka);
    printf("数量＝");
    scanf("%d", &suryo);
    
    switch(kubun){
        case 1:
            ritu=5;
            break;
        case 2:
            ritu=10;
            break;
        case 3:
            ritu=15;
            break;
        default:
            ritu=0;
    }
    
    kingaku =tanka*suryo*(100-ritu)/100;
    printf("値引率(%%)＝%d 金額＝%d\n", ritu,kingaku);
    return 0;
}