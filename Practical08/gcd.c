#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int GCD_iterative(int a, int b); //Defining a function that will iteratively calculate the greatest common divisior 
int GCD_recursive(int a, int b); //Defining a function that will recursively calculate the greatest common divisior

int main(){
    int x,y,z,w;
    printf("Please input value for first integer\n"); //Asking the user to input the first integer
    scanf("%d",&x);                                    //Storing it at the address of x
    printf("Please input value for second integer\n"); //Asking the user to input the second integer
    scanf("%d",&y);                                    //Storing it at the address of y
    z = GCD_iterative(x,y);                            //Calculating the value of the gcd iteratively
    w = GCD_recursive(x,y);                            //Calculating the value of the gcd recursively
    printf("~~~~~~~~~~~~~~~\n");
    printf("The GCD of %d and %d, calculated via an iterative method is: %d\n",x,y,z);
    printf("The GCD of %d and %d, calculated via a recursive method is: %d\n",x,y,w);
    printf("~~~~~~~~~~~~~~~\n");
    if(z == 1){
        printf("The numbers you entered are comprime as their GCD is 1\n"); 
    }
    else{
        printf("The numbers you entered are not comprime as they share a non trivial common factor\n");
    }
    return 0;
}

int GCD_iterative(int a, int b){ //This function calcualtes the GCD using Euclidean division
    int temp;                    
    while(b != 0){         //While b is not zero, we assign the value of b to temp and reassign the remainder                                                            */          
        temp = b;          //upon division of a by b to b
        b = (int)(a % b) ; 
        a = temp;
    }
    return (int)a;
}

int GCD_recursive(int a, int b){
    if(b == 0){
        return a; //If one of the variables is zero, irrespective of the value of the second variable it will be
    }             // the gcd of the two numbers(Everything divides into zero)
    else{
        return GCD_recursive(b, a % b); 
    }
}