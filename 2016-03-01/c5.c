#include<stdio.h>
int main()
{
    char namae1[10],namae2[10];
    int tensu1,tensu2;
    
    printf("一人目の名前＝");
    scanf("%s", namae1);
    printf("一人目の点数＝");
    scanf("%d", &tensu1);
    
    printf("二人目の名前＝");
    scanf("%s", namae2);
    printf("二人目の点数＝");
    scanf("%d", &tensu2);
    
    if(tensu1>tensu2){
        printf("%sさんの方が大きい\n", namae1);
    }else{
        printf("%sさんの方が大きい\n", namae2);
    }
    return 0;
}