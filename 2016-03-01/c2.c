#include<stdio.h>
int main()
{
    int tanka,suryo,kingaku,zeikomi;
    
    printf("単価");
    scanf("%d", &tanka);
    printf("数量");
    scanf("%d", &suryo);
    
    kingaku =tanka*suryo;
    zeikomi =kingaku*105/100;
    
    printf("金額=%d　税込=%d\n", kingaku,zeikomi);
    return 0;
}
