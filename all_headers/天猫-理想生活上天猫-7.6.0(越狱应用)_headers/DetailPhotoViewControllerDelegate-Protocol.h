//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class DetailPhotoViewController, UIImage;

@protocol DetailPhotoViewControllerDelegate <NSObject>
- (struct CGRect)photoViewControllerDelegateAnimateFrame:(DetailPhotoViewController *)arg1;
- (UIImage *)photoViewControllerDelegateAnimateImage:(DetailPhotoViewController *)arg1;

@optional
- (UIImage *)photoViewControllerDelegateAnimateImage:(DetailPhotoViewController *)arg1 index:(long long)arg2;
- (void)photoViewController:(DetailPhotoViewController *)arg1 movedToIndex:(long long)arg2;
@end

