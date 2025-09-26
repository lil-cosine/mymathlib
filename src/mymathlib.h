#ifndef MYMATHLIB_H
#define MYMATHLIB_H

/**
 * @struct DivisionResult
 * @brief Holds the quotient and remainder of an integer division.
 */
typedef struct{
    int quotient;
    int remainder;
} DivisionResult;

/**
 * @struct Complex
 * @brief Represents a complex number with real and imaginary parts.
 */
typedef struct{
    double real;
    double imag;
} Complex;

/**
 * @brief Returns the maximum of two integers.
 */
extern int max(int a, int b);

/**
 * @brief Returns the minimum of two integers.
 */
extern int min(int a, int b);

/**
 * @brief Returns the absolute value of an integer.
 */
extern int abs(int val);

/**
 * @brief Returns the factorial of n (n!).
 * @param n Non-negative integer. factorial(0) = 1.
 */
extern int factorial(int n);

/**
 * @brief Computes the greatest common divisor (GCD) of two integers using Euclidean algorithm.
 */
extern int gcd(int a, int b);

/**
 * @brief Computes the least common multiple (LCM) of two integers.
 */
extern int lcm(int a, int b);

/**
 * @brief Returns 1 if n is prime, 0 otherwise.
 */
extern int is_prime(int n);

/**
 * @brief Returns the nth Fibonacci number.
 */
extern int fibonacci(int n);

/**
 * @brief Computes integer exponentiation (base^exponent).
 * @warning Watch for overflow for large values.
 */
extern long long power(int base, int exponent);

/**
 * @brief Swaps the values of two integers using pointers.
 */
extern void swap(int *a, int *b);

/**
 * @brief Reverses an array in place using pointers.
 */
extern void reverse_array(int *arr, int size);

/**
 * @brief Returns the sum of all elements in an integer array.
 */
extern int sum_array(int *arr, int size);

/**
 * @brief Increments every element in the array by the specified value.
 */
extern void increment_all(int *arr, int size, int val);

/**
 * @brief Performs integer division and returns both quotient and remainder.
 */
extern DivisionResult divide(int dividend, int divisor);

/**
 * @brief Adds two complex numbers.
 */
extern Complex complex_add(Complex a, Complex b);

/**
 * @brief Multiplies two complex numbers.
 */
extern Complex complex_multiply(Complex a, Complex b);

/**
 * @brief Generates an array of primes up to n (or first n primes) and stores the count.
 * @note Memory is dynamically allocated; caller must free the returned array.
 */
extern int* generate_primes(int n, int *count);

/**
 * @brief Randomly shuffles an array using the Fisher-Yates algorithm.
 */
extern void shuffle_array(int *arr, int size);

/**
 * @brief Performs binary search on a sorted array.
 * @return Index of target if found, -1 otherwise.
 */
extern int binary_search(int *arr, int size, int target);

#endif
