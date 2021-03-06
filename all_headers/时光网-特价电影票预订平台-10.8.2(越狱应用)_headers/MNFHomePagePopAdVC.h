//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTBPopViewVC.h"

#import "MTDUserLoginDelegate-Protocol.h"

@class MNCAdvertisementSignLabel, MNMMainPagePopup, MNRGetCouponURLWithLogin, MTBButton, MTBImageView, MTBView, NSString;

@interface MNFHomePagePopAdVC : MTBPopViewVC <MTDUserLoginDelegate>
{
    NSString *_stringAdIdentifier;
    NSString *_stringImageUrl;
    MNMMainPagePopup *_adInfo;
    NSString *_stringCouponUrl;
    MTBButton *_btnBigImage;
    MTBImageView *_imgClose;
    MTBView *_viewContainer;
    MTBButton *_btnAdImage;
    MTBImageView *_imgViewHorizentalLine;
    MTBImageView *_imgViewVerticalLine;
    MTBButton *_btnClose;
    MTBButton *_btnSeeDetail;
    MNCAdvertisementSignLabel *_labelAdvTag;
    MNRGetCouponURLWithLogin *_requestGetLoginUrl;
}

@property(retain, nonatomic) MNRGetCouponURLWithLogin *requestGetLoginUrl; // @synthesize requestGetLoginUrl=_requestGetLoginUrl;
@property(retain, nonatomic) MNCAdvertisementSignLabel *labelAdvTag; // @synthesize labelAdvTag=_labelAdvTag;
@property(retain, nonatomic) MTBButton *btnSeeDetail; // @synthesize btnSeeDetail=_btnSeeDetail;
@property(retain, nonatomic) MTBButton *btnClose; // @synthesize btnClose=_btnClose;
@property(retain, nonatomic) MTBImageView *imgViewVerticalLine; // @synthesize imgViewVerticalLine=_imgViewVerticalLine;
@property(retain, nonatomic) MTBImageView *imgViewHorizentalLine; // @synthesize imgViewHorizentalLine=_imgViewHorizentalLine;
@property(retain, nonatomic) MTBButton *btnAdImage; // @synthesize btnAdImage=_btnAdImage;
@property(retain, nonatomic) MTBView *viewContainer; // @synthesize viewContainer=_viewContainer;
@property(retain, nonatomic) MTBImageView *imgClose; // @synthesize imgClose=_imgClose;
@property(retain, nonatomic) MTBButton *btnBigImage; // @synthesize btnBigImage=_btnBigImage;
@property(copy, nonatomic) NSString *stringCouponUrl; // @synthesize stringCouponUrl=_stringCouponUrl;
@property(retain, nonatomic) MNMMainPagePopup *adInfo; // @synthesize adInfo=_adInfo;
@property(copy, nonatomic) NSString *stringImageUrl; // @synthesize stringImageUrl=_stringImageUrl;
@property(copy, nonatomic) NSString *stringAdIdentifier; // @synthesize stringAdIdentifier=_stringAdIdentifier;
- (void).cxx_destruct;
- (void)sendPopViewStats:(id)arg1;
- (id)createPopStatsPath:(_Bool)arg1;
- (void)operate:(id)arg1;
- (id)mn_setStatsPageBusinessParam;
- (_Bool)mn_isControllTabBarState;
- (void)mtdRequiredUserLoginSucess;
- (void)confirmAction:(id)arg1;
- (void)cancelAction:(id)arg1;
- (void)getLoginUrlFailed;
- (void)getLoginUrlSucceed:(id)arg1;
- (void)getLoginUrl;
- (void)mt_loadData;
- (void)mt_cancelLoadData;
- (void)addAdvTagView:(id)arg1;
- (void)createSmallImageViews;
- (void)createBigImageViews;
- (void)mt_createViews;
- (void)mt_initFields;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

