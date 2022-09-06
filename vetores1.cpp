#include <stdio.h>
int main()
{
    int notas[30];
    int i;
    for(i=0; i<30; i++) {
        printf("Digite a nota do aluno: %d\n", i);
        scanf("%d", &notas[i]);
        printf("A nota do aluno %d e: %d\n", i, notas[i]); 
    }

    return 0;
}
