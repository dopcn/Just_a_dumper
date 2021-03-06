//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AHBaseServiceDelegate-Protocol.h"
#import "MCPagingDataInterface-Protocol.h"
#import "MCPullUpdateInterface-Protocol.h"

@class MCHisCarFriendService, NSString;

@interface MCHisCarFriendCirclesDataSource : NSObject <MCPullUpdateInterface, AHBaseServiceDelegate, MCPagingDataInterface>
{
    long long _userid;
    CDUnknownBlockType _result;
    MCHisCarFriendService *_carFriendService;
}

@property(retain, nonatomic) MCHisCarFriendService *carFriendService; // @synthesize carFriendService=_carFriendService;
@property(copy, nonatomic) CDUnknownBlockType result; // @synthesize result=_result;
@property(nonatomic) long long userid; // @synthesize userid=_userid;
- (void).cxx_destruct;
- (void)loadFirstPageDataWithBlock:(CDUnknownBlockType)arg1;
- (void)netServiceError:(long long)arg1 errorCode:(long long)arg2 errorMessage:(id)arg3 netServiceObj:(id)arg4;
- (void)netServiceFinished:(long long)arg1 netServiceObj:(id)arg2;
- (long long)getCurrentDataIndex;
- (id)getAllData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

