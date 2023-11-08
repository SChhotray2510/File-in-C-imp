#include <stdio.h>

int main(void){

    FILE *fp=fopen("readme.txt","r");
    char f_name[25];
    char l_name[25];

    fgets(l_name,20,fp);
    fputs(l_name,stderr);
    printf("Hello Mr./Ms. %s", l_name);

    return 0;
}