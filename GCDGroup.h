//
//  GCDGroup.h
//  GCD
//
//

#import <Foundation/Foundation.h>

@interface GCDGroup : NSObject

@property (strong, nonatomic, readonly) dispatch_group_t dispatchGroup;

#pragma mark - 初始化以及释放
- (instancetype)init;

#pragma mark - 用法
- (void)enter;
- (void)leave;
- (void)wait;
- (BOOL)wait:(int64_t)delta;

@end
