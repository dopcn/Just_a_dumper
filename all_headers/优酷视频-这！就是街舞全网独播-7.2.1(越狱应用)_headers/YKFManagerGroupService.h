//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class YKFCommunityManagerGroupServiceBatchAppointManagerAPI, YKFCommunityManagerGroupServiceGetManagerGroupListAPI, YKFCommunityManagerGroupServiceRecallManagerAPI, YKFCommunityManagerGroupServiceRetireManagerAPI;

@interface YKFManagerGroupService : NSObject
{
    YKFCommunityManagerGroupServiceGetManagerGroupListAPI *_groupListApi;
    YKFCommunityManagerGroupServiceRecallManagerAPI *_recallApi;
    YKFCommunityManagerGroupServiceBatchAppointManagerAPI *_batchApi;
    YKFCommunityManagerGroupServiceRetireManagerAPI *_retireApi;
}

@property(retain, nonatomic) YKFCommunityManagerGroupServiceRetireManagerAPI *retireApi; // @synthesize retireApi=_retireApi;
@property(retain, nonatomic) YKFCommunityManagerGroupServiceBatchAppointManagerAPI *batchApi; // @synthesize batchApi=_batchApi;
@property(retain, nonatomic) YKFCommunityManagerGroupServiceRecallManagerAPI *recallApi; // @synthesize recallApi=_recallApi;
@property(retain, nonatomic) YKFCommunityManagerGroupServiceGetManagerGroupListAPI *groupListApi; // @synthesize groupListApi=_groupListApi;
- (void).cxx_destruct;
- (void)retireFunctionGroupManagerWithFandomId:(long long)arg1 managerGroupId:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (void)batchAddFunctionGroupManagerWithFandomId:(long long)arg1 managerGroupId:(long long)arg2 appointIDs:(id)arg3 complete:(CDUnknownBlockType)arg4;
- (void)recallFunctionGroupManagerWithFandomId:(long long)arg1 managerGroupId:(long long)arg2 recallId:(long long)arg3 complete:(CDUnknownBlockType)arg4;
- (void)fetchFunctionGroupListWithFandomId:(long long)arg1 complete:(CDUnknownBlockType)arg2;

@end

