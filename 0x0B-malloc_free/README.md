# General

- ## What is the difference between automatic and dynamic allocation

  ### Dynamic memory allocation

  Is memory allocated at runtime using `calloc()`, `malloc()` and friends. It is sometimes also referred to as ‘heap’ memory, although it has nothing to do with the heap data-structure [ref](http://www.quora.com/Why-is-dynamic-memory-allocation-called-heap-memory-allocation).

  ```
  int * a = malloc(sizeof(int));
  ```

  Heap memory is persistent until `free()` is called. In other words, you control the lifetime of the variable.

  ### Automatic memory allocation

  This is what is commonly known as ‘stack’ memory, and is allocated when you enter a new scope (usually when a new function is pushed on the call stack). Once you move out of the scope, the values of automatic memory addresses are undefined, and it is an [error to access them](http://stackoverflow.com/a/6445794/140264).

  ```
  int a = 43;
  ```

  Note that scope does not necessarily mean function. Scopes can nest within a function, and the variable will be in-scope only within the block in which it was declared. Note also that where this memory is allocated is not specified. (On a *sane* system it will be on the stack, or registers for optimisation)



- ## What is `malloc` and `free` and how to use them

  ## malloc()

  **“memory allocation”** method is used to dynamically allocate a single large block of memory with the specified size. **It returns a pointer of type void which can be cast into a pointer of any form***.

  - How many bytes will this statement allocate?

    ```c
    malloc(sizeof(int) * 4) // this statment will allocate 16 bytes
    ```

  - How many bytes will this statement allocate?

    ```c
    malloc(sizeof(unsigned int) * 2) // this statment will allocate 8 bytes
    ```

  - How many bytes will this statement allocate?

    ```c
    malloc(sizeof(char) * 10) // this statment will allocate 10 bytes
    ```

  - How many bytes will this statement allocate?

    ```c
    malloc(10) // this statment will allocate 10 bytes
    ```

  - How many bytes will this statement allocate?

    ```c
    malloc((sizeof(char) * 10) + 1) // this statment will allocate 11 bytes
    ```



  # Syntax:

  Pay attention line 3 and 8.

  ```c
  ptr = (cast-type*) malloc(byte-size)
    // or this // alternative way to write syntax
  ptr = malloc(sizeof(cast-type) * byte-size)

  For Example:
  ptr = (int*) malloc(100 * sizeof(int));
      // or this // alternative way to write syntax
  ptr = malloc(sizeof(int) * 100);

  Since the size of int is 4 bytes,
  this statement will allocate 400 bytes of memory.
  And, the pointer ptr holds the address
  of the first byte in the allocated memory.
  ```

  ![malloc-function-in-c](https://imgur.com/GniVHRm.png)

  ## Example:

  ```c
  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {

    // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i, sum = 0;

    // Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);

    // Dynamically allocate memory using malloc()
    ptr = (int*) malloc(n * sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if(ptr == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
    }
    else{

      // Memory has been successfully allocated
      printf("Memory successfully allocated using malloc.\n");

      // Get the elements of the array
      for(i = 0; i < n; ++i) {
        ptr[i] = i + 1;
      }

      // Print the elements of the array
      printf("The elements of the array are: ");
      for(i = 0; i < n; ++i) {
        printf("%d, ", ptr[i]);
      }
    }

    return 0;
  }
  ```

  ### OUTPUT:

  ```c
  Enter number of elements: 5
  Memory successfully allocated using malloc.
  The elements of the array are: 1, 2, 3, 4, 5,
  ```

  # free()

  **“free”** method is used to dynamically **de-allocate** the memory. The memory allocated using functions malloc() and calloc() are not de-allocated on their own. Hence the free() method is used, whenever the dynamic memory allocation takes place. It helps to reduce wastage of memory by freeing it.

  ```c
  free(ptr);
  ```

  ![free-malloc](https://i.imgur.com/QwJo0Iw.png)

  ## Example:

  ```c
  #include <stdio.h>
  #include <stdlib.h>

  int main()
  {

	// This pointer will hold the
  	// base address of the block created
  	int *ptr, *ptr1;
  	int n, i, sum = 0;

	// Get the number of elements for the array
	n = 5;
  	printf("Enter number of elements: %d\n", n);

	// Dynamically allocate memory using malloc()
  	ptr = (int*)malloc(n * sizeof(int));

	// Dynamically allocate memory using calloc()
  	ptr1 = (int*)calloc(n, sizeof(int));

	// Check if the memory has been successfully
  	// allocated by malloc or not
  	if (ptr == NULL || ptr1 == NULL) {
  	   printf("Memory not allocated.\n");
  	   		  exit(0);
  			  }
  			  else {

		// Memory has been successfully allocated
  		   printf("Memory successfully allocated using malloc.\n");

		// Free the memory
  		   free(ptr);
  		   	      printf("Malloc Memory successfully freed.\n");

		// Memory has been successfully allocated
  		   printf("\nMemory successfully allocated using calloc.\n");

		// Free the memory
  		   free(ptr1);
  		   	       printf("Calloc Memory successfully freed.\n");
  			       }

	return 0;
  }
  ```

  ## OUTPUT:

  ```
  Enter number of elements: 5
  Memory successfully allocated using malloc.
  Malloc Memory successfully freed.

  Memory successfully allocated using calloc.
  Calloc Memory successfully freed.
  ```

- ## Why and when use `malloc`

- ## How to use `valgrind` to check for memory leak

  Make sure Valgrind is installed.

  ```bash
  sudo apt-get install valgrind
  ```