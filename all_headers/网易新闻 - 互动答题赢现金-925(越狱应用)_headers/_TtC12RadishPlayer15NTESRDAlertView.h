//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC12RadishPlayer14NTESRDBaseView.h"

@interface _TtC12RadishPlayer15NTESRDAlertView : _TtC12RadishPlayer14NTESRDBaseView
{
    // Error parsing type: , name: contentView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: contentLabel
    // Error parsing type: , name: makeSureBtn
    // Error parsing type: , name: cancelBtn
    // Error parsing type: , name: dismissBlock
    // Error parsing type: , name: closeBtn
}

+ (void)clearAllAlerts;
+ (id)normalWindow;
- (CDUnknownBlockType).cxx_destruct;
- (void)overrideShow:(id)arg1;
- (void)show:(id)arg1;
- (void)overrideShow;
- (void)show;
- (void)didClick:(id)arg1;
- (void)showCloseBtn:(_Bool)arg1;
- (void)initUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initTitleAndMessage:(id)arg1 message:(id)arg2;
- (void)initCancelBtn:(id)arg1;
- (void)initMakeSureBtn:(id)arg1;
- (void)initMakeSureAndCancelBtn:(id)arg1 cancelTitle:(id)arg2;
- (void)fixTitleAndContent:(id)arg1 content:(id)arg2;
- (id)initWithTitle:(id)arg1 message:(id)arg2 makeSureButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 dismissAlertViewBlock:(CDUnknownBlockType)arg5;

@end

