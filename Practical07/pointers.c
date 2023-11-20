#include<stdio.h>
#include<stdlib.h>

//Allocate array
int *allocate (int n ){
    int *p;
    p =(int *)malloc(n*sizeof(int));
    return p;
}

//Fill with ones
void fillwithones(int *array, int n){
    int i;
    for(i=0; i<n; i++){
        *(array + i)=1;
    }    
}

void print_array_n(int *a, int n){
    int i;
    for(i=0; i<n; i++){
        printf("%d",a[i]);
    }
    printf("\n");
}

//Deallocate the array
void freearray(int *a){
    free(a);
}


int main(){
    int n, *a;
    printf("Please input the size of the array\n");
    scanf("%d",&n);
    printf("-------------------------\n");
    printf("The size of the array is : %d \n",n);
    a = allocate(n);
    fillwithones(a,n);
    print_array_n(a,n);
    printf("This should be one : %d\n",a[2]);
    freearray(a);
    printf("\n");
    return 0;

}