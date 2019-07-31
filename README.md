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
### Why Not C99 _Bool
C99 defines `_Bool` as boolean in C, but it's opaque and hard to understand.

---
### Compiler Compatiblity
LLVM Clang 7.0 seems to works as expect, other should also work.
