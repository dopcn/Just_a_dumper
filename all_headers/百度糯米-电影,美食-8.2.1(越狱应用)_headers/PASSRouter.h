//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PASSRouter : NSObject
{
}

+ (void)openQRCodeLoginWithURLString:(id)arg1 rootVC:(id)arg2;
+ (void)openLivenessWithURLString:(id)arg1 rootVC:(id)arg2;
+ (void)openAppealWithURLString:(id)arg1 rootVC:(id)arg2 presentLoginVCHandler:(CDUnknownBlockType)arg3;
+ (void)handleQRCodeContent:(id)arg1 rootVC:(id)arg2 presentLoginVCHandler:(CDUnknownBlockType)arg3;
+ (_Bool)canHandleQRCodeContent:(id)arg1;

@end

