#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    printf("数字を入力してください。\n");
    scanf_s("%5s", str, 4);
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
