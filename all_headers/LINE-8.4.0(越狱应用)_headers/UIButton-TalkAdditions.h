//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface UIButton (TalkAdditions)
+ (void)load;
+ (id)buttonTypeSmallBlueWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeLightGreenWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeBlueWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeWhiteWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeBluegrayWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeNavyWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeDarkgrayWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeRedWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeGreenWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonTypeGrayWithTitle:(id)arg1 font:(id)arg2;
+ (id)listButtonTypeWithTitle:(id)arg1 font:(id)arg2 maxButtonWidth:(double)arg3;
+ (id)listButtonTypeWithTitle:(id)arg1 font:(id)arg2;
+ (id)buttonWithImage:(id)arg1 titleLabel:(id)arg2 buttonWidth:(double)arg3;
+ (id)buttonWithImage:(id)arg1 title:(id)arg2 titleFontSize:(double)arg3 buttonWidth:(double)arg4;
+ (id)buttonWithImage:(id)arg1 title:(id)arg2 titleHorizontalMargin:(double)arg3 fontSize:(double)arg4;
+ (id)buttonWithImage:(id)arg1 title:(id)arg2 titleHorizontalMargin:(double)arg3;
+ (id)buttonWithImage:(id)arg1 title:(id)arg2 titleHorizontalMargin:(double)arg3 maxButtonWidth:(double)arg4;
+ (id)buttonWithImage:(id)arg1 imageLeftCapWidth:(double)arg2 title:(id)arg3 titleHorizontalMargin:(double)arg4 maxButtonWidth:(double)arg5;
+ (id)buttonWithImage:(id)arg1 imageLeftCapWidth:(double)arg2 title:(id)arg3 titleHorizontalMargin:(double)arg4 titleFont:(id)arg5 maxButtonWidth:(double)arg6;
+ (id)titleLabelType3WithText:(id)arg1;
+ (id)titleLabelWithText:(id)arg1 fontSize:(double)arg2;
+ (id)titleLabelWithText:(id)arg1 font:(id)arg2;
- (void)adjustImageAndTitleWithContentDirection:(long long)arg1 spacing:(double)arg2;
- (void)__setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)actionButtonTapped:(id)arg1;
- (void)setActionEventBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)actionEventBlock;
- (void)applyTypeSmallBlue;
- (void)applyTypeLightGreenNew;
- (void)applyTypeLightGreen;
- (void)applyTypeBlue;
- (void)applyTypeWhite;
- (void)applyTypeBluegray;
- (void)applyTypeNavy;
- (void)applyTypeDarkgray;
- (void)applyTypePink;
- (void)applyTypeRed;
- (void)applyTypeGreen;
- (void)applyTypeGray;
- (void)_flipBackgroundImageForState:(unsigned long long)arg1;
- (void)_flipImageForState:(unsigned long long)arg1;
- (void)flipImageIfRTLView;
@property(retain, nonatomic) id nl_userInfo;
@end

