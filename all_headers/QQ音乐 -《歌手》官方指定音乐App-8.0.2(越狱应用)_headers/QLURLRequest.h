//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTURLRequest.h"

@class NSString;
@protocol TTURLRequestDelegate;

@interface QLURLRequest : TTURLRequest
{
    id <TTURLRequestDelegate> _delegate;
    struct timeval startTime;
    _Bool _enableAutoRetry;
    int _modelID;
    int requestTimes;
    int ztid;
    NSString *backUpHost;
}

+ (id)requestWithURL:(id)arg1 delegate:(id)arg2;
@property(nonatomic) _Bool enableAutoRetry; // @synthesize enableAutoRetry=_enableAutoRetry;
@property(nonatomic) int ztid; // @synthesize ztid;
@property(nonatomic) id <TTURLRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property int requestTimes; // @synthesize requestTimes;
@property(retain, nonatomic) NSString *backUpHost; // @synthesize backUpHost;
@property int modelID; // @synthesize modelID=_modelID;
- (_Bool)addRecordAndCheck:(_Bool)arg1;
- (void)request:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)requestDidFinishLoad:(id)arg1;
- (void)requestDidStartLoad:(id)arg1;
- (void)requestDidCancelLoad:(id)arg1;
- (void)request:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)requestDidUploadData:(id)arg1;
- (long long)showtmpDuration;
- (id)makeBackUpUrl:(id)arg1;
- (long long)getTimeLengthWithStartTime:(struct timeval)arg1 endTime:(struct timeval)arg2;
- (_Bool)retryRequest:(int)arg1;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (void)cancel;
- (void)dealloc;

@end

