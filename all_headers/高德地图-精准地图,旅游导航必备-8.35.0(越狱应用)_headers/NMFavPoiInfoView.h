//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LTMBaseView.h"

@class MPSQueryPoiData, NMPoiCustomPriceLabel, NMPoiDeepIconView, NMRatingView, NSArray, UIButton, UIImageView, UILabel, UIView;
@protocol NMFavTipViewDelegate;

@interface NMFavPoiInfoView : LTMBaseView
{
    MPSQueryPoiData *_poiData;
    int _poiSourceType;
    NMPoiDeepIconView *_poiDeepIcon;
    NMRatingView *_ratingView;
    UILabel *_lblGasPrice;
    NMPoiCustomPriceLabel *_lblAverageCost;
    UILabel *_lblMainTitle;
    UILabel *_lblSubTitle;
    UILabel *_referLable;
    UIView *_busStation;
    UIButton *_busStationLetter;
    UIButton *_busStationCharacter;
    UIImageView *_lblTmallIcon;
    UILabel *_lblTmallTitle;
    UIButton *_btnDetails;
    UIButton *_btnSearch;
    UIButton *_btnRoute;
    UIButton *_btnNavi;
    UIButton *_additionalButton;
    int _additionalButtonType;
    UIView *_sepHeader;
    UILabel *_sepTop;
    UIView *_headDetailView;
    UILabel *_scTicketPriceLabel;
    UILabel *_magicBoxScenicPrice;
    UILabel *_magicBoxScenicLevel;
    UIView *_magicBoxScenicLine;
    UILabel *_magicBoxMallPromotion;
    NSArray *_magicBoxButtonArray;
    id <NMFavTipViewDelegate> _delegate;
}

@property(retain, nonatomic) MPSQueryPoiData *poiData; // @synthesize poiData=_poiData;
@property(nonatomic) __weak id <NMFavTipViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setDetailHidden:(_Bool)arg1;
- (id)poiDictionaryChangeToPoiData:(id)arg1;
- (id)poiDataChangeToDication:(id)arg1;
- (id)getNaviMd5UseString:(id)arg1;
- (_Bool)isContainPoiData:(id)arg1;
- (void)btnShareAction:(id)arg1;
- (void)btnNaviAction:(id)arg1;
- (void)btnRouteAction:(id)arg1;
- (void)btnSearchAction:(id)arg1;
- (void)btnOpenDetailAction:(id)arg1;
- (id)getAdditionalButtonWithType:(int)arg1;
- (int)getTypeWithPOIData:(id)arg1;
- (id)getIconArrayToRemoveWithButtonType:(int)arg1;
- (id)getPoiData;
- (void)updatePoiInfo:(id)arg1 andIndex:(long long)arg2;
- (long long)checkMBSData:(id)arg1 boolValue:(_Bool *)arg2;
- (void)updatePoiInfo:(id)arg1;
- (void)recaculePoiPointType:(id)arg1;
- (void)updateToLandscapeSize;
- (void)updateToPortraitSize;
- (void)updateNMTheme;
- (id)initWithPoiData:(id)arg1;
- (void)dealloc;

@end

