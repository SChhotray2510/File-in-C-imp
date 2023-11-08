#include <stdio.h>

int main(void){

    FILE *fp=fopen("readme.txt","r");
    FILE *fout=fopen("output.txt","w");

    char l_name[25];

    fscanf(fp,"%25s",l_name);
    fprintf(fout,"Hello Mr./Ms. %s\n", l_name);

    fclose(fp);
    fclose(fout);  

    return 0;
}