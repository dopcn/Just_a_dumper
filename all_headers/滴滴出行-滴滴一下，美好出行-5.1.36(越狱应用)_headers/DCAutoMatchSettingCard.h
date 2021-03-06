//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DCLayoutView, DCRichLabel, DCRouteOrderAutoMatchModel, DCUIButton, NSString, OKNetTRBaseReqAdapter, UIImageView;

@interface DCAutoMatchSettingCard : UIView
{
    _Bool _isStation;
    id _dataModel;
    NSString *_routeId;
    NSString *_dataId;
    double _startTime;
    long long _settingType;
    CDUnknownBlockType _closeMatchSettingFinished;
    CDUnknownBlockType _closeAutoRealSettingFinished;
    CDUnknownBlockType _statusDidChangeWithTimeout;
    CDUnknownBlockType _oneTouchOpenMatchSetting;
    CDUnknownBlockType _openH5;
    CDUnknownBlockType _openSettingH5;
    CDUnknownBlockType _timingBlock;
    CDUnknownBlockType _updateViews;
    CDUnknownBlockType _buttonClickBlock;
    DCUIButton *_button;
    DCRichLabel *_titleLabel;
    UIImageView *_iconImageView;
    DCLayoutView *_footView;
    OKNetTRBaseReqAdapter *_request;
}

@property(retain, nonatomic) OKNetTRBaseReqAdapter *request; // @synthesize request=_request;
@property(retain, nonatomic) DCLayoutView *footView; // @synthesize footView=_footView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) DCRichLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) DCUIButton *button; // @synthesize button=_button;
@property(copy, nonatomic) CDUnknownBlockType buttonClickBlock; // @synthesize buttonClickBlock=_buttonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType updateViews; // @synthesize updateViews=_updateViews;
@property(copy, nonatomic) CDUnknownBlockType timingBlock; // @synthesize timingBlock=_timingBlock;
@property(copy, nonatomic) CDUnknownBlockType openSettingH5; // @synthesize openSettingH5=_openSettingH5;
@property(copy, nonatomic) CDUnknownBlockType openH5; // @synthesize openH5=_openH5;
@property(copy, nonatomic) CDUnknownBlockType oneTouchOpenMatchSetting; // @synthesize oneTouchOpenMatchSetting=_oneTouchOpenMatchSetting;
@property(copy, nonatomic) CDUnknownBlockType statusDidChangeWithTimeout; // @synthesize statusDidChangeWithTimeout=_statusDidChangeWithTimeout;
@property(copy, nonatomic) CDUnknownBlockType closeAutoRealSettingFinished; // @synthesize closeAutoRealSettingFinished=_closeAutoRealSettingFinished;
@property(copy, nonatomic) CDUnknownBlockType closeMatchSettingFinished; // @synthesize closeMatchSettingFinished=_closeMatchSettingFinished;
@property(nonatomic) _Bool isStation; // @synthesize isStation=_isStation;
@property(nonatomic) long long settingType; // @synthesize settingType=_settingType;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *dataId; // @synthesize dataId=_dataId;
@property(copy, nonatomic) NSString *routeId; // @synthesize routeId=_routeId;
@property(retain, nonatomic) id dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) DCRouteOrderAutoMatchModel *autoMatchModel;
- (void)buttonAction;
- (void)closeAutoMatch;
- (void)closeAutoReal;
- (void)showAlertWithModel:(id)arg1;
- (void)openAutoMatch;
- (void)setupContent;
- (void)setupIcon;
- (void)setupTimeout;
- (void)setupAlreadySet;
- (void)setupDisable;
- (void)setupNoSet;
- (void)setupModel:(id)arg1;
- (double)contentMaxWidthWithBounds:(double)arg1;
- (double)viewHeight:(id)arg1 boundsWidth:(double)arg2;
- (double)viewHeight:(id)arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end

