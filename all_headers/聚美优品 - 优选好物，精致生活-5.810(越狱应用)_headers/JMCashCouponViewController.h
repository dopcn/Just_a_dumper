//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMBaseViewController.h"

#import "DealHeadTabViewDelegate-Protocol.h"
#import "JuMeiCashCouponViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class DealHeadTabbar, JumeiCouponListAction, JumeiMagic_CouponAction, NSDictionary, NSMutableArray, NSString, UIScrollView;

@interface JMCashCouponViewController : JMBaseViewController <UIScrollViewDelegate, JuMeiCashCouponViewDelegate, DealHeadTabViewDelegate>
{
    _Bool _ifShowTabBarType;
    _Bool _scrollStartStopType;
    int _cashStatus;
    DealHeadTabbar *_headTabBar;
    UIScrollView *_containScrollview;
    JumeiMagic_CouponAction *_magicCouponAction;
    JumeiCouponListAction *_couponListAction;
    NSDictionary *_statusDictionary;
    NSMutableArray *_cashCouponViewListArray;
    NSMutableArray *_cashCouponListArray;
    NSMutableArray *_magicCouponListArray;
    long long _currentPageIndex;
    long long _startPageNumber;
}

@property(nonatomic) _Bool scrollStartStopType; // @synthesize scrollStartStopType=_scrollStartStopType;
@property(nonatomic) long long startPageNumber; // @synthesize startPageNumber=_startPageNumber;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) NSMutableArray *magicCouponListArray; // @synthesize magicCouponListArray=_magicCouponListArray;
@property(retain, nonatomic) NSMutableArray *cashCouponListArray; // @synthesize cashCouponListArray=_cashCouponListArray;
@property(retain, nonatomic) NSMutableArray *cashCouponViewListArray; // @synthesize cashCouponViewListArray=_cashCouponViewListArray;
@property(nonatomic) int cashStatus; // @synthesize cashStatus=_cashStatus;
@property(retain, nonatomic) NSDictionary *statusDictionary; // @synthesize statusDictionary=_statusDictionary;
@property(retain, nonatomic) JumeiCouponListAction *couponListAction; // @synthesize couponListAction=_couponListAction;
@property(retain, nonatomic) JumeiMagic_CouponAction *magicCouponAction; // @synthesize magicCouponAction=_magicCouponAction;
@property(retain, nonatomic) UIScrollView *containScrollview; // @synthesize containScrollview=_containScrollview;
@property(retain, nonatomic) DealHeadTabbar *headTabBar; // @synthesize headTabBar=_headTabBar;
@property(nonatomic) _Bool ifShowTabBarType; // @synthesize ifShowTabBarType=_ifShowTabBarType;
- (void).cxx_destruct;
- (void)changeCatagoryEvent:(long long)arg1;
- (void)requestCouponListAction:(long long)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadCashCouponView:(long long)arg1;
- (void)filterMagicCouponEvent;
- (void)onMagic_CouponActionSuccessWithData:(id)arg1;
- (void)onRequestError:(id)arg1;
- (void)onCouponListActionSuccessWithData:(id)arg1;
- (void)sendCouponListAction;
- (void)sendMagicCouponAction;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)creatSubViewsInScrollview;
- (void)setTabBar;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

