//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "YDWordBookXmlParseDelegate-Protocol.h"

@class NSMutableData, NSString, NSURL, NSURLConnection;
@protocol YDSyncDelegate;

@interface YDWordBookSync : NSObject <YDWordBookXmlParseDelegate>
{
    _Bool _isConnecting;
    id <YDSyncDelegate> _delegate;
    NSURLConnection *_connection;
    NSURL *_requestUrl;
    NSMutableData *_receivedData;
}

@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(retain, nonatomic) NSURL *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) __weak id <YDSyncDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool isConnecting; // @synthesize isConnecting=_isConnecting;
- (void).cxx_destruct;
- (void)syncError:(id)arg1;
- (void)syncConnectErrorTimeout:(_Bool)arg1;
- (void)syncConnectError;
- (void)syncServerIsFull;
- (void)syncServerError;
- (void)syncXmlError;
- (void)syncLoginError;
- (void)syncUpdateFirst;
- (void)commitActionList:(id)arg1;
- (void)commitTotalActionCount:(unsigned long long)arg1;
- (void)syncDone;
- (void)syncStart;
- (void)reSync;
- (void)updateTimestamp:(id)arg1 andRemTimestamp:(id)arg2;
- (void)parseDone:(id)arg1;
- (void)parseFailed;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (id)formatXmlWithAddList:(id)arg1 andDelList:(id)arg2 andTs:(id)arg3 andRemTs:(id)arg4;
- (id)encodeString:(id)arg1;
- (void)requestSyncWithData:(id)arg1;
- (void)startSyncWithAddList:(id)arg1 andDelList:(id)arg2 andTs:(id)arg3 andRemTs:(id)arg4 andUrl:(id)arg5 andDelegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

