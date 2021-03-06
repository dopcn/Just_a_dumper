//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIButton;
@protocol IBizToolViewDelegate;

@protocol IBizToolViewProtocol <NSObject>
@property(nonatomic) id <IBizToolViewDelegate> delegate;
- (void)updateBtnState:(UIButton *)arg1 btnID:(long long)arg2 btnState:(int)arg3;
- (void)setBtnState:(int)arg1 btnID:(long long)arg2 animate:(_Bool)arg3;
- (void)hiddenBtn:(long long)arg1 hidden:(_Bool)arg2;
- (void)updateBtn:(long long)arg1 enable:(_Bool)arg2;

@optional
- (void)showBackButtonBadgeNumber:(_Bool)arg1;
@end

