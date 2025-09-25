#include "mymathlib.h"
// #include <stdlib.h>

int max(int a, int b){
    if(a < b){
        return b;
    }
    return a;
}

int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

int abs(int val){
    if(val > 0){
        return val;
    }
    return val * -1;
}

int factorial(int n){
    if(n < 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    int out = 1;
    int idx = 2;
    while(idx <= n){
        out *= idx;
        idx += 1;
    }

    return out;
}

int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    if(b == 0){
        return a;
    }

    int out = min(a, b);
    while(out > 0){
        if(a % out == 0 && b % out == 0){
            break;
        }
        out--;
    }
    return out;
}

int lcm(int a, int b){
    return (a / gcd(a,b)) * b;
}

int is_prime(int n){
    return 0;
}

int fibonacci(int n){
    return 0;
}

long long power(int base, int exponent){
    return 0;
}

void swap(int *a, int *b){
    return;
}

void reverse_array(int *arr, int size){
    return;
}

int sum_array(int *arr, int size){
    return 0;
}

void increment_all(int *arr, int size, int val){
    return;
}

DivisionResult divide(int dividend, int divisor){
    DivisionResult out;
    if(divisor == 0){
        return out;
    }
    out = (DivisionResult){.quotient = dividend / divisor, .remainder = dividend % divisor};

    return out;
}

Complex complex_add(Complex a, Complex b){
    Complex out;

    return out;
}

Complex complex_multiply(Complex a, Complex b){
    Complex out;

    return out;
}

int* generate_primes(int n, int *count){
    return 0;
}

void shuffle_array(int *arr, int size){
    return;
}

int binary_search(int *arr, int size, int target){
    return 0;
}
