//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import "TSGroupModel.h"
#import "TSGroupThread.h"
#import <UIKit/UIKit.h>

@interface ShowGroupMembersViewController : UITableViewController <UITableViewDelegate,
                                                UITabBarDelegate,
                                                UIImagePickerControllerDelegate,
                                                UINavigationControllerDelegate,
                                                UITextFieldDelegate>

- (void)configWithThread:(TSGroupThread *)thread;

@end
