#ifndef MYMATHLIB_H
#define MYMATHLIB_H

typedef struct{
    int quotient;
    int remainder;
} DivisionResult;

typedef struct{
    double real;
    double imag;
} Complex;

extern int max(int a, int b);
extern int min(int a, int b);
extern int abs(int val);
extern int factorial(int n);
extern int gcd(int a, int b);
extern int lcm(int a, int b);

extern int is_prime(int n);
extern int fibonacci(int n);
extern long long power(int base, int exponent);

extern void swap(int *a, int *b);
extern void reverse_array(int *arr, int size);
extern int sum_array(int *arr, int size);
extern void increment_all(int *arr, int size, int val);

extern DivisionResult divide(int dividend, int divisor);
extern Complex complex_add(Complex a, Complex b);
extern Complex complex_multiply(Complex a, Complex b);

extern int* generate_primes(int n, int *count);
extern void shuffle_array(int *arr, int size);
extern int binary_search(int *arr, int size, int target);

#endif
