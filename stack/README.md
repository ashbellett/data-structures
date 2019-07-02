## Stack
A C++ implementation of a stack data structure.
### Class Data Members
```s_capacity```: maximum capacity of stack.  
```s_length```: number of elements in stack.  
```s_data```: pointer to contiguous block of stack memory.
### Class Member Functions
```capacity```: returns maximum capacity of stack.  
```clear```: deletes and initialises new stack.  
```empty```: returns whether the stack has no elements.  
```full```: returns whether the stack capacity has been reached.  
```length```: returns number of elements in stack.  
```peek```: returns element at end of stack.  
```pop```: returns and removes element at end of stack.  
```push```: inserts element at end of stack.
### Compile and Link
From a terminal, type:
```shell
make
```
### Execute
For Unix, type:
```
./bin/stack
```
For Windows, type:
```
"bin/stack"
```
