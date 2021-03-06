//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QCloudBizHTTPRequest.h"

@class NSString, QCloudDeleteInfo;

@interface QCloudDeleteMultipleObjectRequest : QCloudBizHTTPRequest
{
    NSString *_bucket;
    QCloudDeleteInfo *_deleteObjects;
}

@property(retain, nonatomic) QCloudDeleteInfo *deleteObjects; // @synthesize deleteObjects=_deleteObjects;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;
- (id)signatureFields;
- (void)setFinishBlock:(CDUnknownBlockType)arg1;
- (_Bool)buildRequestData:(id *)arg1;
- (void)configureReuqestSerializer:(id)arg1 responseSerializer:(id)arg2;
- (id)init;
- (void)dealloc;

@end

