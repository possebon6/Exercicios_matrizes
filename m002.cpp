#include <stdio.h>

int main (){
    int mat [5][5];
    int i, j;
    
     for (i=0; i<5; i++)
    {
        printf("\n");
        for (j=0; j < 5; j++)
        {
           
            if (i==j)
            {
            printf("1");
            }
            else
            {
            printf ("0");
            }
        }
    }
    
    return 0;
}