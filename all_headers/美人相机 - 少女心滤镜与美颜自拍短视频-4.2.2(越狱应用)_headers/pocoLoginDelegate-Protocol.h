//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol pocoLoginDelegate <NSObject>

@optional
- (void)PressedOtherLogin;
- (void)pressedCancel;
- (void)pressedSure;
- (void)pressedregister;
- (void)pressedQzome;
- (void)pressedWX;
- (void)pressedSina;
- (void)pocoReg:(NSArray *)arg1;
- (void)pressedLogin:(NSArray *)arg1;
@end

