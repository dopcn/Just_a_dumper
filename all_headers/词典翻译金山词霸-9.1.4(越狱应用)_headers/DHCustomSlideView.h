//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "DHSlideTabbarDelegate-Protocol.h"
#import "DHSlideViewDataSource-Protocol.h"
#import "DHSlideViewDelegate-Protocol.h"

@class DHSlideView, NSString, UIViewController;
@protocol DHCacheProtocol, DHCustomSlideViewDelegate, DHSlideTabbarProtocol;

@interface DHCustomSlideView : UIView <DHSlideTabbarDelegate, DHSlideViewDelegate, DHSlideViewDataSource>
{
    float _tabbarBottomSpacing;
    id <DHCustomSlideViewDelegate> _delegate;
    UIViewController *_baseViewController;
    long long _selectedIndex;
    UIView<DHSlideTabbarProtocol> *_tabbarView;
    id <DHCacheProtocol> _cache;
    long long _maxCacheNumber;
    DHSlideView *_slideView;
}

@property(retain, nonatomic) DHSlideView *slideView; // @synthesize slideView=_slideView;
@property(nonatomic) long long maxCacheNumber; // @synthesize maxCacheNumber=_maxCacheNumber;
@property(retain, nonatomic) id <DHCacheProtocol> cache; // @synthesize cache=_cache;
@property(nonatomic) float tabbarBottomSpacing; // @synthesize tabbarBottomSpacing=_tabbarBottomSpacing;
@property(retain, nonatomic) UIView<DHSlideTabbarProtocol> *tabbarView; // @synthesize tabbarView=_tabbarView;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak UIViewController *baseViewController; // @synthesize baseViewController=_baseViewController;
@property(nonatomic) __weak id <DHCustomSlideViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)DHSlideView:(id)arg1 cancelIndex:(long long)arg2;
- (void)DHSlideView:(id)arg1 didSelectIndex:(long long)arg2;
- (void)DHSlideView:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 percent:(float)arg4;
- (id)DHSlideView:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (long long)numberOfControllersInDHSlideView:(id)arg1;
- (void)DHSlideTabbar:(id)arg1 selectAtIndex:(long long)arg2;
- (void)readloadCustomView;
- (void)layoutBarAndSlide;
- (void)layoutSubviews;
- (void)setup;
- (void)setSlideViewBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

