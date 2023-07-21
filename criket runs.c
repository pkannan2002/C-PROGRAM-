#include<stdio.h>
struct runs{
    int jadegja;
    int dhoni;
    int malinga;
    int shachin;
    int sachin;
    int savack;
};

int main()
{
    struct runs s;
    printf("enter runs of the players \n" );
    scanf("%d %d %d %d %d %d",&s.jadegja,&s.dhoni,&s.malinga,&s.shachin,&s.sachin,&s.savack);
    int run=0;
    run+=s.jadegja+s.dhoni+s.malinga+s.shachin+s.sachin+s.savack;
    printf("the total runs of the team CSK=%d",run);
    return 0;

}
