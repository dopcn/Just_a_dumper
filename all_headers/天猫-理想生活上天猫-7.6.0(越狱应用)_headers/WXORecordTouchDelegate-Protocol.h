//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UITouch, WXORecordTouchView;

@protocol WXORecordTouchDelegate <NSObject>
- (void)touchCancelled:(WXORecordTouchView *)arg1 touch:(UITouch *)arg2;
- (void)touchEnded:(WXORecordTouchView *)arg1 touch:(UITouch *)arg2;
- (void)touchBegan:(WXORecordTouchView *)arg1 touch:(UITouch *)arg2;
- (_Bool)shouldBeganTouch:(WXORecordTouchView *)arg1;
@end

