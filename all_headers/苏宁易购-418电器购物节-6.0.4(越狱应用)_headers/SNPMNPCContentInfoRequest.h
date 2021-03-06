//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMNPCHTTPRequest.h"

@class NSString;
@protocol SNPMNPCContentInfoRequestDelegate;

@interface SNPMNPCContentInfoRequest : SNPMNPCHTTPRequest
{
    id <SNPMNPCContentInfoRequestDelegate> _contentInfoDelegate;
    long long _batch;
    NSString *_contentIDs;
}

@property(retain, nonatomic) NSString *contentIDs; // @synthesize contentIDs=_contentIDs;
@property(nonatomic) long long batch; // @synthesize batch=_batch;
@property(nonatomic) __weak id <SNPMNPCContentInfoRequestDelegate> contentInfoDelegate; // @synthesize contentInfoDelegate=_contentInfoDelegate;
- (void).cxx_destruct;
- (void)requestDidFailed;
- (void)requestDidCompleted;
- (id)requestUrl;
- (void)queryContentInfo:(id)arg1;

@end

