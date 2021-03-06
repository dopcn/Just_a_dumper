//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IYYTVRecordProtocol-Protocol.h"
#import "TinyVideoProtocol-Protocol.h"

@interface TinyVideoImp : NSObject <TinyVideoProtocol, IYYTVRecordProtocol>
{
}

- (void)checkTinyVideoAvailabilityWithResid:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isWatchingTinyVideo;
- (_Bool)isRecordingTinyVideo;
- (void)toggleWatchPageLogboard:(_Bool)arg1;
- (void)requestConfigWithFinishedBlock:(CDUnknownBlockType)arg1;
- (void)checkAndRecordBasketballPKWithParam:(id)arg1;
- (void)tryRecordBasketballPKWithParam:(id)arg1;
- (void)recordBasketballPKWithOpponentUid:(unsigned long long)arg1 score:(long long)arg2 comboCount:(long long)arg3 resId:(long long)arg4 videoUrl:(id)arg5 snapshotUrl:(id)arg6;
- (void)basketballPKGameShareWithNick:(id)arg1 cover:(id)arg2 score:(int)arg3 vsNick:(id)arg4 vsCover:(id)arg5 vsScore:(int)arg6 currentController:(id)arg7;
- (void)basketballGameShareWithNick:(id)arg1 score:(int)arg2 defeatStar:(id)arg3 coverUrl:(id)arg4 currentController:(id)arg5;
- (void)basketballGameShareWithNick:(id)arg1 score:(int)arg2 coverUrl:(id)arg3 defeatRate:(int)arg4 ranking:(int)arg5 currentController:(id)arg6;
- (void)showCorrectPlayPageInNavigationController:(id)arg1 tinyVideoData:(id)arg2;
- (void)clearTinyVideoCache;
- (void)startTinyVideoRecordWithTopic:(id)arg1 recordType:(int)arg2 entrance:(unsigned long long)arg3;
- (void)removeTinyVideoCaches;
- (id)getYYVODPlayerLoadingView;
- (id)getYYVODPlayer:(id)arg1 autoPlay:(_Bool)arg2 appId:(id)arg3 uid:(unsigned long long)arg4;
- (void)getShenquHotTag:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)shareWithShenquDetailInfo:(id)arg1 fromViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)userVideoListViewControllerWithUserID:(unsigned long long)arg1 title:(id)arg2;
- (id)communityContainerController;
- (id)shenquViewControllerWithUserID:(unsigned long long)arg1;
- (id)normalFooterView;
- (id)instantiateTinyVideoNavigationController;

@end

