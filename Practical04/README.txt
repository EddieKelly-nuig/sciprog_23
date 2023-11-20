This source code is for computing the area of the function of tangent(x) from x = 0 to 60 degrees.
This is achieved by using the trapezium rule to approximate the integral. We divide the trape-
iums into widths of 5 degrees for computing the area of the arctangent function. This corresponds to
dividing the region of integration into 12 equal regions or steps.

However unlike the previous code for approximating the integral of the tangent function, we use two
functions degtorad and traprule rather than an explicit loop in 'main'. Degtorad function is used to 
convert from degrees to radians (as the tan function within math.h only accepts radians for argumen-
ts. Traprule function will compute the approximation of the integral using trapezoidal rule, it-
accepts one argument ,n, that instructs how many regions will be in the trapezoidal rule approxima-
tion. By default this value is 12 however this can be changed in the source code by modifying 'int N'



---

In order to compile this source code please use the following command.

gcc -o trap trap.c -lm

---

Upon execution of the code you should get the approximation for the integral and the exact value
which is the natural logarithm of 2.


