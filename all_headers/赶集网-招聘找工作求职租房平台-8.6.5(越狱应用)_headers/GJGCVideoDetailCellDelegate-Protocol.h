//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GJGCGossipModel, GJGCVideoDetailCell, NSString;

@protocol GJGCVideoDetailCellDelegate <NSObject>
- (void)videoDetailCell:(GJGCVideoDetailCell *)arg1 didTapAttributedTagWithId:(NSString *)arg2 tagTitle:(NSString *)arg3;
- (_Bool)videoCanPlay;
- (void)videoDetialCell:(GJGCVideoDetailCell *)arg1 didPlayVideo:(GJGCGossipModel *)arg2;
- (void)videoDetialCell:(GJGCVideoDetailCell *)arg1 jumpToPostUserPage:(GJGCGossipModel *)arg2;
- (void)videoDetailCell:(GJGCVideoDetailCell *)arg1 gotoActivityNativePage:(GJGCGossipModel *)arg2;
- (void)videoDetailCell:(GJGCVideoDetailCell *)arg1 gotoActivityH5Page:(NSString *)arg2;
- (void)videoDetailCell:(GJGCVideoDetailCell *)arg1 didPraiseVideoPost:(GJGCGossipModel *)arg2;
- (void)videoDetailCell:(GJGCVideoDetailCell *)arg1 didTapAttributedCompanyWithId:(NSString *)arg2;
@end

