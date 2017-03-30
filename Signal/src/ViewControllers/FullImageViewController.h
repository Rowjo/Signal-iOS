//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import "OWSMessageData.h"
#import "TSAttachmentStream.h"
#import "TSInteraction.h"
#import <UIKit/UIKit.h>

@interface FullImageViewController : UIViewController

- (instancetype)initWithAttachment:(TSAttachmentStream *)attachment
                          fromRect:(CGRect)rect
                    forInteraction:(TSInteraction *)interaction
                       messageItem:(id<OWSMessageData>)messageItem
                        isAnimated:(BOOL)animated;

- (void)presentFromViewController:(UIViewController *)viewController;

@end
