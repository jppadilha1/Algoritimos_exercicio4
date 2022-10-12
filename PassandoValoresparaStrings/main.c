#include <stdio.h>

int main() {
    char stringA[80];
    char stringB[80];
    int i;

    printf("Digite alguma coisa: ");
    scanf("%s", &stringA);

    printf("Essa e a primeira string: %s\n",stringA);
    for(i = 0;stringA[i] != '\0';i++){
        stringB[i] = stringA[i];
    }
    printf("Essa e a segunda string: %s",stringB);
    return 0;
}
