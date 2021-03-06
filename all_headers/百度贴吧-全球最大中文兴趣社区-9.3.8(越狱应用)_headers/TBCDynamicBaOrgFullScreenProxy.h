//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCFullScreenProxy.h"

@class UIView;

@interface TBCDynamicBaOrgFullScreenProxy : TBCFullScreenProxy
{
    UIView *_fakeNavigationBar;
    double _originalFakeNavigationBarTop;
    UIView *_bottomFreshView;
    double _originalBottomFreshViewTop;
    UIView *_dynamicBaOrgNavigationBarCover;
}

@property(retain, nonatomic) UIView *dynamicBaOrgNavigationBarCover; // @synthesize dynamicBaOrgNavigationBarCover=_dynamicBaOrgNavigationBarCover;
@property(nonatomic) double originalBottomFreshViewTop; // @synthesize originalBottomFreshViewTop=_originalBottomFreshViewTop;
@property(nonatomic) __weak UIView *bottomFreshView; // @synthesize bottomFreshView=_bottomFreshView;
@property(nonatomic) double originalFakeNavigationBarTop; // @synthesize originalFakeNavigationBarTop=_originalFakeNavigationBarTop;
@property(nonatomic) __weak UIView *fakeNavigationBar; // @synthesize fakeNavigationBar=_fakeNavigationBar;
- (void).cxx_destruct;
- (double)navigationBarMoveMaxDistance;
- (void)resetUIWithShouldResetNavigationBar:(_Bool)arg1;
- (void)layoutUI:(double)arg1;
- (void)resetNavigationBarCover;
- (void)resetToolBarUI;
- (id)initWithScrollView:(id)arg1 withFakeNavigationBar:(id)arg2 withBottomFreshView:(id)arg3;

@end

