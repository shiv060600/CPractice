#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define PI 3.14159

float circle_area(float radius);
float circle_diameter(float radius);
char* readline();

char* readline() {
    int c;
    char *line = malloc(1000);
    int i = 0;
    while ((c = getchar()) != '\n' && c != EOF){
        
        if (isdigit(c) || c == '.'){
            line[i] = c;
        } else {
            printf("You entered and invalid character\n");
        }
        if (i >= 999){
            break;
        }
        i++;
    }
    line[i] = '\0';

    return line;
}

float circle_area(float radius){
    float area = PI * radius * radius;

    return area;
}

float circle_diameter(float radius){

    float diameter = 2 * PI * radius;

    return diameter;
}

int main(){
    printf("enter a radius\n");
    char *line_read = readline();
    float radius = atof(line_read);

    float area = circle_area(radius);
    float diameter = circle_diameter(radius);

    printf("area is %f\n",area);
    printf("diameter is %f\n",diameter);


    free(line_read);

    return 0;
}





