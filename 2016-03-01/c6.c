#include<stdio.h>
int main()
{
    int kubun,ninzu,ryokin,kingaku;
    
    printf("区分＝");
    scanf("%d", &kubun);
    printf("人数＝");
    scanf("%d", &ninzu);
    
    switch(kubun){
        case 1:
            ryokin=800;
            break;
        case 2:
            ryokin=1000;
            break;
        case 3:
            ryokin=1500;
            break;
    }
    
    kingaku =ryokin*ninzu;
    printf("料金＝%d 金額=%d\n", ryokin,kingaku);
    return 0;
}