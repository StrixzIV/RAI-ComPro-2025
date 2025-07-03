#include <stdio.h>
#include <stdlib.h>

int main() {

    int number;
    char *buffer = malloc(1000);

    printf("Type something: ");
    scanf("%s", buffer);
    
    printf("Number: ");
    scanf("%d", &number);

    printf("String: \"%s\", Number = %d\n", buffer, number);
    
    free(buffer);

}