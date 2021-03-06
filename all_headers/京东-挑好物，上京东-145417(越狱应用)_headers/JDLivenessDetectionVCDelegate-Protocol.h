//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDLivenessDetectionVC, NSData, NSString;

@protocol JDLivenessDetectionVCDelegate <NSObject>

@optional
- (void)livenessViewDidDisappear:(JDLivenessDetectionVC *)arg1;
- (void)livenessViewWillDisappear:(JDLivenessDetectionVC *)arg1;
- (void)livenessViewDidAppear:(JDLivenessDetectionVC *)arg1;
- (void)livenessViewWillAppear:(JDLivenessDetectionVC *)arg1;
- (void)livenessDetectInterrupt;
- (void)livenessDetectCancel;
- (void)livenessDetectFailed;
- (void)livenessDetectSuccess:(NSData *)arg1 imgEncryp:(NSString *)arg2 keyEncryp:(NSString *)arg3;
- (void)livenessDetectWillBeginWithAtcion:(int)arg1;
- (void)livenessDetectResultCode:(int)arg1;
- (void)noCameraPermissions;
@end

