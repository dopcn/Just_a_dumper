//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FeedReclikeResult, NSMutableArray, NSString;

@protocol RecLikeViewItemClickDelegate <NSObject>
- (void)likeViewUpButtonClick;
- (void)likeViewDownButtonClick;
- (void)likeViewMoreButtonClick;
- (void)likeViewConfirmClick:(NSString *)arg1;
- (void)likeViewChangeTagsButtonClick:(NSMutableArray *)arg1 changsum:(long long)arg2 rowcount:(long long)arg3;
- (void)likeViewCloseButtonClick;
- (void)likeViewButtonItemClickWithIndex:(long long)arg1 selected:(_Bool)arg2 tag:(NSString *)arg3 item:(FeedReclikeResult *)arg4;
@end

