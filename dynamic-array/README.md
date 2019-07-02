## Dynamic Array
A C++ implementation of a dynamic array data structure.
### Class Data Members
```a_capacity```: current maximum capacity of array.  
```a_data```: pointer to contiguous block of array memory.  
```a_length```: number of occupied elements in array.
### Class Member Functions
```capacity```: returns current maximum capacity of array.  
```clear```: removes all elements from array.  
```empty```: returns whether the array has no elements.  
```expand```: doubles the maximum capacity of array.  
```fill```: replaces all elements with given data.  
```get```: returns element at given index.  
```index```: returns index of given element.  
```length```: returns number of occupied elements in array.  
```pop```: returns and removes element at end of array.  
```print```: prints indexes and values of array.  
```push```: inserts element at end of array.  
```set```: replaces element at given index.  
```shrink```: halves the maximum capacity of array.
### Compile and Link
From a terminal, type:
```shell
make
```
### Execute
For Unix, type:
```
./bin/dynamic-array
```
For Windows, type:
```
"bin/dynamic-array"
```
