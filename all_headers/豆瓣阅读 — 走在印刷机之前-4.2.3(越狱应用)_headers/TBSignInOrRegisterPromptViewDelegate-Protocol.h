//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class TBSignInOrRegisterPromptView, UIButton, UIEvent;

@protocol TBSignInOrRegisterPromptViewDelegate <NSObject>

@optional
- (void)signInOrRegisterPromptView:(TBSignInOrRegisterPromptView *)arg1 didClickSignInAnonymouslyButton:(UIButton *)arg2 withEvent:(UIEvent *)arg3;
- (void)signInOrRegisterPromptView:(TBSignInOrRegisterPromptView *)arg1 didClickSignInViaSinaWeiboButton:(UIButton *)arg2 withEvent:(UIEvent *)arg3;
- (void)signInOrRegisterPromptView:(TBSignInOrRegisterPromptView *)arg1 didClickSignInViaWeChatButton:(UIButton *)arg2 withEvent:(UIEvent *)arg3;
- (void)signInOrRegisterPromptView:(TBSignInOrRegisterPromptView *)arg1 didClickRegisterButton:(UIButton *)arg2 withEvent:(UIEvent *)arg3;
- (void)signInOrRegisterPromptView:(TBSignInOrRegisterPromptView *)arg1 didClickSignInButton:(UIButton *)arg2 withEvent:(UIEvent *)arg3;
@end

