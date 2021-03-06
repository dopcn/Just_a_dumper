//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MDCameraViewController, MDSnapChatItem, UIImage;

@protocol MDCameraViewControllerDelegate <NSObject>
- (void)cameraFinish:(UIImage *)arg1 snapItem:(MDSnapChatItem *)arg2;
- (void)cameraFinish:(UIImage *)arg1;
- (void)shouldPresentToPhoto:(MDCameraViewController *)arg1;

@optional
- (_Bool)canPickedPhotoUseFilter;
- (void)cameraDidCancel;
@end

