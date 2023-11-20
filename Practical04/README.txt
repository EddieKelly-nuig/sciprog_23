This source code is for computing the area of the function of arctangent(x) from x = 0 to 60 degrees.
This is achieved by using the trapezium rule to approximate the integral. We divide the trape-
iums into widths of 5 degrees for computing the area of the arctangent function. This corresponds to
dividing the region of integration into 12 equal regions or steps.

---

In order to compile this source code please use the following command.

gcc -o trap trap.c -lm

---

Upon execution of the code you should get the approximation for the integral and the exact value
which is the natural logarithm of 2.


