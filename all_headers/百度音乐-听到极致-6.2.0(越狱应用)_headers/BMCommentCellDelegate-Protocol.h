//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BMComment, NSString;

@protocol BMCommentCellDelegate <NSObject>
- (void)commentCellDidClickLink:(NSString *)arg1;
- (void)commentCellDidClickComment:(BMComment *)arg1;
- (void)commentCellDidClickLike:(BMComment *)arg1;
- (void)commentCellDidClickAvatar:(BMComment *)arg1;
@end

