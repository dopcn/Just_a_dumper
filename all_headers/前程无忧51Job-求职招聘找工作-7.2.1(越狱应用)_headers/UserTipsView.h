//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, UIButton, UIPageControl, UIScrollView;

@interface UserTipsView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIPageControl *_pageControl;
    UIButton *_jumpButton;
}

+ (id)tipsView;
@property(retain, nonatomic) UIButton *jumpButton; // @synthesize jumpButton=_jumpButton;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)didChangeCurrentIndex:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)appendButtonForImageView:(id)arg1 atIndex:(long long)arg2;
- (void)setTipImageView:(id)arg1 atIndex:(long long)arg2;
- (void)p_layoutSubView:(struct CGRect)arg1;
- (void)removeTipsView;
- (void)showNavTips;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

