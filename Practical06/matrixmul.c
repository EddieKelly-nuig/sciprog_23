#include<stdio.h>
#include<math.h>

int main(){
    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];
    int i, j, k; //Loop indices

    //Intialise A, B, C
    for(i=0; i<n; i++){
        for(j=0; j<p; j++){
            A[i][j] = i + j + 2;
        }
    }
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            B[i][j] = i - j;
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<q; j++){
            C[i][j] = 0.0;
        }

    }
    for(i=0; i<n; i++){
        for(j=0; j<q; j++){
            for(k=0; k<p; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    //Print out matrices
    printf("\n This is matrix A :\n");
    for(i=0; i<n; i++){
        for(j=0; j<p; j++){
            printf("%3.0f", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\n This is matrix B :\n");
    for(i=0; i<p; i++){
        for(j=0; j<q; j++){
            printf("%3.0f", B[i][j]);
        }
        printf("\n");
    }

    printf("\n This is matrix C :\n");
    for(i=0; i<n; i++){
        for(j=0; j<q; j++){
            printf("%3.0f", C[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;


}