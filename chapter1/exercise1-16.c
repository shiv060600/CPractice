#include <stdio.h>

#define MAXLINE 1000
int get_line(char line[], int maxline);
void copy(char to[],char from[]);

int main()
{
    int len;
    int c;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];
    int total_len;
    max = 0;
    while((len = get_line(line,MAXLINE))> 0){
        total_len = len;
        if(len == MAXLINE - 1 && line[MAXLINE - 2] != '\n'){
            while((c = getchar()) != EOF){
                ++total_len;
            }
            if(c == '\n'){
                ++total_len;
            }
        }
        if (total_len > max){
            max = total_len;
            copy(longest,line);
        }
    }
    if(max > 0){
        printf("longest line: %s \n",longest);
    }
    return 0;
}

int get_line(char s[],int lim){
    int c,i;

    for(i = 0 ; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i){
        s[i] = c;
    }
    if(c == '\n'){
        s[i] = '\n';
        ++i;
    }
    s[i] = '\0';
    return i;
}
void copy(char t[],char f[]){
    int i = 0;

    while((t[i] = f[i]) != '\0'){
        ++i;
    }
}

