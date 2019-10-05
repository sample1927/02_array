#include <stdio.h>

int main(void) 
{
    char str[5];
    int a = 0, i = 0;
    
    while(a != 4){
        i = 0;
        while(i != 1){ 
    printf("数字を入力してください。\n");
    scanf("%s", str[a]);
            if(str[a] <= 100 && -100 <= str[a]){
                printf("対象外の数字です。\n");
                i = 1;
            }
        }
        
        if(str[a] < 0){
            str[a] -= str[a] * 2;
            
       a++;
    }
    for(a = 0; a <= 4; a++){
           printf("%s\n", str[a]);
    }
    
    return 0;
}
