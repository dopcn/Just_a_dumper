//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SBBCardMethod-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class KZTimer, NSString, SBBFakePullBar, SBBImagesCardConf, SBBPageControl, UIScrollView;
@protocol SBBCardDelegate;

@interface SBBImagesCard : UIView <UIScrollViewDelegate, SBBCardMethod>
{
    _Bool _enablePullBar;
    _Bool _isFirstTimerFire;
    UIView *_contentView;
    id <SBBCardDelegate> _cardDelegate;
    UIScrollView *_scrollView;
    SBBPageControl *_pageControl;
    SBBImagesCardConf *_imgsCardConf;
    SBBFakePullBar *_pullBar;
    KZTimer *_timer;
}

@property(nonatomic) _Bool isFirstTimerFire; // @synthesize isFirstTimerFire=_isFirstTimerFire;
@property(retain, nonatomic) KZTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) SBBFakePullBar *pullBar; // @synthesize pullBar=_pullBar;
@property(retain, nonatomic) SBBImagesCardConf *imgsCardConf; // @synthesize imgsCardConf=_imgsCardConf;
@property(retain, nonatomic) SBBPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool enablePullBar; // @synthesize enablePullBar=_enablePullBar;
@property(nonatomic) __weak id <SBBCardDelegate> cardDelegate; // @synthesize cardDelegate=_cardDelegate;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateCurrentPage:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)stop;
- (void)resetTimerByTimeInterval:(double)arg1;
- (void)didImageClicked:(id)arg1;
- (void)layoutSubviews;
- (void)createImageViewByImgConf:(id)arg1 andIndex:(long long)arg2 maxCount:(long long)arg3;
- (void)adjustScrollViewAndPageControlWithImagConfs:(id)arg1;
- (void)updateWithConfigure:(id)arg1;
- (void)initViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double preferredHeight;
@property(readonly) Class superclass;

@end

