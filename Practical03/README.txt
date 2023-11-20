This source code is for computing the area under the tangent function from x=0 to 60 degrees.
The standard on from the math.h library is used to calculate the value of tangent 
function. We are using 12 equidistant steps in the trapezoidal rule, each corresponding to
5 degrees of increment. We use a loop to calculate twice the value of the tangent function at
each of the interior points of the grid and we add it to the value of the tangent function
at then end points.

(In actuality, we compute the sum of the value at the endpoints initially
and add the values in the interior region later with a for loop).

---

In order to compile the source code, please use the following command: 

gcc -o trap trap.c -lm

---

Upon successful execution of the program, an approximation and the exact value of the integral 
should be displayed.
