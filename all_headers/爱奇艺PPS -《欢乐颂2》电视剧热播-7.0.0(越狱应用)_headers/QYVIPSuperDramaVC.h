//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

#import "QYVIPSuperDramaContainerViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IQYQiDanManager, IQYVipTheatreManager, NSMutableArray, NSString, QYAnimateImageView, QYScrollSegmentView, QYVIPSuperDramaContainerView, UIPageControl;

@interface QYVIPSuperDramaVC : QYCommonViewController <QYVIPSuperDramaContainerViewDelegate, UIScrollViewDelegate>
{
    QYScrollSegmentView *_scrollSegmentView;
    QYVIPSuperDramaContainerView *_vipContainerView;
    UIPageControl *_pageControl;
    IQYVipTheatreManager *_dataManager;
    NSMutableArray *_dataArray;
    QYAnimateImageView *_blurImageView;
    IQYQiDanManager *_collectManager;
    IQYQiDanManager *_cancelCollectManager;
}

@property(retain, nonatomic) IQYQiDanManager *cancelCollectManager; // @synthesize cancelCollectManager=_cancelCollectManager;
@property(retain, nonatomic) IQYQiDanManager *collectManager; // @synthesize collectManager=_collectManager;
@property(retain, nonatomic) QYAnimateImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) IQYVipTheatreManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) QYVIPSuperDramaContainerView *vipContainerView; // @synthesize vipContainerView=_vipContainerView;
@property(retain, nonatomic) QYScrollSegmentView *scrollSegmentView; // @synthesize scrollSegmentView=_scrollSegmentView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)openVipBack;
- (void)gotoMoney;
- (void)gotoCollect:(id)arg1;
- (void)gotoShare:(id)arg1;
- (void)routerEventWithName:(id)arg1 userInfo:(id)arg2;
- (void)contentViewDidMoveFromIndex:(long long)arg1 toIndex:(long long)arg2 progress:(double)arg3;
- (void)dramContainerView:(id)arg1 switchDrama:(_Bool)arg2;
- (void)dramaContrainerView:(id)arg1 scrollToIndex:(long long)arg2;
- (id)superDramaObjInDramaContainerView;
- (void)handleData:(id)arg1 isSuccess:(_Bool)arg2;
- (void)prepareGetData;
- (void)initOther;
- (void)showActivity;
- (double)getPageControlTop;
- (double)getContainerViewTop;
- (double)getTitleViewTop;
- (double)getMiddleHeight;
- (void)customGoback;
- (void)addBackBtn;
- (void)initView;
- (void)setUp;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

