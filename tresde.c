#include <stdio.h>

int main(void)
{

    int a, b, c;

    printf("Ingrese las filas que va a tener cada matriz.\n");
    scanf("%d", &a);
    printf("Ingrese las columnsa que va a tener cada matriz.\n");
    scanf("%d", &b);
    printf("Ingrese la profundidad de la matriz (cuantas matrices de %dx%d van a haber) que va a tener cada matriz.\n", a, b);
    scanf("%d", &c);
    int matriz[a][b][c];

    for (int k = 0; k < c; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                matriz[i][j][k] = 0;
                if (k == c - 1)
                {
                    matriz[i][j][k] = 1;
                }
            }
        }
    }

    for (int k = 0; k < c; k++)
    {
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("%d", matriz[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}