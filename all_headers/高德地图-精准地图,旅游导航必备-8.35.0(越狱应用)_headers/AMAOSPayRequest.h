//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMAOSBaseRequest.h"

#import "AMAOSRequestDelegate-Protocol.h"

@class NSString;

@interface AMAOSPayRequest : AMAOSBaseRequest <AMAOSRequestDelegate>
{
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failedBlock;
    long long _tag;
    long long _type;
}

+ (void)doRequest:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
+ (id)doRequestWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
+ (id)getVerifyCodeWithType:(id)arg1 delivery:(id)arg2 relater:(id)arg3;
+ (id)getReportResultWithAmapOrderId:(id)arg1 groupOrderId:(id)arg2 payResult:(id)arg3;
+ (id)getBuySubmitWithMergeId:(id)arg1 srcType:(id)arg2 productId:(id)arg3 amount:(id)arg4 price:(id)arg5;
+ (id)requestForBuyValidateWithMergeId:(id)arg1 srcType:(id)arg2 productId:(id)arg3 group_tcode:(id)arg4 extend:(id)arg5;
+ (id)getBuyValidateWithMergeId:(id)arg1 srcType:(id)arg2 productId:(id)arg3 amount:(id)arg4;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long tag; // @synthesize tag=_tag;
@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
- (void).cxx_destruct;
- (id)initWithParams:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)aosRequestFinished:(id)arg1 response:(id)arg2 dic:(id)arg3;
- (void)aosRequestFinished:(id)arg1 response:(id)arg2;
- (id)decodeJsonRequestData:(id)arg1;
- (id)getRequestVersion;
- (int)getServerType;
- (id)getRelativeUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

