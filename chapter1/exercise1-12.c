#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
    int c;
    int state = OUT;
    
    while ((c = getchar()) != EOF){
        if (c == ' ' || c == '\t' || c =='\n'){
            putchar('\n');
            state = OUT;
        }
        else{
            state = IN;
            putchar(c);
        }

    }
    return 0;
}
