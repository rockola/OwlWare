#ifndef __OWL_H__
#define __OWL_H__

#include <inttypes.h>
#include "ProgramVector.h"

#ifdef __cplusplus
 extern "C" {
#endif

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#ifndef min
#define min(a,b) ((a)<(b)?(a):(b))
#endif /* min */
#ifndef max
#define max(a,b) ((a)>(b)?(a):(b))
#endif /* max */
#ifndef abs
#define abs(x) ((x)>0?(x):-(x))
#endif /* abs */

   void audioCallback(int16_t *src, int16_t *dst);
   void setButton(uint8_t bid, uint16_t state);
   void setParameter(uint8_t pid, int16_t value);
   int16_t getParameterValue(uint8_t index);
   void setup(); // main OWL setup

#ifdef __cplusplus
}
   void updateProgramVector(ProgramVector*);
#endif

#endif // __OWL_H__
