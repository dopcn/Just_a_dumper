//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, TBARScanView;

@protocol TBARScanViewDelegate <NSObject>

@optional
- (void)scanView:(TBARScanView *)arg1 videoDidFind:(NSString *)arg2;
- (void)scanView:(TBARScanView *)arg1 targetDidFind:(NSString *)arg2;
- (void)scanView:(TBARScanView *)arg1 qrCodeDidFind:(NSString *)arg2;
@end

