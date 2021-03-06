//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGSwipeTableCell.h"

@class NSDictionary, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface SWCityManagerTableViewListCell : MGSwipeTableCell
{
    CDUnknownBlockType _deleteBlock;
    UILabel *_cityNameLabel;
    UILabel *_tempLabel;
    UIButton *_pushCityBox;
    UIButton *_residentCityBox;
    UIImageView *_locationIconView;
    UIImageView *_weatherIconView;
    UIImageView *_deleteIconView;
    UIImageView *_bgImageView;
    NSDictionary *_viewModelDic;
    UIButton *_settingButton;
    UIButton *_warningIconView;
    UIActivityIndicatorView *_activityIndicatorView;
    double _nameLabelLeftSpace;
}

@property(nonatomic) double nameLabelLeftSpace; // @synthesize nameLabelLeftSpace=_nameLabelLeftSpace;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIButton *warningIconView; // @synthesize warningIconView=_warningIconView;
@property(retain, nonatomic) UIButton *settingButton; // @synthesize settingButton=_settingButton;
@property(retain, nonatomic) NSDictionary *viewModelDic; // @synthesize viewModelDic=_viewModelDic;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIImageView *deleteIconView; // @synthesize deleteIconView=_deleteIconView;
@property(retain, nonatomic) UIImageView *weatherIconView; // @synthesize weatherIconView=_weatherIconView;
@property(retain, nonatomic) UIImageView *locationIconView; // @synthesize locationIconView=_locationIconView;
@property(retain, nonatomic) UIButton *residentCityBox; // @synthesize residentCityBox=_residentCityBox;
@property(retain, nonatomic) UIButton *pushCityBox; // @synthesize pushCityBox=_pushCityBox;
@property(retain, nonatomic) UILabel *tempLabel; // @synthesize tempLabel=_tempLabel;
@property(retain, nonatomic) UILabel *cityNameLabel; // @synthesize cityNameLabel=_cityNameLabel;
@property(copy, nonatomic) CDUnknownBlockType deleteBlock; // @synthesize deleteBlock=_deleteBlock;
- (void).cxx_destruct;
- (long long)cityNameWordCount;
- (void)handleTapPress:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)updateWithCity:(id)arg1;
- (void)updateWithDict:(id)arg1;
- (void)layoutTempLabel;
- (void)setViewModel:(id)arg1;
- (void)prepareForMove;
- (void)prepareForMoveSnapshot;
- (void)onCityPushStatusChanged:(id)arg1;
- (void)onPushSettingButtonClicked:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

