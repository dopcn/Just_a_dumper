//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseMapComponentView.h"

#import "CAAnimationDelegate-Protocol.h"
#import "NMGolfPoiItemViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NMLink, NSString, UIImageView, UIScrollView;
@protocol NMGolfMapTipsViewDataSource, NMGolfMapTipsViewDelegate;

@interface NMGolfMapTipsView : NMBaseMapComponentView <CAAnimationDelegate, UIScrollViewDelegate, NMGolfPoiItemViewDelegate>
{
    UIImageView *_backgroundView;
    UIScrollView *_bgScrollView;
    long long _curPageNum;
    long long _pageCount;
    NMLink *_headView;
    id <NMGolfMapTipsViewDelegate> _nmDelegate;
    id <NMGolfMapTipsViewDataSource> _nmDatasource;
}

@property(nonatomic) __weak id <NMGolfMapTipsViewDataSource> nmDatasource; // @synthesize nmDatasource=_nmDatasource;
@property(nonatomic) __weak id <NMGolfMapTipsViewDelegate> nmDelegate; // @synthesize nmDelegate=_nmDelegate;
- (void).cxx_destruct;
- (void)touchAction:(id)arg1;
- (void)tapAction:(id)arg1;
- (void)btnnaviActionDelegate;
- (void)btnrouteActionDelegate;
- (void)btnaroundActionDelegate;
- (void)btndetailActionDelegate;
- (void)dealloc;
- (void)goToBackView;
- (void)updateToLandscapeSize;
- (void)updateToPortraitSize;
- (void)updateNMTheme;
- (void)reloadNMData:(id)arg1;
- (void)reloadNMData;
- (void)updateNaviBar:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setCurrentPage:(long long)arg1;
- (id)loadPageView:(long long)arg1 ofView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

