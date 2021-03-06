//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CorrectionButton, NowcastCorrectionRewardModel, UIImageView, UILabel;

@interface NowcastCorrectionView : UIView
{
    CDUnknownBlockType _correctionBtnClick;
    NowcastCorrectionRewardModel *_rewardData;
    CorrectionButton *_rightBtn;
    CorrectionButton *_faultBtn;
    UIImageView *_rewardView;
    UILabel *_tipsLab;
    UILabel *_rewardLab;
}

@property(retain, nonatomic) UILabel *rewardLab; // @synthesize rewardLab=_rewardLab;
@property(retain, nonatomic) UILabel *tipsLab; // @synthesize tipsLab=_tipsLab;
@property(retain, nonatomic) UIImageView *rewardView; // @synthesize rewardView=_rewardView;
@property(retain, nonatomic) CorrectionButton *faultBtn; // @synthesize faultBtn=_faultBtn;
@property(retain, nonatomic) CorrectionButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) NowcastCorrectionRewardModel *rewardData; // @synthesize rewardData=_rewardData;
@property(copy, nonatomic) CDUnknownBlockType correctionBtnClick; // @synthesize correctionBtnClick=_correctionBtnClick;
- (void).cxx_destruct;
- (void)p_showCorrectionViewIfNeed:(_Bool)arg1;
- (_Bool)p_canFeedback;
- (void)faultBtnClick;
- (void)rightBtnClick;
- (void)layoutSubviews;
- (void)loadSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

