//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NBDataResponseDelegate-Protocol.h"
#import "NBSourceFetcherProtocol-Protocol.h"

@class NBDataRequestObject, NSString;
@protocol NBSourceFetcherDelegate;

@interface NBSMSourceURLFetcher : NSObject <NBDataResponseDelegate, NBSourceFetcherProtocol>
{
    id <NBSourceFetcherDelegate> _delegate;
    NBDataRequestObject *_requestObj;
}

@property(retain, nonatomic) NBDataRequestObject *requestObj; // @synthesize requestObj=_requestObj;
@property(nonatomic) id <NBSourceFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onAddErrorStatisticsForRequest:(id)arg1;
- (void)onFaildWithRequest:(id)arg1;
- (void)onFinishedWithRequest:(id)arg1;
- (void)onFailedOnMainThread:(id)arg1;
- (void)onFinishedOnMainThread:(id)arg1;
- (void)onFailedNotifyWithRequest:(id)arg1;
- (void)onFinishedNotifyWithRequest:(id)arg1;
- (void)cancelRequest;
- (void)sendRequstToFetchSourceWithChapterItemProtocol:(id)arg1 withBookName:(id)arg2 withAuthor:(id)arg3 delegate:(id)arg4;
- (void)releaseRequest;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

