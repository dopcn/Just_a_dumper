//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class PPao_ActivityIndicatorView, PPao_CircleProgessView, UILabel;

@interface PPao_CameraHUD : UIView
{
    UIView *_bgView;
    UIView *_toastView;
    UILabel *_messageLabel;
    UIView *_loadingView;
    PPao_ActivityIndicatorView *_indicatorView;
    PPao_CircleProgessView *_progressView;
    _Bool _isProgressing;
}

+ (void)dismissInView:(id)arg1;
+ (void)dismiss;
+ (void)showProgressWithErrorMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;
+ (void)showProgressWithFinishMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;
+ (void)showProgressWithMessage:(id)arg1 progress:(double)arg2;
+ (void)showWithLoadingMessage:(id)arg1 inView:(id)arg2;
+ (void)showAutoHUDWithMessage:(id)arg1 inView:(id)arg2;
+ (void)showWithMessage:(id)arg1 inView:(id)arg2;
+ (id)__HUDWithFrame:(struct CGRect)arg1 style:(long long)arg2;
- (void).cxx_destruct;
- (void)__dismiss;
- (void)dismissProgressViewWithHandle:(CDUnknownBlockType)arg1;
- (void)showProgressWithErrorMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)showProgressWithFinishMessage:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)showProgressWithMessage:(id)arg1 progress:(double)arg2;
- (void)showWithLoadingMessage:(id)arg1;
- (void)showWithMessage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

