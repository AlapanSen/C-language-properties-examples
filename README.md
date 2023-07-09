# C-language-properties-examples
C language properties explained with coded examples,clone it and run the program in vss or view in github.Thank You

  <<<<<--------DIFFERENT PROPERTIES------->>>>>  
  1)MALLOC-----
  In the C programming language, malloc is a function that stands for "memory allocation." It is used to dynamically allocate memory during runtime, allowing programs to request memory of a specific size from the operating system's heap. The allocated memory can then be used to store data as needed.

The malloc function is defined in the <stdlib.h> header file and has the following prototype:
void* malloc(size_t size);

The size parameter specifies the number of bytes of memory to be allocated. The return value of malloc is a pointer to the allocated memory block, or NULL if the allocation fails.The malloc.c is an example
