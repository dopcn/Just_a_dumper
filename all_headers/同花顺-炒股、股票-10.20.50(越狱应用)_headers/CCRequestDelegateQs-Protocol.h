//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CCRequestQs, SDKStuffBaseModel;

@protocol CCRequestDelegateQs <NSObject>
- (void)request:(CCRequestQs *)arg1 finishedWithData:(struct CEQStuffBaseStruct *)arg2;

@optional
- (void)request:(CCRequestQs *)arg1 finishedWithSDKCData:(struct CEQStuffBaseStruct *)arg2;
- (void)request:(CCRequestQs *)arg1 finishedWithSDKData:(SDKStuffBaseModel *)arg2;
@end

