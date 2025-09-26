#include "mymathlib.h"
#include <math.h>
#include <stdlib.h>

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
    if (n <= 1){
        return 0;
    }
    if (n == 2 || n == 3){
        return 1;
    }

    if (n % 2 == 0 || n % 3 == 0){
        return 0;
    }

    for (int i = 5; i < sqrt(n); i += 6){
        if (n % i == 0 || n % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int fibonacci(int n){
    if (n == 0){
        return 0;
    }

    if (n == 1){
        return 1;
    }

    int a = 0;
    int b = 1;

    for(int i = 2; i < n; i++){
        int temp = a + b;
        a = b;
        b = temp;
    }

    return a + b;
}

long long power(int base, int exponent){
    if(exponent == 0){
        return 1;
    }
    long long out = base;
    for(int i = 0; i < exponent-1; i++){
        out = out * base;
    }
    return out;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse_array(int *arr, int size) {
    for (int i = 0; i < size / 2; i++) {
        int tmp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = tmp;
    }
}

int sum_array(int *arr, int size){
    int out = 0;

    for(int i = 0; i < size; i++){
        out += arr[i];
    }

    return out;
}

void increment_all(int *arr, int size, int val){
    for(int i = 0; i < size; i++){
        arr[i] += val;
    }
}

DivisionResult divide(int dividend, int divisor){
    DivisionResult out = {0, 0};
    if(divisor == 0){
        return out;
    }
    out = (DivisionResult){.quotient = dividend / divisor, .remainder = dividend % divisor};

    return out;
}

Complex complex_add(Complex a, Complex b){
    Complex out;

    out.real = a.real + b.real;
    out.imag = a.imag + b.imag;

    return out;
}

Complex complex_multiply(Complex a, Complex b){
    Complex out;

    out.real = (a.real * b.real) - (a.imag * b.imag);
    out.imag = (a.real * b.imag) + (a.imag * b.real);

    return out;
}

int* generate_primes(int n, int *count){
    if (n <= 0){
        *count = 0;
        return 0;
    }
    *count = 0;
    int* arr;
    arr = (int*) malloc(n * sizeof(int));

    int temp = 2;
    while(*count < n){
        if (is_prime(temp)){
            arr[*count] = temp;
            *count += 1;
        }
        temp++;
    }

    return arr;
}

void shuffle_array(int *arr, int size){
    for(int i = size-1; i > 0; i--){
        int j = rand() % (i + 1);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int binary_search(int *arr, int size, int target){
    int l = 0;
    int r = size - 1;
    while(l <= r){
        int m = l + ((r - l) / 2);
        if(arr[m] < target){
            l = m + 1;
        }
        else if (arr[m] > target){
            r = m - 1;
        }
        else{
            return m;
        }
    }
    return -1;
}
