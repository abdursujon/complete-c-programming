
// 1. Variables and Data Types
#include <stdio.h>
#include <stdbool.h>
#include <stddef.h>
int main(){
    // all int type including modified one
    int age = 26;
    short int count = 100;
    long int million = 10000000;
    long long int billion = 1000000000;
    unsigned int distance = 500; // can only store positive numbers 0 and above 
    signed int temperature = -34; // can store both positive and negative numbers 
    printf("Age %d, Count %d, Million %ld, Billion %lld, Distance %d, Temperature %d\n", age, count, million, billion, distance, temperature); // % is call formate specifier 
    
    /*
        - A data type that stores small integers from 0 to 255                                                                                                                           
        - Uses 8 bits (1 byte)                                                                                                                                                           
        - Can only be positive (no negative numbers) 
    */
    char grade = 'A';
    unsigned char byte = 255;
    printf("Grade: %c, Byte: %u\n", grade, byte);

    float average = 80.17;
    printf("Average: %f\n", average);

    double pi = 3.14159;
    long double precise = 3.141592653589793238;
    printf("Pi: %f, Precise: %Lf\n", pi, precise);

    int numbers[6] = {1,2,3,4,5,6}; // array
    for(int i = 0; i<6; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int oddNumber[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    for(int i = 0; i<10; i++){
        printf("%d ", oddNumber[i]);
    }
    printf("\n");

    // A pointer is a variable which stores memory address of another variable 
    int *ptr = &age; // pointer -> store memory adress 
    printf("Memory address of age: %p\n", &age);

    // User defined data types 
    struct Student {
        char firstName[50];
        char lastName[50];
        char postCode[155];
    };

    struct Student student1 ={"Abdur Rahim", "Sujon", "WHATEVER"};
    printf("Student1: %s %s %s \n", student1.firstName, student1.lastName, student1.postCode);
    
    struct DOB{
        int day;
        int month;
        int year;
    };

    struct DOB dateOfBirth = {23, 02, 1992};
    printf("Date of birth: %d/%d/%d\n", dateOfBirth.day, dateOfBirth.month, dateOfBirth.year);

    // shares memory for members use when need one type at a time
    union Data{
        int i;
        float f;
    };
    union Data data={2};
    printf("Union data: %d\n", data.i);
    union Data data2={.f = 5.5}; // specify which member to use 
    printf("Union float: %f\n", data2.f); 


    // enumeration 
    /*
      enum (enumeration) creates named integer constants for better readability 
      enum auto assign value of index from 0 

    */
    enum Color {RED, GREEN, BLUE, BLACK, ORANGE};
    enum Color myFav = BLACK;
    printf("My favourite color: %d\n", myFav);

    // enum use cases
    // 1. Status code
    enum Status {SUCCESS, FAILED, PENDING};
    enum Status result = PENDING;
    printf("Result status: %d\n", result);

    // 2. Days of week 
    enum Day {MON, TUE, WED, THU, FRI, SAT, SUN};                                                                                                                                    
    enum Day today = FRI; 

    // 3. Menu option                                                                                                                                                                                   
    enum Menu {ADD = 1, DELETE, UPDATE, EXIT}; 

    //Custom values:                                                                                                                                                                                                                                                                                                                                                 
    enum Color2 {RED1 = 5, GREEN1 = 10, BLUE1 = 15};                                                                                                                                     
    printf("%d\n", RED1);  // Prints: 5  

    // Special type (no type/value) void function peform actions and doesn't return values 
    void printMessage(){
        printf("Hello");
    }

    // size_t - unsigned integer for sizes (from stddef.h) always positive
    // sizeof(int) returns how many bytes an int uses (4 initially)
    // variable length stores tha bytes size 
    // size_t is a data type for an unsigned integer type 
    size_t length = sizeof(int) * 10;
    printf("Size of int 10 = %zu bytes\n", length);


    // _Bool boolean type 
    bool isValid = true;
    bool isActive = false;
    printf("%d\n", isValid);
    if(isValid){
        printf("true\n");
    }
   
    return 0;
}