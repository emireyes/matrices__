#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, i, j, k;
    int sumaDiagonalA = 0;
    int sumaTriangularB = 0;
	int opcion;
                
                
    while(opcion!=6){
    
    srand(time(NULL));

    printf("Ingrese la longitud de la matriz: \n");
    scanf("%d", &n);

    int A[n][n], B[n][n], C[n][n];


    printf("Matriz A: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = rand() % 10;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("|%d|", A[i][j]);
        }
        printf(" \n\n");
    }


    printf("Matriz B: \n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            B[i][j] = rand() % 10;
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("|%d|", B[i][j]);
        }
        printf(" \n\n");
    }


    printf("1. Suma de matrices A y B\n");
    printf("2. Resta de matrices A y B\n");
    printf("3. Multiplicacion de matrices A y B\n");
    printf("4. Suma de la diagonal principal de la matriz A\n");
    printf("5. Suma del triangulo superior de la matriz B\n");
    printf("6. terminar el programa\n");
    printf("Ingrese el numero de la operacion que desea realizar: ");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("\n\033[1;32mResultado de la suma de matrices A y B:\033[0m\n\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    C[i][j] = A[i][j] + B[i][j];
                    printf("\033[1;32m|%d|\033[0m", C[i][j]);
                }
                printf(" \n\n");
            }
            break;
        case 2:
            printf("\n\033[1;32mResultado de la resta de matrices A y B:\033[0m\n\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    C[i][j] = A[i][j] - B[i][j];
                    printf("\033[1;32m|%d|\033[0m", C[i][j]);
                }
                printf(" \n\n");
            }
            break;
        case 3:
            printf("\n\033[1;32mResultado de la multiplicacion de matrices A y B:\033[0m\n\n");
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    C[i][j] = 0;
                    for (k = 0; k < n; k++) {
                        C[i][j] += A[i][k] * B[k][j];
                    }
                    printf("\033[1;32m|%d|\033[0m", C[i][j]);
                }
                printf(" \n\n");
            }
            break;
        case 4:


            for (i = 0; i < n; i++) {
                sumaDiagonalA += A[i][i];
            }
            printf("\n\033[1;32mLa suma de la diagonal principal de la matriz A es: %d\033[0m\n\n", sumaDiagonalA);
            break;
        case 5:

            for (i = 0; i < n; i++) {
                for (j = i + 1; j < n; j++) {
                    sumaTriangularB += B[i][j];
                }
            }
            printf("\n\033[1;32mLa suma del triangulo superior de la matriz B es: %d\033[0m\n\n", sumaTriangularB);
            break;
        default:
            printf("Programa terminado\n");
    }
}
    return 0;
}
