//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSVideoRecordActionsController, NSString;

@protocol KSVideoRecordActionsControllerDelegate <NSObject>
- (NSString *)backgroundMusicPathForVideoRecordActionsController:(KSVideoRecordActionsController *)arg1;
- (_Bool)needCountDownAnimationForVideoRecordActionsController:(KSVideoRecordActionsController *)arg1;
- (void)prepareForCapturingFromVideoRecordActionsController:(KSVideoRecordActionsController *)arg1 completion:(void (^)(_Bool))arg2;
- (long long)deviceOrientationForVideoRecordActionsController:(KSVideoRecordActionsController *)arg1;
- (struct CGSize)videoSizeForVideoRecordActionsController:(KSVideoRecordActionsController *)arg1;
- (NSString *)videoOutputPathForVideoRecordActionsController:(KSVideoRecordActionsController *)arg1;

@optional
- (_Bool)shouldBeginCapture;
@end

