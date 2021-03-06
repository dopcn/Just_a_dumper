//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, UIButton, UIImageView, UIView;

@interface WBUserGuideView : NSObject
{
    UIImageView *_guideImageView;
    UIButton *_hiddenBtn;
    UIView *_maskView;
    NSTimer *deadTimer;
}

+ (void)showTipImageWithIMGFileName:(id)arg1 frame:(struct CGRect)arg2 message:(id)arg3 time:(long long)arg4;
+ (void)showTipImageWithIMGFileName:(id)arg1 button:(id)arg2 message:(id)arg3 time:(long long)arg4;
+ (void)showUserGuideImageWithIMGFileName:(id)arg1 time:(long long)arg2;
+ (void)showUserGuideImageWithIMGFileName:(id)arg1 withImgFrame:(struct CGRect)arg2;
+ (void)showUserGuideImageWithIMGFileName:(id)arg1;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NSTimer *deadTimer; // @synthesize deadTimer;
@property(retain, nonatomic) UIButton *hiddenBtn; // @synthesize hiddenBtn=_hiddenBtn;
@property(retain, nonatomic) UIImageView *guideImageView; // @synthesize guideImageView=_guideImageView;
- (void).cxx_destruct;
- (void)closeUserGuide:(id)arg1;
- (id)initWithIMGFileName:(id)arg1 withImgFrame:(struct CGRect)arg2;
- (id)initWithIMGFileName:(id)arg1;
- (id)init;

@end

