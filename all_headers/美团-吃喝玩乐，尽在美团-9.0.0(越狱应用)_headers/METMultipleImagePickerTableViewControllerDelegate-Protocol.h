//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ALAsset, NSArray, UIViewController;

@protocol METMultipleImagePickerTableViewControllerDelegate <NSObject>
- (void)popViewControllerAction:(_Bool)arg1;
- (void)changeBackButtonForViewController:(UIViewController *)arg1 WithTarget:(id)arg2 action:(SEL)arg3;
- (void)resetSelectedImage;
- (void)removeSelectedImage:(ALAsset *)arg1;
- (void)addSelectedImage:(ALAsset *)arg1;
- (_Bool)imageHasBeenSelectedByDefault:(ALAsset *)arg1;
- (_Bool)imageHasBeenSelected:(ALAsset *)arg1;
- (void)setSelectedImageAssets:(NSArray *)arg1 withCyberShotAction:(_Bool)arg2;
- (void)setSelectedImageAssets:(NSArray *)arg1;
- (_Bool)canSelectImageWithTotalCount:(unsigned long long)arg1 andSelectedCount:(unsigned long long)arg2;
@end

