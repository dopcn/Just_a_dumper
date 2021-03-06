//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIScrollView;

@interface GJSHSVPullToRefreshView : UIView
{
    _Bool _showsPullToRefresh;
    _Bool _wasTriggeredByUser;
    _Bool _showsDateLabel;
    _Bool _isObserving;
    CDUnknownBlockType pullToRefreshActionHandler;
    unsigned long long _state;
    UIScrollView *_scrollView;
    unsigned long long _position;
    double _originalTopInset;
    double _originalBottomInset;
}

@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) _Bool showsDateLabel; // @synthesize showsDateLabel=_showsDateLabel;
@property(nonatomic) _Bool wasTriggeredByUser; // @synthesize wasTriggeredByUser=_wasTriggeredByUser;
@property(nonatomic) double originalBottomInset; // @synthesize originalBottomInset=_originalBottomInset;
@property(nonatomic) double originalTopInset; // @synthesize originalTopInset=_originalTopInset;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) _Bool showsPullToRefresh; // @synthesize showsPullToRefresh=_showsPullToRefresh;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType pullToRefreshActionHandler; // @synthesize pullToRefreshActionHandler;
- (void).cxx_destruct;
- (void)stopAnimatingNOAnimate;
- (void)stopAnimating;
- (void)startAnimating;
- (void)triggerRefresh;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setScrollViewContentInsetForLoading;
- (void)resetScrollViewContentInset;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

