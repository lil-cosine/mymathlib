# mymathlib

A small C math utility library that provides useful functions for:

- Basic integer math
- Number theory (prime checking, Fibonacci, GCD/LCM, exponentiation)
- Pointer-based array manipulation
- Struct-based math (complex numbers, division result)
- Utility algorithms (prime generation, array shuffle, binary search)

---

## Building

From the `compile/` directory, run:

```bash
make        # Build the test program
make run    # Build and run the tests
make clean  # Clean up build artifacts
```

The build uses ```gcc``` with ```-Wall -Wextra``` and links with ```-lm``` for math functions.

---

## Example Usage

```c
#include <stdio.h>
#include "mymathlib.h"
int main() {
    printf("Max of 3 and 7: %d\n", max(3, 7));
    printf("Factorial of 5: %d\n", factorial(5));

    Complex c1 = {2.0, 3.0};
    Complex c2 = {4.0, -1.0};
    Complex result = complex_multiply(c1, c2);

    printf("Complex product: %.2f + %.2fi\n", result.real, result.imag);

    int arr[] = {1,2,3,4,5};
    reverse_array(arr, 5);
    printf("Reversed array: ");
    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
```

Compile and run:
```bash
gcc -I./src src/mymathlib.c your_program.c -o demo -lm
./demo
```

---

## Testing

All functions are tested in ```src/test_math.c``` using assertions. To run the tests:
```bash
make run
```

The expected output should be:
```
max/min/abs tests passed.
factorial/gcd/lcm tests passed.
prime/fibonacci/power tests passed.
array manipulation tests passed.
division tests passed.
complex number tests passed.
prime generation tests passed.
shuffle and binary search tests passed.

All tests passed successfully!
```
