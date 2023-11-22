This source code is used to calculate the inverse hyperbolic tangent function in
two different ways. The first method utilised to calculate the arctanh function
is the Maclaurin series representation of the function. The second method -
utilised to calculate the arctanh function is the logarithmic representation
(i.e. arctanh(x)=\frac{1}{2}(\ln(1+x)-\ln(1-x)) )

The user is asked to enter a precision 'delta'. A function arctanh1(delta)
will then use the precision entered to determinehow many terms are added
/considered in the Maclaurin representation.  A second function arctanh2(delta)
calculates the exact value using the analytic expression. The output from both
functions, evaluated on the grid [-0.9,0.9] with stepsize 0.01 . The accu-
racy of each method is compared elementwise between the two arrays. 
---

In order to compile this source code please use the following command.

gcc -o arctanh arctanh.c -lm

---

The scipt upon execution will ask the user to enter a precision and will 
subsequently print the absolute value in difference between the two approaches-
for calculating the arctangent function on the specified grid above.