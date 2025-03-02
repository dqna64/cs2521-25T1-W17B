/**
 * Declarations demo.
 * 
 * On this program we can do preprocessing, compilation, assembly,
 * but cannot do linking and execution.
 * 
 * First three steps:
 * ```
 * $ clang -c 0-5-declaration.c -o 0-5-declaration.o
 * OK
 * ```
 * 
 * Last step:
 * ```
 * $ clang 0-5-declaration.o -o 0-5-declaration
 * clang: error: linker command failed with exit code 1
 * ```
 */

#include <stdio.h>

// A variable declaration
// `myStackInt` has been declared, but not defined
extern int myStackInt;

// The compiler allows you to call a declared function by its name
// But the linker will fail, it cannot find where `myFunc` is defined.
// myFunc(5, 7);

// Another variable declaration
extern float * myFloatPtr;

// A function declaration
int myFunc(int a, int b);

int main() {
    printf("%d\n", myStackInt);
}