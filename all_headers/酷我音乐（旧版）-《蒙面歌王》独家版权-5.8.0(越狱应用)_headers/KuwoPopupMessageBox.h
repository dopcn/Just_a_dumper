//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PopupView.h"

@class UIButton, UILabel;

@interface KuwoPopupMessageBox : PopupView
{
    UILabel *_label;
    UIButton *_checkBox;
}

+ (_Bool)msgBoxWithTitle:(id)arg1 msg:(id)arg2 leftBtnTitle:(id)arg3 secondBtnTitle:(id)arg4 sipState:(_Bool)arg5 view:(id)arg6 showCloseIcon:(_Bool)arg7;
+ (int)msgBoxWithTitle:(id)arg1 msg:(id)arg2 leftBtnTitle:(id)arg3 otherBtnTitle:(id)arg4 sipState:(_Bool)arg5;
+ (int)msgBoxWithTitle:(id)arg1 msg:(id)arg2 checkMsg:(id)arg3 leftBtnTitle:(id)arg4 secondBtnTitle:(id)arg5 sipState:(_Bool)arg6;
+ (_Bool)msgBoxWithTitle:(id)arg1 msg:(id)arg2 leftBtnTitle:(id)arg3 secondBtnTitle:(id)arg4 sipState:(_Bool)arg5;
@property(retain, nonatomic) UIButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)dealloc;
- (void)onCheckboxTapped:(id)arg1;
- (id)initWithTitle:(id)arg1 msg:(id)arg2 checkMsg:(id)arg3;
- (id)initWithTitle:(id)arg1 msg:(id)arg2;

@end

