#include <stdio.h>

int main (){
    int mat01[4][4], mat02[4][4], mat03[4][4];
    int i, j;
    
    
    
    for (i=0; i<4; i++)
    {
        printf("\n");
        
        for (j=0; j < 4; j++)
        {
            printf ("Digite o valor para a matriz 01 na linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat01[i][j]);
        }
    }
    
    printf("Matriz 01: ");
    
    for (i=0; i<4; i++)
    {
        printf("\n");
        
        for (j=0; j < 4; j++)
        {
            printf ("%d", mat01[i][j]);
            
        }
    }
    
   for (i=0; i<4; i++)
    {
        printf("\n");
        
        for (j=0; j < 4; j++)
        {
            printf ("Digite o valor para a matriz 02 na linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat02[i][j]);
        }
    }
    
    printf("Matriz 02: ");
    
    for (i=0; i<4; i++)
    {
        printf("\n");
        
        for (j=0; j < 4; j++)
        {
            printf ("%d", mat02[i][j]);
            
        }
    }
    
   printf ("\n \n Matriz 03: \n");
    
    for (i=0; i<4; i++)
    {
        printf("\n");
        
        for (j=0; j < 4; j++)
        {
        if (mat01[i][j]>mat02[i][j]) 
        {
            mat03[i][j]=mat01[i][j];
            } 
            else 
            {
                mat03[i][j]=mat02[i][j];
            }
            printf("%d ", mat03[i][j]);
        }
    }
    
    
    
    return 0;
}