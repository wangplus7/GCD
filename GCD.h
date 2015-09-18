//
//  GCD.h
//  GCD
//

#import "GCDQueue.h"
#import "GCDGroup.h"
#import "GCDSemaphore.h"
#import "GCDTimer.h"


#define  GCD_EXAMPLE  0
#ifndef GCDExecuteOnce
#define GCDExecuteOnce(block) {static dispatch_once_t predicate = 0; dispatch_once(&predicate, block);}
#endif


#if GCD_EXAMPLE

GCDExecuteOnce(^{
    // code here.
});

#endif

