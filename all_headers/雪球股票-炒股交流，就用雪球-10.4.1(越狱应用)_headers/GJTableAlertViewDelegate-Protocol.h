//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GJTableAlertView;

@protocol GJTableAlertViewDelegate <NSObject>

@optional
- (void)alertViewDidClickTitleImageButton:(GJTableAlertView *)arg1;
- (void)alertViewDidClickConfirmButton:(GJTableAlertView *)arg1;
- (void)alertViewDidClickCancelButton:(GJTableAlertView *)arg1;
- (void)tableAlertView:(GJTableAlertView *)arg1 didConfirmWithItemAtRow:(long long)arg2;
@end

