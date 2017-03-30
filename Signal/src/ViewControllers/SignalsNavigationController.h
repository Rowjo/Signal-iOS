//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import "TSSocketManager.h"
#import <UIKit/UIKit.h>

@interface SignalsNavigationController : UINavigationController
@property (nonatomic, strong) UIProgressView *socketStatusView;
@property (nonatomic, strong) NSTimer *updateStatusTimer;
@end
