#ifndef bool_h
#define bool_h

#if !defined(__cplusplus)

typedef typeof(0 == 0) bool;
const bool static true = 0 == 0;
const bool static false = 0 != 0;

#endif

#endif /* bool_h */
