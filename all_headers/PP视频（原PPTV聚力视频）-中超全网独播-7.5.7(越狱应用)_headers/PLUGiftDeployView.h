//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PLUArcDeployView.h"

#import "CAAnimationDelegate-Protocol.h"
#import "PLUDeployableViewDatasource-Protocol.h"
#import "PLUDeployableViewDelegate-Protocol.h"
#import "PLUGiftDeployMainViewDelegate-Protocol.h"

@class NSArray, NSString, PLUGiftInfoModel, UIImageView, UILabel, UIView;
@protocol PLUGiftDeployViewDelegate;

@interface PLUGiftDeployView : PLUArcDeployView <PLUDeployableViewDatasource, PLUDeployableViewDelegate, CAAnimationDelegate, PLUGiftDeployMainViewDelegate>
{
    _Bool _show;
    _Bool _horizontalMode;
    _Bool _independent;
    PLUGiftInfoModel *_giftInfo;
    id <PLUGiftDeployViewDelegate> _delegateGift;
    NSArray *_counts;
    UIImageView *_giftImg;
    UILabel *_nameLbl;
    UILabel *_costLbl;
    UIView *_backView;
}

+ (id)independentGiftDeployViewWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool independent; // @synthesize independent=_independent;
@property(nonatomic) __weak UIView *backView; // @synthesize backView=_backView;
@property(nonatomic) __weak UILabel *costLbl; // @synthesize costLbl=_costLbl;
@property(nonatomic) __weak UILabel *nameLbl; // @synthesize nameLbl=_nameLbl;
@property(nonatomic) __weak UIImageView *giftImg; // @synthesize giftImg=_giftImg;
@property(retain, nonatomic) NSArray *counts; // @synthesize counts=_counts;
@property(nonatomic) _Bool horizontalMode; // @synthesize horizontalMode=_horizontalMode;
@property(nonatomic) __weak id <PLUGiftDeployViewDelegate> delegateGift; // @synthesize delegateGift=_delegateGift;
@property(nonatomic) _Bool show; // @synthesize show=_show;
@property(retain, nonatomic) PLUGiftInfoModel *giftInfo; // @synthesize giftInfo=_giftInfo;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)hideBackView:(_Bool)arg1;
- (void)showList;
- (void)layoutV;
- (id)costStr:(id)arg1;
- (void)mainViewClick:(id)arg1;
- (void)deployView:(id)arg1 didDeselectItemAtIndex:(long long)arg2;
- (void)hide;
- (void)animationDidEnd;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)deploy:(_Bool)arg1;
- (void)undeploy:(_Bool)arg1;
- (id)giftMainDeployAni:(_Bool)arg1;
- (void)mainBtnClick:(id)arg1;
- (long long)countOfViews:(id)arg1;
- (id)deployableView:(id)arg1 viewAtIdx:(long long)arg2;
- (id)mainView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

