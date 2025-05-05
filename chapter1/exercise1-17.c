#include <stdio.h>
#define MAXLEN 1000

int read_line(char l[]);

int main()
{
    int c;
    char line[MAXLEN];
    int len;

    while((len = read_line(line)) > 0){
        if(len > 80){
            printf("line is longer than 80 chars: %s\n",line);
        }
    }

    return 0;
}

int read_line(char l[])
{
    int len = 0 , c ,i;

    for(i = 0; i < MAXLEN - 2 && (c = getchar()) != EOF && c != '\n'; ++i){
        l[i] = c;
        ++len;
    }
    if (c == '\n'){
        l[i] = '\n';
        ++i;
        ++len;
    }

    l[i] = '\0';

    return len;
}
