//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class QZPTakePhotoViewController, UIImage;

@protocol QZPTakePhotoViewControllerDelegate <NSObject>
- (void)cancelTakePhoto:(QZPTakePhotoViewController *)arg1;
- (void)finishTakePhoto:(QZPTakePhotoViewController *)arg1 photoImage:(UIImage *)arg2 petScreenShot:(UIImage *)arg3 petRectDividedByMapWidth:(struct CGRect)arg4;
@end

