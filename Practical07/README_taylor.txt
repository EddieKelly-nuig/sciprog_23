This source code calculates the value of Euler's number (e) using the 
Taylor series approximation of the exponential function. The only input
to the function is a positive integer which corresponds to the order of 
the Taylor approximation of e. An array is printed whereby the (n+1)th term of 
the Taylor apprxoimation is stored in the nth entry. The terms of this
array are then summed up to determine the approximation of e ,given the order
inputted. The difference between the approximation of e and the 'analytic' value 
of e as provided by the math.h library.

---

In order to compile this source code please use the following command.

gcc -o taylor taylor.c -lm

---

Upon sucessful execution of the program, the user is prompted to enter a 
positive integer that will correspond to the order in the Taylor approximation
/polynomial.