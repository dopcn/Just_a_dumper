//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCLoadMoreTableView.h"

@interface NMScrollableLoadMoreTableView : MCLoadMoreTableView
{
    double _placeHolderHeight;
    struct CGPoint _syncContentOffset;
}

+ (struct UIEdgeInsets)edgeInsetWithTabShown:(_Bool)arg1;
@property(nonatomic) double placeHolderHeight; // @synthesize placeHolderHeight=_placeHolderHeight;
@property(nonatomic) struct CGPoint syncContentOffset; // @synthesize syncContentOffset=_syncContentOffset;
@property(readonly, nonatomic) struct CGPoint maximumSyncContentOffset;
- (_Bool)willScrollToContentInsetTopEdge:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)updateViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 showTabBar:(_Bool)arg3;

@end

