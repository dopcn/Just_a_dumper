//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VRoundedV.h"

@class UIButton, UILabel, UIView;

@interface VMsgV : VRoundedV
{
    struct CGPoint showCenter;
    struct CGPoint hideCenter;
    UIView *bottomToolbar;
    UIButton *confirmButton;
    struct CGPoint bottomBarShowCenter;
    struct CGPoint bottomBarHideCenter;
    UILabel *msgV;
    _Bool showBottomToolbar;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)destroy;
- (void)innerShowWithMsg:(id)arg1;
- (void)showInView:(id)arg1 attrMsg:(id)arg2;
- (void)showInView:(id)arg1 msg:(id)arg2;
- (void)showInMainViewWithMsg:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

