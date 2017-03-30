//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import "Contact.h"
#import "InboxTableViewCell.h"
#import "TSGroupModel.h"
#import <UIKit/UIKit.h>

@interface SignalsViewController
    : UIViewController <UITableViewDelegate, UITableViewDataSource, UIViewControllerPreviewingDelegate>

@property (nonatomic, retain) IBOutlet UITableView *tableView;
@property (nonatomic, strong) IBOutlet UILabel *emptyBoxLabel;
@property (nonatomic) BOOL newlyRegisteredUser;

- (void)presentThread:(TSThread *)thread keyboardOnViewAppearing:(BOOL)keyboardOnViewAppearing;
- (NSNumber *)updateInboxCountLabel;
- (void)composeNew;

@end
