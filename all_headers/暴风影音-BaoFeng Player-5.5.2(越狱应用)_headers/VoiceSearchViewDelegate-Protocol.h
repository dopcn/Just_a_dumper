//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, VoiceSearchInfo;

@protocol VoiceSearchViewDelegate <NSObject>
- (void)praiseViewBtnClick:(int)arg1 voiceSearchInfo:(VoiceSearchInfo *)arg2;
- (void)xfWriteViewBeginSearchWith:(NSString *)arg1;
- (void)showMoreWith:(VoiceSearchInfo *)arg1;
- (void)changeOneWith:(VoiceSearchInfo *)arg1;
- (void)gotoStarHomeViewController:(VoiceSearchInfo *)arg1;
- (void)gotoDetailViewController:(VoiceSearchInfo *)arg1 albumId:(NSString *)arg2 pageUrl:(NSString *)arg3;
- (void)searchRecommendWorld:(NSString *)arg1;
- (void)cancelInputBtnBtnClick;
- (void)mInputBtnClick;
- (void)goBack;
@end

