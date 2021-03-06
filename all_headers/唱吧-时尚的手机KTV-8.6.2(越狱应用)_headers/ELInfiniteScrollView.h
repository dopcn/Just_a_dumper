//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class ELLiveListScrollView, NSMutableArray, NSString, UIViewController;
@protocol ELInfiniteScrollViewDataSource, ELInfiniteScrollViewDelegate;

@interface ELInfiniteScrollView : UIView <UIScrollViewDelegate>
{
    _Bool _scrollEnable;
    _Bool _needForwardLayout;
    _Bool _needBackwardLayout;
    unsigned long long _showIndex;
    double _viewGap;
    unsigned long long _style;
    unsigned long long _direction;
    id <ELInfiniteScrollViewDataSource> _dataSource;
    id <ELInfiniteScrollViewDelegate> _delegate;
    UIViewController *_containerViewController;
    ELLiveListScrollView *_scrollViewContainer;
    NSMutableArray *_contentViews;
    NSMutableArray *_contentViewControllers;
}

@property(retain, nonatomic) NSMutableArray *contentViewControllers; // @synthesize contentViewControllers=_contentViewControllers;
@property(retain, nonatomic) NSMutableArray *contentViews; // @synthesize contentViews=_contentViews;
@property(retain, nonatomic) ELLiveListScrollView *scrollViewContainer; // @synthesize scrollViewContainer=_scrollViewContainer;
@property(nonatomic) _Bool needBackwardLayout; // @synthesize needBackwardLayout=_needBackwardLayout;
@property(nonatomic) _Bool needForwardLayout; // @synthesize needForwardLayout=_needForwardLayout;
@property(nonatomic) __weak UIViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <ELInfiniteScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <ELInfiniteScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) double viewGap; // @synthesize viewGap=_viewGap;
@property(nonatomic) unsigned long long showIndex; // @synthesize showIndex=_showIndex;
@property(nonatomic) _Bool scrollEnable; // @synthesize scrollEnable=_scrollEnable;
- (void).cxx_destruct;
- (void)enumerateContentViewControllers:(CDUnknownBlockType)arg1;
- (void)enumerateContentViews:(CDUnknownBlockType)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)cleanContentView;
- (void)contentViewDidFinishLayout;
- (void)layoutWithContentOffsetUpdate;
- (void)reloadDataWithIndex:(unsigned long long)arg1;
- (void)reloadData;
- (void)showWithIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (unsigned long long)updateDataSourceIndexWithShowIndex:(unsigned long long)arg1;
- (double)scrollViewPadding;
- (void)updateScrollViewContainerFrame;
- (id)initWithFrame:(struct CGRect)arg1 viewGap:(double)arg2 style:(unsigned long long)arg3 direction:(unsigned long long)arg4 dataSource:(id)arg5 delegate:(id)arg6;
- (void)_commonSetup;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

