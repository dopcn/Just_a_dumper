//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface PodMissionHallSDK_BTNetworkManager : NSObject
{
    NSMutableDictionary *_taskTable;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *taskTable; // @synthesize taskTable=_taskTable;
- (void).cxx_destruct;
- (id)parametersWithApiManager:(id)arg1 requestParam:(id)arg2 requestUrl:(id)arg3;
- (id)completeUrlWithApiManager:(id)arg1 requestUrl:(id)arg2;
- (id)httpMethodWithApiManager:(id)arg1 extraMethod:(id)arg2;
- (id)urlRequestWithSessionManager:(id)arg1 ApiManager:(id)arg2 extraMethod:(id)arg3 requestUrl:(id)arg4 requestParam:(id)arg5 constructingBlock:(CDUnknownBlockType)arg6;
- (void)cancelAllRequests;
- (void)cancelRequestWithId:(id)arg1;
- (id)downloadRequestWithApiManager:(id)arg1 requestUrl:(id)arg2 requestParam:(id)arg3 destination:(id)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)uploadRequestWithApiManager:(id)arg1 requestUrl:(id)arg2 requestParam:(id)arg3 constructingBlock:(CDUnknownBlockType)arg4 progressBlock:(CDUnknownBlockType)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)dataRequestWithApiManager:(id)arg1 extraMethod:(id)arg2 requestUrl:(id)arg3 requestParam:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)dataRequestWithHttpMethod:(id)arg1 RequestUrl:(id)arg2 requestParam:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

