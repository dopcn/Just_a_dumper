//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface SNNotificationCenter : NSObject
{
}

+ (void)showActivityTitle:(id)arg1 detail:(id)arg2 hideAfter:(long long)arg3;
+ (void)showNoWifiTitle:(id)arg1 detail:(id)arg2 hideAfter:(long long)arg3;
+ (void)showActivityWithDetail:(id)arg1 action:(id)arg2 userInfo:(id)arg3 hideAfter:(long long)arg4;
+ (void)showMessageWithAction:(id)arg1;
+ (void)showMessage:(id)arg1 action:(id)arg2 userInfo:(id)arg3 hideAfter:(long long)arg4;
+ (void)showActivityForFullScreenWSMVVideoPlayerWithDetail:(id)arg1 action:(id)arg2 userInfo:(id)arg3 hideAfter:(long long)arg4;
+ (void)showMessageForFullScreenWSVideoPlayerWithAction:(id)arg1;
+ (void)showMessageForFullScreenWSVideoPlayer:(id)arg1 action:(id)arg2 userInfo:(id)arg3 hideAfter:(long long)arg4;
+ (void)hideMessageImmediatelyForFullScreenWSVideoPlayer;
+ (void)showMessageForFullScreenWSVideoPlayer:(id)arg1;
+ (void)hideMessage;
+ (void)showMessage:(id)arg1 atPos:(struct CGPoint)arg2 arrowXPosition:(double)arg3 hideAfter:(long long)arg4;
+ (void)showMessage:(id)arg1 atPos:(struct CGPoint)arg2 hideAfter:(long long)arg3;
+ (void)showMessageAtBottom:(id)arg1 hideAfter:(long long)arg2;
+ (void)showMessageAboveKeyboard:(id)arg1;
+ (void)showExclamation:(id)arg1;
+ (void)showExclamationTitle:(id)arg1 detail:(id)arg2;
+ (void)hideLoading;
+ (void)hideLoadingAndBlock;
+ (void)showLoadingAndBlockOtherActions:(id)arg1;
+ (void)showLoading:(id)arg1;
+ (void)showMessageTitle:(id)arg1 detail:(id)arg2 hideAfter:(long long)arg3;
+ (void)showMessage:(id)arg1 hideAfter:(long long)arg2;
+ (void)showMessageTitle:(id)arg1 detail:(id)arg2;
+ (void)showMessage:(id)arg1;

@end

