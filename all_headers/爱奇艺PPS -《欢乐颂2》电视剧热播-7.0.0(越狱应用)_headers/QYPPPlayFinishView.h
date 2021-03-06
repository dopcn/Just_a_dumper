//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class CADisplayLink, CAShapeLayer, CupidAd, NSMutableDictionary, NSString, NSTimer, QYPPAdsButton, QYPPRePlayButton, UIButton, UIImageView, UILabel;

@interface QYPPPlayFinishView : UIView <UIGestureRecognizerDelegate>
{
    long long playNTime;
    _Bool isVertical;
    CAShapeLayer *shipLayer;
    CADisplayLink *timer;
    NSTimer *secondTimer;
    _Bool isStartAnimation;
    _Bool _isEmptyAds;
    _Bool _isAds;
    UIImageView *_imageView;
    UIImageView *_playBtnView;
    UILabel *_timeL;
    UILabel *_descL;
    NSMutableDictionary *_relateDic;
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _tapBlock;
    NSString *_adsResultID;
    CupidAd *_ad;
    UIView *_leftView;
    UIButton *_cancelBtn;
    UIView *_wholeView4Ads;
    UIImageView *_adsImage;
    UILabel *_adsL;
    QYPPAdsButton *_adsBtn;
    UIView *_line;
    QYPPRePlayButton *_retryBtn4Ads;
}

@property(retain, nonatomic) QYPPRePlayButton *retryBtn4Ads; // @synthesize retryBtn4Ads=_retryBtn4Ads;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) QYPPAdsButton *adsBtn; // @synthesize adsBtn=_adsBtn;
@property(retain, nonatomic) UILabel *adsL; // @synthesize adsL=_adsL;
@property(retain, nonatomic) UIImageView *adsImage; // @synthesize adsImage=_adsImage;
@property(retain, nonatomic) UIView *wholeView4Ads; // @synthesize wholeView4Ads=_wholeView4Ads;
@property(nonatomic) _Bool isAds; // @synthesize isAds=_isAds;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) _Bool isEmptyAds; // @synthesize isEmptyAds=_isEmptyAds;
@property(retain, nonatomic) CupidAd *ad; // @synthesize ad=_ad;
@property(copy, nonatomic) NSString *adsResultID; // @synthesize adsResultID=_adsResultID;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(nonatomic) __weak NSMutableDictionary *relateDic; // @synthesize relateDic=_relateDic;
@property(retain, nonatomic) UILabel *descL; // @synthesize descL=_descL;
@property(retain, nonatomic) UILabel *timeL; // @synthesize timeL=_timeL;
@property(retain, nonatomic) UIImageView *playBtnView; // @synthesize playBtnView=_playBtnView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (id)getPingbackDic;
- (void)tapAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)refreshTimeFont;
- (void)resetTimeText:(long long)arg1;
- (void)refershTimeL;
- (void)stopWaitingAnimation;
- (void)step:(id)arg1;
- (void)resetWaitingAnimation;
- (void)startWaitingAnimation;
- (_Bool)isCounting;
- (void)cancelCount4UI;
- (void)cancelCount;
- (void)pingbackAction;
- (void)perfromCount;
- (void)dealloc;
- (void)releaseTimer;
- (void)setLabelsCenter;
- (void)setIsSeries:(_Bool)arg1;
- (void)setFrameByOrigin:(struct CGPoint)arg1 Vertical:(_Bool)arg2;
- (void)refreshView4AdsByOrigin:(struct CGPoint)arg1;
- (void)refreshAdsView:(id)arg1;
- (void)disableAd;
- (void)rePlay4AdsAction;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

