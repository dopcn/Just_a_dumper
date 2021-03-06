//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, ProcessShareURLResultModel, ShareRuleResultModel, ShareSuccessResultModel;

@interface ShareManagerNewwork : NSObject
{
    ShareRuleResultModel *_shareRuleResultModel;
    ShareSuccessResultModel *_successResultModel;
    ProcessShareURLResultModel *_processShareURLModel;
    JDStoreNetwork *_shareRuleRequest;
    JDStoreNetwork *_successReportRequest;
    JDStoreNetwork *_processShareRequest;
}

@property(retain, nonatomic) JDStoreNetwork *processShareRequest; // @synthesize processShareRequest=_processShareRequest;
@property(retain, nonatomic) JDStoreNetwork *successReportRequest; // @synthesize successReportRequest=_successReportRequest;
@property(retain, nonatomic) JDStoreNetwork *shareRuleRequest; // @synthesize shareRuleRequest=_shareRuleRequest;
@property(retain, nonatomic) ProcessShareURLResultModel *processShareURLModel; // @synthesize processShareURLModel=_processShareURLModel;
@property(retain, nonatomic) ShareSuccessResultModel *successResultModel; // @synthesize successResultModel=_successResultModel;
@property(retain, nonatomic) ShareRuleResultModel *shareRuleResultModel; // @synthesize shareRuleResultModel=_shareRuleResultModel;
- (void).cxx_destruct;
- (void)requestProcessShareURL:(id)arg1 businessType:(id)arg2 shareRuleType:(id)arg3 activityId:(id)arg4 token:(id)arg5 callBack:(CDUnknownBlockType)arg6;
- (void)requestSuccessRequest:(id)arg1 businessID:(id)arg2 activityId:(id)arg3 token:(id)arg4 callBack:(CDUnknownBlockType)arg5;
- (void)requestShareRule:(id)arg1 businessID:(id)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

