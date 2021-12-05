#include <stdio.h>

typedef struct nation
{
    char name[20];
    char country[20];
    int population;
};

int main(void){
    struct nation nat1, nat2, nat3;

    printf("Input three cities:\n");
    printf("Name> ");
    scanf("%s", &nat1.name);
    printf("Country> ");
    scanf("%s", &nat1.country);
    printf("Population> ");
    scanf("%d", &nat1.population);

    printf("Input three cities:\n");
    printf("Name> ");
    scanf("%s", &nat2.name);
    printf("Country> ");
    scanf("%s", &nat2.country);
    printf("Population> ");
    scanf("%d", &nat2.population);

    printf("Input three cities:\n");
    printf("Name> ");
    scanf("%s", &nat3.name);
    printf("Country> ");
    scanf("%s", &nat3.country);
    printf("Population> ");
    scanf("%d", &nat3.population);

    printf("Printing the three cities:\n");
    printf("1. %s in %s with a population of %d people\n", nat1.name, nat1.country, nat1.population);
    printf("2. %s in %s with a population of %d people\n", nat2.name, nat2.country, nat2.population);
    printf("3. %s in %s with a population of %d people\n", nat3.name, nat3.country, nat3.population);

    return 0;
}