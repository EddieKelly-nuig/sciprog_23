#include<stdio.h>
#include<math.h>

double degtorad(double deg); //function that will convert degrees to radians for trigonometric functions
double traprule(int N); // function that will compute the integral with the trapezoidal rule

int main(){

    int N = 12;
    double integral_approx = traprule(N);
    double integral_exact = log(2.0);
    printf("    Your approximation of the integral from x=0 degrees to x=60 degrees\n\
    of the function tan(x) with respect to x is %.5f.\n\
    The exact solution is given by %.5f. \n",integral_approx,integral_exact);



}    

double degtorad(double deg){ //definition of function that will convert degrees to radians where double precision is used for both variables.
    return (deg * M_PI)/180.0;
}

double traprule(int N){
    
    int i; // define i to be the variable that is iterated over in the for loop , where i is an integer.
    double TanValues[N+1], deg, rad , width; //define the array TanValues that will store the value of the tangent function at different points.
    //We also define intermediate variables that will be used in the final trapezoidal calculation later on
    for(i=0; i<=N; i++){

        deg = i * 5.0; //Here we increment from 0 by 5 degrees every time we iterate through the loop.
        rad = degtorad(deg); //We use the previously defined degtorad function to convert from degrees to radians
        TanValues[i] = tan(rad);//We compute the value of tangent function at that specific radian value and append to TanValues
        //printf("Tan values [%d] = %.2f at x=%.2f \n",i,TanValues[i],deg);
    }
    double area = TanValues[0]+TanValues[N]; //Add the endpoints
    for(i=1;i<N;i++){
        area += 2.0*TanValues[i]; //Add twice the value of the inputs in between the two endpoints
    }
    width = degtorad((60.0-0.0)/(2.0 * N)); //Calculate the width of each of the trapeziums in degrees and convert into radians
    area = width * area; //Calculate the area
    return area; //Return the approximation to the integral
}   