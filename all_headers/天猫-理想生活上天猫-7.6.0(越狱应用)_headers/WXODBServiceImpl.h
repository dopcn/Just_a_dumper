//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYWDBService-Protocol.h"
#import "YWServiceImplProtocol-Protocol.h"

@class NSString, YWIMCore;

@interface WXODBServiceImpl : NSObject <YWServiceImplProtocol, IYWDBService>
{
    YWIMCore *_coreRef;
}

@property(nonatomic) __weak YWIMCore *coreRef; // @synthesize coreRef=_coreRef;
- (void).cxx_destruct;
- (void)resetContextForCurrentThread;
- (void)performBatchOperationBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performReadonlyBlock:(CDUnknownBlockType)arg1;
- (id)initWithModularRef:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

