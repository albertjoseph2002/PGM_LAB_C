#include<stdio.h>
#include<string.h>
struct oppo
{
    int roll;
    int mark;
};

struct oppo2
{
    char name[20];
    struct oppo obj;
};

int main()
{
    struct oppo2 robj;
    printf("size of the second structure is %ld",sizeof(robj));
    robj.obj.roll=1;
    robj.obj.mark=80;
    strcpy(robj.name,"alan");

    printf("\n\nroll no is %d",robj.obj.roll);
    printf("\nmark is %d",robj.obj.mark);
    printf("\nname is %s",robj.name);
}


