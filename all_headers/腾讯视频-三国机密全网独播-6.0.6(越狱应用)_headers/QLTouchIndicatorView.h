//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, NSTimer, QLExpandableButtonV2, UIColor, UILabel, UIPanGestureRecognizer, UIScrollView;
@protocol QLTouchIndicatorViewDataSource, QLTouchIndicatorViewDelegate;

@interface QLTouchIndicatorView : UIView <UIScrollViewDelegate>
{
    double _beginPointY;
    double _scrollViewOffsetBeginY;
    _Bool _fixFlag;
    UIColor *_normalIndicatorColor;
    UIColor *_selectedIndicatorColor;
    double _minIndicatorHeight;
    double _maxIndicatorHeight;
    double _indicatorWidth;
    UIPanGestureRecognizer *_gesture;
    double _indicatorViewHeightFactor;
    _Bool _needShowTipView;
    id <QLTouchIndicatorViewDataSource> _dataSource;
    id <QLTouchIndicatorViewDelegate> _delegate;
    QLExpandableButtonV2 *_indicatorView;
    UIView *_tipsView;
    UILabel *_contentLabel;
    NSTimer *_checkClickTimer;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSTimer *checkClickTimer; // @synthesize checkClickTimer=_checkClickTimer;
@property(nonatomic) _Bool needShowTipView; // @synthesize needShowTipView=_needShowTipView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) QLExpandableButtonV2 *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak id <QLTouchIndicatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <QLTouchIndicatorViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)refreshIndicatorViewWhenScrolling;
- (void)adjustIndicatorViewSize;
- (void)adjustIndicatorViewOrigin;
- (void)initialTouchIndicatorUI;
- (void)reloadData;
- (void)touchAction:(id)arg1;
- (void)touchUp:(id)arg1;
- (void)touchDown:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initialViewConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

