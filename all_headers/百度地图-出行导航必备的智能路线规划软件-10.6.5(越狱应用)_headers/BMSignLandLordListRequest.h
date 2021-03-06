//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "BMNetworkHTTPDelegate-Protocol.h"

@class BMNRANetworkTask, NSString;

@interface BMSignLandLordListRequest : NSObject <BMNetworkHTTPDelegate>
{
    BMNRANetworkTask *_requestTask;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) BMNRANetworkTask *requestTask; // @synthesize requestTask=_requestTask;
- (void).cxx_destruct;
- (void)fail:(id)arg1 error:(id)arg2;
- (void)success:(id)arg1 data:(id)arg2;
- (void)cancelRequest;
- (void)requestLandLordListWithNum:(long long)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

