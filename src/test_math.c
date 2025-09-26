#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "mymathlib.h"

void test_max_min_abs() {
    assert(max(3, 7) == 7);
    assert(min(3, 7) == 3);
    assert(abs(-10) == 10);
    assert(abs(0) == 0);
    assert(abs(15) == 15);
    printf("max/min/abs tests passed.\n");
}

void test_factorial_gcd_lcm() {
    assert(factorial(0) == 1);
    assert(factorial(5) == 120);

    assert(gcd(54, 24) == 6);
    assert(gcd(17, 13) == 1);

    assert(lcm(4, 6) == 12);
    assert(lcm(21, 6) == 42);
    printf("factorial/gcd/lcm tests passed.\n");
}

void test_prime_fibonacci_power() {
    assert(is_prime(2) == 1);
    assert(is_prime(17) == 1);
    assert(is_prime(18) == 0);

    assert(fibonacci(0) == 0);
    assert(fibonacci(1) == 1);
    assert(fibonacci(10) == 55);

    assert(power(2, 10) == 1024);
    assert(power(5, 0) == 1);
    printf("prime/fibonacci/power tests passed.\n");
}

void test_array_functions() {
    int a = 5, b = 10;
    swap(&a, &b);
    assert(a == 10 && b == 5);

    int arr1[] = {1, 2, 3, 4, 5};
    reverse_array(arr1, 5);
    int expected_rev[] = {5, 4, 3, 2, 1};
    for (int i = 0; i < 5; i++) assert(arr1[i] == expected_rev[i]);

    int arr2[] = {1, 2, 3, 4, 5};
    assert(sum_array(arr2, 5) == 15);

    increment_all(arr2, 5, 10);
    int expected_inc[] = {11, 12, 13, 14, 15};
    for (int i = 0; i < 5; i++) assert(arr2[i] == expected_inc[i]);

    printf("array manipulation tests passed.\n");
}

void test_division() {
    DivisionResult r = divide(17, 5);
    assert(r.quotient == 3 && r.remainder == 2);

    r = divide(20, -4);
    assert(r.quotient == -5 && r.remainder == 0);

    printf("division tests passed.\n");
}

void test_complex() {
    Complex c1 = {2.0, 3.0}, c2 = {4.0, -1.0};
    Complex sum = complex_add(c1, c2);
    assert(sum.real == 6.0 && sum.imag == 2.0);

    Complex prod = complex_multiply(c1, c2);
    // (2+3i)(4-1i) = 8 -2i +12i + 3 = 11 + 10i
    assert(prod.real == 11.0 && prod.imag == 10.0);

    printf("complex number tests passed.\n");
}

void test_generate_primes() {
    int count;
    int *primes = generate_primes(8, &count);
    assert(count == 8); // primes <= 20: 2,3,5,7,11,13,17,19
    int expected[] = {2,3,5,7,11,13,17,19};
    for (int i = 0; i < count; i++) assert(primes[i] == expected[i]);
    free(primes);
    printf("prime generation tests passed.\n");
}

void test_shuffle_and_search() {
    int arr[] = {1,2,3,4,5};
    shuffle_array(arr, 5);
    // Hard to assert shuffle randomness, but we can assert all elements still exist
    int found[6] = {0};
    for (int i = 0; i < 5; i++) found[arr[i]] = 1;
    for (int i = 1; i <= 5; i++) assert(found[i] == 1);

    int sorted[] = {1,2,3,4,5,6,7,8,9};
    assert(binary_search(sorted, 9, 1) == 0);
    assert(binary_search(sorted, 9, 9) == 8);
    assert(binary_search(sorted, 9, 5) == 4);
    assert(binary_search(sorted, 9, 10) == -1);

    printf("shuffle and binary search tests passed.\n");
}

int main() {
    test_max_min_abs();
    test_factorial_gcd_lcm();
    test_prime_fibonacci_power();
    test_array_functions();
    test_division();
    test_complex();
    test_generate_primes();
    test_shuffle_and_search();
    printf("\nAll tests passed successfully!\n");
    return 0;
}
