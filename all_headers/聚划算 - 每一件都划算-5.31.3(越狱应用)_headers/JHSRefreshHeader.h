//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JHSRefreshComponent.h"

@class NSDate, NSString;

@interface JHSRefreshHeader : JHSRefreshComponent
{
    NSString *_lastUpdatedTimeKey;
    CDUnknownBlockType _hasEndRefreshBlock;
}

+ (id)headerWithRefreshingTarget:(id)arg1 refreshingAction:(SEL)arg2;
+ (id)headerWithRefreshingBlock:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType hasEndRefreshBlock; // @synthesize hasEndRefreshBlock=_hasEndRefreshBlock;
@property(copy, nonatomic) NSString *lastUpdatedTimeKey; // @synthesize lastUpdatedTimeKey=_lastUpdatedTimeKey;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *lastUpdatedTime;
- (void)endRefreshing;
- (void)setState:(int)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;

@end

