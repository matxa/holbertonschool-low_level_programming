**0x07. C - Even more pointers, arrays and strings**

 - __Pointer to a pointer__

A pointer to a pointer is a form of multiple indirection, or a chain of pointers.

When we define a pointer to a pointer, the first pointer contains the address of the second pointer, which points to the location that contains the actual value.

- Declaration
To declare a pointer we need to use the syntax (datatype **pointer_to_pointer = &pointer ).
```
   int var = 21;
   int *pointer_to_var = &var;
   int **points_to_the_pointer_of_var = &pointer_to_var;
```
The **pointer_to_the_pointer_of_var contains the address of the *pointer_to_var, which points to the location that contains the actual value(value of var).    