#include <stdio.h>

int main (){
    int mat [4][4];
    int i, j;
    int valormat;
  
    for (i=0; i<4; i++)
    {
        printf("\n");
        for (j=0; j < 4; j++)
        {
            valormat = i*j;
            printf ("%d", valormat);
            }
            
        }
    
return 0;
}