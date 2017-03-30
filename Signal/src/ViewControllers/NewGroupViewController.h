//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import "TSGroupModel.h"
#import "TSGroupThread.h"
#import <UIKit/UIKit.h>

@interface NewGroupViewController : UIViewController <UITableViewDelegate,
                                        UITabBarDelegate,
                                        UIImagePickerControllerDelegate,
                                        UINavigationControllerDelegate,
                                        UITextFieldDelegate>

- (void)configWithThread:(TSGroupThread *)thread;
@property (nonatomic, strong) IBOutlet UITableView *tableView;
@property (nonatomic, strong) IBOutlet UITextField *nameGroupTextField;
@property (nonatomic, strong) IBOutlet UIButton *groupImageButton;
@property (nonatomic, strong) IBOutlet UIView *tapToDismissView;
@property (nonatomic, strong) IBOutlet UILabel *addPeopleLabel;
@property (nonatomic, strong) UIImage *groupImage;
@property (nonatomic, strong) TSGroupModel *groupModel;

@end
