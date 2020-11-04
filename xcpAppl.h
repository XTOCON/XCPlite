/* xcpAppl.h */


#ifndef __XCP_H_ 
#define __XCP_H_

#include "xcpLite.h"

extern volatile vuint32 gClock;
extern volatile vuint64 gClock64;

extern void ApplXcpClockInit(void);
extern vuint32 ApplXcpGetClock(void);
extern vuint64 ApplXcpGetClock64(void);


#endif
