//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIScrollView;
@protocol NTESNBALHorizontalPageBaseViewDataSource;

@interface NTESNBALHorizontalPageBaseView : UIView <UIScrollViewDelegate>
{
    Class _viewCls;
    UIScrollView *_scrollView;
    NSMutableArray *_reusePool;
    id <NTESNBALHorizontalPageBaseViewDataSource> _delegate;
    NSMutableArray *_visiableViewsArr;
    unsigned long long _numOfPages;
    long long _currentIndex;
}

@property long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) unsigned long long numOfPages; // @synthesize numOfPages=_numOfPages;
@property(retain) NSMutableArray *visiableViewsArr; // @synthesize visiableViewsArr=_visiableViewsArr;
@property(nonatomic) __weak id <NTESNBALHorizontalPageBaseViewDataSource> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *reusePool; // @synthesize reusePool=_reusePool;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)setBounds:(struct CGRect)arg1;
- (id)getReuseViewFromDelegate;
- (id)dequeueReuseableView;
- (id)getViewFromDataSourceAtIndex:(long long)arg1;
- (void)insertViewAtIndex:(long long)arg1;
- (void)putVisiableViewForReuse:(id)arg1;
- (unsigned long long)getPageCountFromDataSource;
- (void)suitCurrentIndexWithTarget:(struct CGPoint)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)reloadDataAtIndex:(long long)arg1;
- (void)reloadData;
- (void)registerReuseView:(Class)arg1;
- (void)commonSetUp;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

