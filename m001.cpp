#include <stdio.h>

int main (){
    int mat [4][4];
    int i, j;
    int valormaisqdez = 0;
    
    for (i=0; i<4; i++)
    {
        for (j=0; j < 4; j++)
        {
            printf ("Digite o valor para a matriz na linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat[i][j]);
            
            if (mat[i][j]>10)
            {
                valormaisqdez +=1;
            }
            
        }
    }
    
    printf ("Há %d valor(es) maior(es) que 10 \n", valormaisqdez);
    
    return 0;
}