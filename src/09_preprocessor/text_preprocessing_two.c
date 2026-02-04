// 1. Preprocessor: A program that before the compiler. It reads source code, process everything that start with #directives, then output the modified text for
// comiler
// Preprocessor handles 
// 1. Insert file content that start with #include 
// 2. Create macros/constants start with #define  a name that gets replaced with code 
// 3. Conditional compilation: #ifdef, #ifndef, #enif // if defined, if not defined , end if 
// 4. Compiler specific instruction: #pragma // pragmatic 
// in c cpp is the preprocessor proram 
// gcc is the full compiler suite 
#include <stdio.h> // replace by actual code by preprocessor 
#define MAX 100
#define SQUARE(x) ((x) * (x))

int main(){
    int a = SQUARE(4); // replace by preprocessor to ((4) * (4))
    int arr[MAX] = {1, 3, 5, 7, 9}; // preprocessor replace int arr[MAX] with int arr[100]

    printf("%d\n", a);
    printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
    return 0;
}


