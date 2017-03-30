//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LockInteractionController : NSObject

typedef void (^LIControllerCompletionBlock)();
typedef BOOL (^LIControllerBlockingOperation)();
typedef void (^LIControllerRetryBlock)(
    LIControllerBlockingOperation operationBlock, LIControllerCompletionBlock completionBlock);

+ (void)performBlock:(LIControllerBlockingOperation)blockingOperation
     completionBlock:(LIControllerCompletionBlock)completionBlock
          retryBlock:(LIControllerRetryBlock)retryBlock
         usesNetwork:(BOOL)networkFlag;

+ (LIControllerRetryBlock)defaultNetworkRetry;

@end
