//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, PAIMMessageObject, PAIMVideoCardCell, PAIMVideoCardParamModel;

@protocol PAIMVideoCardCellDelegate <NSObject>
- (void)videoCardHandleCellTap:(PAIMVideoCardCell *)arg1 withModel:(PAIMVideoCardParamModel *)arg2;
- (void)videoCardUserHeadClickedWithModel:(PAIMMessageObject *)arg1 withIndex:(NSIndexPath *)arg2 withMessageStyle:(int)arg3;
@end

