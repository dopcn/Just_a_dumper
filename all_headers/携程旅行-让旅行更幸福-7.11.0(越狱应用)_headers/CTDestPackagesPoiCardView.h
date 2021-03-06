//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CTDestImageView, SchedulePoiDetailModel, UIButton, UILabel;
@protocol CTDestCardViewDelegate;

@interface CTDestPackagesPoiCardView : UIView
{
    _Bool _isTravleCard;
    id <CTDestCardViewDelegate> _delegate;
    CTDestImageView *_poiImageView;
    UILabel *_poiNameLabel;
    UILabel *_scoreLabel;
    UILabel *_costLabel;
    UIView *_splitLineView;
    UIButton *_poiDetailBtn;
    UIButton *_delBtn;
    UIButton *_mapBtn;
    UIButton *_pocketBtn;
    SchedulePoiDetailModel *_model;
}

@property(retain, nonatomic) SchedulePoiDetailModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIButton *pocketBtn; // @synthesize pocketBtn=_pocketBtn;
@property(retain, nonatomic) UIButton *mapBtn; // @synthesize mapBtn=_mapBtn;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(retain, nonatomic) UIButton *poiDetailBtn; // @synthesize poiDetailBtn=_poiDetailBtn;
@property(retain, nonatomic) UIView *splitLineView; // @synthesize splitLineView=_splitLineView;
@property(retain, nonatomic) UILabel *costLabel; // @synthesize costLabel=_costLabel;
@property(retain, nonatomic) UILabel *scoreLabel; // @synthesize scoreLabel=_scoreLabel;
@property(retain, nonatomic) UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(retain, nonatomic) CTDestImageView *poiImageView; // @synthesize poiImageView=_poiImageView;
@property(nonatomic) _Bool isTravleCard; // @synthesize isTravleCard=_isTravleCard;
@property(nonatomic) __weak id <CTDestCardViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutAllViews;
- (void)drawShadown;
- (void)viewPoi;
- (void)navPoi;
- (void)delPoi;
- (id)getScoreText:(id)arg1;
- (id)getPriceText:(id)arg1;
- (void)fillData:(id)arg1 haveCoord:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1 isTravleCard:(_Bool)arg2;

@end

