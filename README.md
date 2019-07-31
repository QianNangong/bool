# Bool
Are you still using ugly methods to emulate `bool` in C?
```c
if (0) {
    do_something();
}
```
Now you will have the *TRUE* bool!
```c
if (false) {
    do_something();
}
```
---
### HOWTO
Drag `bool.h` into your project and use it!

---
### Compiler Compatiblity
LLVM Clang 7.0 seems to works as expect, others should also work.
