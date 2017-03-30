//
//  Copyright (c) 2017 Open Whisper Systems. All rights reserved.
//

#import "OWSQRCodeScanningViewController.h"

NS_ASSUME_NONNULL_BEGIN

@class TSThread;
@class OWSFingerprint;
@class OWSConversationSettingsTableViewController;

@interface FingerprintViewController : UIViewController <OWSQRScannerDelegate>

@property (nullable) OWSConversationSettingsTableViewController *dismissDelegate;

- (void)configureWithThread:(TSThread *)thread
                fingerprint:(OWSFingerprint *)fingerprint
                contactName:(NSString *)contactName;

- (void)controller:(OWSQRCodeScanningViewController *)controller didDetectQRCodeWithData:(NSData *)data;

@end

NS_ASSUME_NONNULL_END
