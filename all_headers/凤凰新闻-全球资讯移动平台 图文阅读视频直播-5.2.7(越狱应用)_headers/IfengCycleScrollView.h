//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView;
@protocol CycleScrollViewDatasource;

@interface IfengCycleScrollView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    long long _totalPages;
    NSMutableArray *_curViews;
    long long _curPage;
    id <CycleScrollViewDatasource> _datasource;
}

@property(nonatomic, setter=setDataource:) id <CycleScrollViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) long long curPage; // @synthesize curPage=_curPage;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setViewContent:(id)arg1 atIndex:(long long)arg2;
- (long long)validPageValue:(long long)arg1;
- (void)getDisplayImagesWithCurpage:(long long)arg1;
- (void)loadData;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

