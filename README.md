# Degree_n_polynomial

Write a C++ program 4.cpp that evaluates a degree-n polynomial

with multiplications and additions only. Note that this is the optimal, meaning that you cannot do this evaluation
with fewer arithmetic operations.
Implement the Horner’s method (https://en.wikipedia.org/wiki/Horner%27s_method) to achieve this optimal
computation. No mark will be given if you are not using the Horner’s method.
Input:
 A single line containing numbers, separated by spaces. The first number is the value of x, then the
degree n of the polynomial to evaluate, followed by the coefficients an, an-1, …, a0.
 The value x is a floating-point number and the numbers n, an, an-1, …, a0 are integers, and n ≥ 0.
Output:
 A single line containing the result of the polynomial evaluation, printed as a fixed floating number with
6 decimal places.
 You may use setprecision(n) defined in the header <iomanip> to set the precision parameter of
the output stream.
Requirement:
Use the float data type for all floating point computations in this program.
You can ONLY use the simple data types char, bool, int and float. In other words, you are not allowed
to use other data types or data structures such as arrays, vectors, etc.
