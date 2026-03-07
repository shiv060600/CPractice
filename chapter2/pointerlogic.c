
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void check_leap(int* year){
    if((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0)) {
        printf("%i is leap year",*year);
    } else {
        printf("%i is not a leap year", *year);
    }
}


int main(){
    char *line = malloc(10);
    printf("enter a year\n");
    int c;
    int i = 0;

    while ((c = getchar()) != EOF &&  c != '\n'){
        if (i >= 9){
            printf("memory allocation reached");
            break;
        }
        if (isdigit(c)){
            line[i] = c;
            i++;
        }
        else {
            printf("you entered a non digit");
        }
        
    }

    line[i] = '\0';

    int year = atof(line);

    check_leap(&year);
    free(line);
    return 0;
}