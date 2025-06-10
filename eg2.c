#include<stdio.h>
#include<string.h>
struct brand
{
    char name[20];
    int cc;
    char turbo[10];
};

struct suzukhi
{
    int milage;
    struct brand car;
};

void  main()
{
    struct suzukhi brezza;
    brezza.milage=10;
    strcpy(brezza.car.name,"brezza");
   
    strcpy(brezza.car.turbo,"naturally aspirated");
    printf("details of car as follows\n");
    printf("\ncarname '%s'",brezza.car.name);
    printf("\nengine size is %d",brezza.car.cc);
    printf("\nmilage of the car is %d",brezza.milage);

    printf("\n\n size of the 2nd structure is %ld",sizeof(brezza));


}

