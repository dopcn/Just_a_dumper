//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ACAttentionBaseModel, UIView;

@protocol ACAttentionBaseDelegate <NSObject>
- (void)updateInterstedData:(ACAttentionBaseModel *)arg1 replaceModel:(ACAttentionBaseModel *)arg2 uid:(long long)arg3 attentionState:(long long)arg4 selectIndex:(long long)arg5;
- (void)interestedHeaderViewDidSelected:(long long)arg1 model:(ACAttentionBaseModel *)arg2;
- (void)interestedViewDidSelected:(long long)arg1 attentionState:(long long)arg2;
- (void)activityViewDidSelected:(long long)arg1 data:(ACAttentionBaseModel *)arg2;
- (void)focusViewDidSelected:(long long)arg1 data:(ACAttentionBaseModel *)arg2;
- (void)footerViewDidReply:(ACAttentionBaseModel *)arg1;
- (void)footerViewLikeAction:(long long)arg1 data:(ACAttentionBaseModel *)arg2;
- (void)centerViewDidVideo:(ACAttentionBaseModel *)arg1 baseView:(UIView *)arg2;
- (void)centerViewMultiplePicCardImgAnchor:(long long)arg1 selecetData:(ACAttentionBaseModel *)arg2;
- (void)headerViewDidMoreView:(long long)arg1 data:(ACAttentionBaseModel *)arg2;
- (void)headerViewDidHeadPortrait:(ACAttentionBaseModel *)arg1;
@end

