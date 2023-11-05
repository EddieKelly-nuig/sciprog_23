#include<stdio.h>
#include<stdlib.h>
//Function declaration/prototype
//Input arguments : Fn-1 and Fn-2
//On exit, Fn and Fn-1

void fibonacci(int *a , int* b);

int main(){
    int n,i;
    int f0 = 0, f1 = 1;
    printf("Enter a positive integer\n");
    scanf("%d", &n);
    if(n<1){
        printf("The number is not positive");
        exit(1);
    } 
    
    printf("The fibonacci sequence is :\n");
    printf("%d,%d,",f0,f1);

    for (i=2; i<=n; i++){
        fibonacci(&f1,&f0);
        if ((f1<0) || (f0<0)){
          printf("Arithmetic overflow has occured\n");//Disregarding erroneous results
          exit(1);
        }
        else{
          printf("%d,\n",f1);
        }

        if((i+1)%10 == 0)  printf("\n");

    }


    
   printf("\n");
   return 0;
}

void fibonacci(int *a , int* b){
    int next;
    //*a=fn-1 ,*b=fn-2, next=fn
    next = *a + *b;
    //*a=fn, *b=fn-1
    *b = *a;
    *a = next;

}