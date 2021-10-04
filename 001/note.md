# Chapter 1: Accustoming Yourself to C++

## View C++ as a federation of language
//last line of this chap
## Prefer consts, enums, and inlines to #defines

Suppose a definition below:
```cpp
#define ASPECT_RATIO 1.653 //always using uppercase letter
```
This symbol maynot be stored by the compiler, when there's a compile error, you could have seen an error oriented to 1.653 rather than ASPECT_RATIO.
 
Good to use
```cpp
const double AspectRatio = 1.653;
```

For me, macro is good to be a trigger for some situation, rather than define a const value. For example, I could define different functions for one declaration, for different platform and compiler will help me to fit it on.
```cpp
class A{
public:
    void fA();
}
#ifdef ANDROID
void A::fA(){
    ...
}
#else
void A::fA(){
    ...
}
#endif
``` 
## Use const whenever possible

### Bitwise Constness and Logical Constness

## Make sure that objects are initialized before they're used

