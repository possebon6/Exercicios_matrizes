#include <stdio.h>

int main (){
    int mat [4][4];
    int i, j;
    int m;
    int l, c = 0;
    
    
    for (i=0; i<4; i++)
    {
        printf("\n");
        
        for (j=0; j < 4; j++)
        {
            printf ("Digite o valor para a matriz na linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }
    
    
    for (i=0; i<4; i++)
    {
        printf("\n");
        
        for (j=0; j < 4; j++)
        {
            printf ("%d", mat[i][j]);
            
        }
    }
    
    m=mat[0][0];
     l = c = 0;
    for (i=0; i<4; i++)
    {
        for (j=0; j < 4; j++)
        {
            if (mat[i][j] > m)
            {
            m=mat[i][j];
            l=i;
            c=j;
        }
        }
    }
    
    printf("\nO maior valor é: %d, que está na linha %d, coluna %d. \n", m, l, c);
    return 0;
}