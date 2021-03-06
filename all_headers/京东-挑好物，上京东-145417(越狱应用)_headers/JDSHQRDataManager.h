//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol JDSHQRDataManagerDelegate;

@interface JDSHQRDataManager : NSObject
{
    id <JDSHQRDataManagerDelegate> _delegate;
    long long _downloadingTasksCount;
}

+ (void)p_fetchDataWithFinished:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (id)p_requestSetupModel;
+ (id)p_sharedRequest;
+ (id)sharedQrDataManager;
@property(nonatomic) long long downloadingTasksCount; // @synthesize downloadingTasksCount=_downloadingTasksCount;
@property(nonatomic) __weak id <JDSHQRDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)p_process3d:(id)arg1;
- (void)p_processHongdian:(id)arg1;
- (void)p_processLayout:(id)arg1;
- (void)p_processServerData:(id)arg1;
- (void)refresh;
- (void)p_cleanCache:(id)arg1;
- (void)p_bgEvent:(id)arg1;
- (void)pzgRedDotDidAppear:(long long)arg1;
- (void)arRedDotDidAppear:(long long)arg1;
- (void)saoyisaoRedDotDidAppear:(long long)arg1;

@end

