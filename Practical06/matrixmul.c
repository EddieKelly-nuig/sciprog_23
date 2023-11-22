#include<stdio.h>
#include<math.h>

int main(){
    int n=5, p=3, q=4;
    double A[n][p], B[p][q], C[n][q];
    int i, j, k; //Indices that will be used in  each of the nested loops

    //Intialise A, B, C
    for(i=0; i<n; i++){     //This nested for loop creates a matrix of size (5,3) whose top left entry is 0  
        for(j=0; j<p; j++){ //and is constant along the anti-diagonals of the matrix and increments by 1 in                                                                
            A[i][j] = i + j;//each step as we progress through to the bottom right entry    
        }                   //(i.e. A[0][1]=A[1][0]=1) and so forth.
    }
    for(i=0; i<p; i++){     //This nested for loop creates a matrix of size (3,4) whose top left entry os
        for(j=0; j<q; j++){
            B[i][j] = i - j;
        }
    }
    for(i=0; i<n; i++){    //This nested for loop creates a matrix of size (5,4) which has all entries equal to
        for(j=0; j<q; j++){//zero.
            C[i][j] = 0.0;
        }

    }
    for(i=0; i<n; i++){        //These nested for loops compute the (i,j)th entry of the matrix C that is formed
        for(j=0; j<q; j++){    //by composing B with A as previously defined.
            for(k=0; k<p; k++){
                C[i][j] += A[i][k]*B[k][j];
            }
        }
    }
    //Print out each of the respective matrices 
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