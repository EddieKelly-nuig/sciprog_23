/*Find e using taylor series expansion*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int factorial(int n);

int main(void){
    int i, order;
    double e, *terms;
    
    //Enter Polynomial Order
    printf("Enter the required polynomial order\n");
    if(scanf("%d",&order) != 1){
        printf("Didnt enter a number!\n");
        return 2;
    }
    //Allocate memory depending on n
    terms = malloc(order*sizeof(double));
    for(i=0; i<order; i++){
        terms[i] = 1.0/((double)factorial(i+1));
        printf("e term for order %d is %1.14lf \n",i+1,terms[i]);
    }
/* Start summing up the series, we ignore the first term/
 * as it is always */
    e = 1.0;
    for(i=0;  i<order; i++){
        e = e + terms[i];
    }
    /*Free up the memory that is used to store the
     * the taylor terms in the approximation*/

    free(terms);
    /* Print the approximate value of e from the taylor series and /
     * compare to the value of e as as stored by the math.h library*/
    printf("e is estimated as %.10lf, with difference %e\n", e,e-exp(1.0));

    return 0;
}

int factorial(int n){
    if(n<0){
	/*As the factorial function is only defined for positive integers/
	 * we check that input is a positve integer and if not return an/
	 * error message*/

        printf("Error: Negative number passed to factorial function.\n");
        return(-1);

    }
    else if(n==0){
        return 1;

    }
    else{
        return(n*factorial(n-1));
    }

}
