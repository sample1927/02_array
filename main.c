#include <stdio.h>

int main(int argc, char *argv[]) 
{
    char str[5];
    
    str[0] = 5;
    str[1] = -2;
    str[2] = 4;
    str[3] = -5;
    str[4] = 7;
    str[5] = -4
    
    while(fgets(str, sizeof(str), stdin)){
        printf("%s", str);
    }

    return 0;
}
