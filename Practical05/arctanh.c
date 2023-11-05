#include<stdio.h>
#include<math.h>
#include<stdlib.h>

double arctanh1(const double x, const double delta);

double arctanh2(const double x);

int main(){
    double delta, x;
    printf("Enter the precision for the Maclaurin series: \n");
    scanf("%lf", &delta);

    int length = 1000;
    double tan1[length]; //Storing the values from the maclaurin approximation of arctanh
    double tan2[length]; //Storing the values from the log definition of arctanh
    int j = 0; // j corresponds to array index
    x = -0.9;
    while(x <= 0.9 && j < 1000){
        tan1[j] = arctanh1(x, delta);
        tan2[j] = arctanh2(x); 
        printf("The difference at x = %lf between is %.10lf .\n",x, fabs(tan1[j]-tan2[j]));
        x += 0.01;
        j++;
        
    }
    return 0;

}

double arctanh1(const double x, const double delta){
    double arcTan = 0; //approximation
    double elem , val; //element in the series
    int n=0; //sum parameter

    if(fabs(x)>= 1){
        printf("Absolute value is larger than 1 \n");
        exit(1);
    }
    else{
        do{
        val = 2*n + 1 ;
        elem=pow(x,val)/val ;
        arcTan += elem; 
        n++; } while(fabs(elem)>=delta);

    }
    return arcTan;

}

double arctanh2(const double x){
    return (log(1+x)-log(1-x))/2;

}
