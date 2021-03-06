//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVMediaVideoBaseViewController.h"

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class MVCampaignExp, MVStoreProductViewController, NSString, UILabel, UIView;

@interface MVMediaStoreKitFullScreenViewController : MVMediaVideoBaseViewController <SKStoreProductViewControllerDelegate>
{
    _Bool _storeKitVCShow;
    _Bool _firstWillAppeared;
    MVCampaignExp *_campaign;
    NSString *_unitId;
    UIView *_logicView;
    UIView *_landscapeFlashView;
    UIView *_backgroundView;
    UILabel *_titleLabel;
    UIView *_flashView;
    MVStoreProductViewController *_storeKitVC;
    NSString *_originalNoticeUrl;
    double _ctaTextFontSize;
    double _titleLabelFontSize;
    double _subTitleLabelFontSize;
}

@property(nonatomic) double subTitleLabelFontSize; // @synthesize subTitleLabelFontSize=_subTitleLabelFontSize;
@property(nonatomic) double titleLabelFontSize; // @synthesize titleLabelFontSize=_titleLabelFontSize;
@property(nonatomic) double ctaTextFontSize; // @synthesize ctaTextFontSize=_ctaTextFontSize;
@property(retain, nonatomic) NSString *originalNoticeUrl; // @synthesize originalNoticeUrl=_originalNoticeUrl;
@property(nonatomic) _Bool firstWillAppeared; // @synthesize firstWillAppeared=_firstWillAppeared;
@property(retain, nonatomic) MVStoreProductViewController *storeKitVC; // @synthesize storeKitVC=_storeKitVC;
@property(retain, nonatomic) UIView *flashView; // @synthesize flashView=_flashView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *landscapeFlashView; // @synthesize landscapeFlashView=_landscapeFlashView;
@property(retain, nonatomic) UIView *logicView; // @synthesize logicView=_logicView;
@property(copy, nonatomic) NSString *unitId; // @synthesize unitId=_unitId;
@property(retain, nonatomic) MVCampaignExp *campaign; // @synthesize campaign=_campaign;
- (void).cxx_destruct;
- (void)videoPlayerPlayStop;
- (void)videoPlayerPlayPause;
- (void)videoPlayerPlayFinish;
- (void)videoPlayerPlayStart;
- (void)videoPlayerPlayPlaying;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)delayPresentStoreKitView;
- (void)videoSecondJumpTemplateOperate;
- (void)setupLogicView;
- (void)installButtonAction:(id)arg1;
- (void)setMarkContentViewWithAlpha:(int)arg1;
- (void)markContentViewWithTimes:(id)arg1;
- (void)clickMarkViewAction:(id)arg1;
- (void)playButtonAction;
- (void)soundAction:(id)arg1;
- (void)delayOpacity;
- (void)removeFlashView;
- (void)addFlashViewTitle:(id)arg1;
- (id)opacityForever_Animation:(float)arg1;
- (void)deleteFlash;
- (void)addInstallButton;
- (void)closeAction:(id)arg1;
- (void)addCloseButton;
- (void)addMaskView;
- (void)updateMakeConstraintsAllUI;
- (void)dealOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

