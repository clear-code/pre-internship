#include<stdio.h>
int main()
{
    int kubun,ninzu,goukei;
    
    printf("区分＝");
    scanf("%d", &kubun);
    printf("人数＝");
    scanf("%d", &ninzu);
    
    if(kubun==1){
        goukei =ninzu*800;
    }else{
        goukei= ninzu*1500;
    }
    
    printf("料金合計＝%d\n", goukei);
    return 0;
}