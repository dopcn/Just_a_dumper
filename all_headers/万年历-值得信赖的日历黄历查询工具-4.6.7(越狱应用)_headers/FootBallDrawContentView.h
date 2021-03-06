//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YLCustomDrawView.h"

@class NSArray, NSMutableArray, NSString;
@protocol FootBallDrawContentViewDelegate;

@interface FootBallDrawContentView : YLCustomDrawView
{
    NSMutableArray *_attentionRects;
    NSMutableArray *_itemRects;
    NSArray *_matchesAry;
    NSString *_pid;
}

@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
@property(retain, nonatomic) NSArray *matchesAry; // @synthesize matchesAry=_matchesAry;
@property(retain, nonatomic) NSMutableArray *itemRects; // @synthesize itemRects=_itemRects;
@property(retain, nonatomic) NSMutableArray *attentionRects; // @synthesize attentionRects=_attentionRects;
- (void).cxx_destruct;
- (void)touchAtLocation:(struct CGPoint)arg1;
- (id)refreshTitle;
- (_Bool)hasBottomLine;
- (_Bool)hasRefreshButton;
- (void)update;
- (void)drawWithContext:(struct CGContext *)arg1 size:(struct CGSize)arg2 isCanceled:(CDUnknownBlockType)arg3;

// Remaining properties
@property(nonatomic) __weak id <FootBallDrawContentViewDelegate> delegate;

@end

