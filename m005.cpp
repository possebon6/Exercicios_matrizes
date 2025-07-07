#include <stdio.h>

int main (){
    int mat [5][5];
    int i, j;
    int m;
    int l, c = 0;
    int x;
    
    
    for (i=0; i<5; i++)
    {
        printf("\n");
        
        for (j=0; j < 5; j++)
        {
            printf ("Digite o valor para a matriz na linha %d, coluna %d: ", i, j);
            scanf ("%d", &mat[i][j]);
        }
    }
    
    
    for (i=0; i<5; i++)
    {
        printf("\n");
        
        for (j=0; j < 5; j++)
        {
            printf ("%d", mat[i][j]);
            
        }
    }
    
    printf ("\nDigite o número para informarmos a linha e coluna que ele está:\n");
    scanf("%d", &x);
    
  for (i=0; i<5; i++)
    
        for (j=0; j < 5; j++)
        
    if (x==mat[i][j])
    {
        printf ("O número %d está na linha %d, coluna %d. \n", x, i, j);
        return 0;
    }
    printf ("Não encontrado. \n");
    return 0;
}