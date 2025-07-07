#include <stdio.h>

int main (){
    int m[3][3];
    int i, j;
    int soma = 0;
    
    for (i=0; i<3; i++)
    {
        printf("\n");
        
        for (j=0; j < 3; j++)
        {
            printf ("Digite o valor para a matriz na linha %d, coluna %d: ", i, j);
            scanf ("%d", &m[i][j]);
        }
    }
    
    for (i=0; i<3; i++)
    {
        printf("\n");
        
        for (j=0; j < 3; j++)
        {
            printf ("%d", m[i][j]);
            
        }
    }
    
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
        if (i==j)
        {
       soma+=m[i][j];
        }
        }
    }
     printf("\n \nSoma dos valores da diagonal principal: %d", soma);
   
   
    return 0;
}