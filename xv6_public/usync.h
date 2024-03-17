#include "spinlock.h"
typedef struct {
  uint locked;       
  struct spinlock lk;
} mutex;
