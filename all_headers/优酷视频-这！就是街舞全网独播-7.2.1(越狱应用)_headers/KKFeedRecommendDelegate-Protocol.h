//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KKFeedRecommendModel, UITableViewCell;

@protocol KKFeedRecommendDelegate <NSObject>
- (void)upBtnClick:(_Bool)arg1 feedmodel:(KKFeedRecommendModel *)arg2;
- (void)shareBtnClick:(KKFeedRecommendModel *)arg1;
- (void)collectBtnClick:(KKFeedRecommendModel *)arg1 inCell:(UITableViewCell *)arg2;
- (void)didClickSpaceRect:(KKFeedRecommendModel *)arg1;
- (void)didClikUnLikeAction:(KKFeedRecommendModel *)arg1;
- (void)jumpToUserSpace:(KKFeedRecommendModel *)arg1;
- (void)moreActionClick:(KKFeedRecommendModel *)arg1;
- (void)openShowInDetail:(KKFeedRecommendModel *)arg1;
- (void)openVideoInDetail:(KKFeedRecommendModel *)arg1;
- (void)playVideoWithVid:(KKFeedRecommendModel *)arg1 inCell:(UITableViewCell *)arg2 animated:(_Bool)arg3;
@end

