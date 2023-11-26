This code is used to determine whether an n by n matrix is a 'magic square'. A
magic square is defined to be a square matrix whose sum along any of the columns
or rows or either of the two diagonals of the matrix are equal to a constant. This
constant for an n*n matrix is given by n(n^2 + 1)/2. The header file 'magic_square.h'
contains a source code for the function 'isMagicSquare' that determines if a given a 
matrix and the coressponding size of the matrix, whether it is magic or not. 

The source file 'main.c' contains a script that determines if a matrix as real from
another text file is magic or not. 

---

In order to compile this source code please use the following command.

gcc -o main main.c -lm

---

The scipt upon execution will ask the user to enter the name of file, no longer
than 100 characters in length. The script will then readout and store the matrix
that is stored in the text file. The matrix will be printed to the
screen along with a statement stating whether the matrix is 'magic' or not.