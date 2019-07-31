#ifndef bool_h
#define bool_h

typedef typeof(0 == 0) bool;
const bool static true = 0 == 0;
const bool static false = 0 != 0;

#endif /* bool_h */
