#include <stdio.h>

int main() 
{
    FILE *fp; 
    fp = fopen("notes.txt", "r"); 

    fprintf(fp, "Veeresh\n");
    fprintf(fp, "Pavan\n");
    fprintf(fp, "Sandeep\n");
    fprintf(fp, "Vamsi\n");
    fprintf(fp, "satya\n");
    
    fclose(fp); 
    printf("File written and closed successfully.\n");

    return 0;
}
