//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface PLURouteServer : NSObject
{
}

+ (void)registPersonal;
+ (void)registReportVC;
+ (void)registRank;
+ (void)registerServer;
+ (void)changeVideoPlayerVCAtVC:(id)arg1 delegate:(id)arg2 willDismissCallback:(CDUnknownBlockType)arg3 playVideoModel:(id)arg4 videos:(id)arg5;
+ (void)gotoWebView:(id)arg1 title:(id)arg2;
+ (void)changeRoomWithRoomId:(id)arg1 gameId:(id)arg2 isPPRoom:(_Bool)arg3;
+ (void)changeRoomWithRoomId:(id)arg1;
+ (void)changeToSportsRoomWithRoomId:(id)arg1 preUrl:(id)arg2 cover:(id)arg3 autoFeed:(_Bool)arg4 animated:(_Bool)arg5 delegate:(id)arg6;
+ (void)changeListWithGameId:(id)arg1 title:(id)arg2 sortBy:(id)arg3 displayType:(unsigned long long)arg4 listHrefType:(id)arg5 listHrefTarget:(id)arg6;
+ (void)changeRankVC;
+ (void)popCurrentLiveController:(CDUnknownBlockType)arg1;

@end

