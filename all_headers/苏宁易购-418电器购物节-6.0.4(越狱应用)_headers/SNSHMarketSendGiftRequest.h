//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNSHHomeBaseRequest.h"

@class NSString;

@interface SNSHMarketSendGiftRequest : SNSHHomeBaseRequest
{
    CDUnknownBlockType _succBlock;
    CDUnknownBlockType _failBlock;
    NSString *_uuid;
    NSString *_imageCode;
    NSString *_smsCode;
}

@property(copy, nonatomic) NSString *smsCode; // @synthesize smsCode=_smsCode;
@property(copy, nonatomic) NSString *imageCode; // @synthesize imageCode=_imageCode;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType succBlock; // @synthesize succBlock=_succBlock;
- (void).cxx_destruct;
- (void)parseResponseData:(id)arg1;
- (void)requestDidCompleted;
- (void)requestDidFailed;
- (long long)requestMethod;
- (id)requestArgument;
- (id)requestUrl;
- (void)sendGiftWithUuid:(id)arg1 imageCode:(id)arg2 smsCode:(id)arg3 succBlock:(CDUnknownBlockType)arg4 failBlock:(CDUnknownBlockType)arg5;

@end

