//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "KTVHCDataFileSourceDelegate-Protocol.h"
#import "KTVHCDataNetworkSourceDelegate-Protocol.h"

@class KTVHCDataNetworkSource, KTVHCDataSourceQueue, NSError, NSString;
@protocol KTVHCDataSourceProtocol, KTVHCDataSourcerDelegate, OS_dispatch_queue;

@interface KTVHCDataSourcer : NSObject <KTVHCDataFileSourceDelegate, KTVHCDataNetworkSourceDelegate>
{
    _Bool _didClose;
    _Bool _didFinishPrepare;
    _Bool _didFinishRead;
    _Bool _didCallPrepare;
    id <KTVHCDataSourcerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSError *_error;
    id <KTVHCDataSourceProtocol> _currentSource;
    KTVHCDataNetworkSource *_currentNetworkSource;
    KTVHCDataSourceQueue *_sourceQueue;
}

+ (id)sourcerWithDelegate:(id)arg1 delegateQueue:(id)arg2;
@property(retain, nonatomic) KTVHCDataSourceQueue *sourceQueue; // @synthesize sourceQueue=_sourceQueue;
@property(retain, nonatomic) KTVHCDataNetworkSource *currentNetworkSource; // @synthesize currentNetworkSource=_currentNetworkSource;
@property(retain, nonatomic) id <KTVHCDataSourceProtocol> currentSource; // @synthesize currentSource=_currentSource;
@property(nonatomic) _Bool didCallPrepare; // @synthesize didCallPrepare=_didCallPrepare;
@property(nonatomic) _Bool didFinishRead; // @synthesize didFinishRead=_didFinishRead;
@property(nonatomic) _Bool didFinishPrepare; // @synthesize didFinishPrepare=_didFinishPrepare;
@property(nonatomic) _Bool didClose; // @synthesize didClose=_didClose;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <KTVHCDataSourcerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)networkSource:(id)arg1 didFailure:(id)arg2;
- (void)networkSourceDidFinishDownload:(id)arg1;
- (void)networkSourceDidFinishPrepare:(id)arg1;
- (void)networkSourceHasAvailableData:(id)arg1;
- (void)fileSourceDidFinishPrepare:(id)arg1;
- (void)callbackForFailure:(id)arg1;
- (void)callbackForFinishPrepare;
- (id)readDataOfLength:(unsigned long long)arg1;
- (void)close;
- (void)prepare;
- (void)sortAndFetchSources;
- (void)putSource:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

