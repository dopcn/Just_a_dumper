//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMPTMBrandBaseRequest.h"

@class NSString;

@interface SNMPTMDeleteFavoriteRequest : SNMPTMBrandBaseRequest
{
    NSString *_brandId;
    long long _returnCode;
}

@property(nonatomic) long long returnCode; // @synthesize returnCode=_returnCode;
@property(copy, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
- (void).cxx_destruct;
- (void)requestDidFailed;
- (long long)requestMethod;
- (void)requestDidCompleted;
- (id)requestArgument;
- (id)requestUrl;
- (id)initWithSuccess:(CDUnknownBlockType)arg1 fail:(CDUnknownBlockType)arg2;

@end

