//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNPMYOUTHCell.h"

@class SNUIImageView, UIImageView, UILabel, UIView;

@interface SNPMYOUTHUserCenterActivityCell : SNPMYOUTHCell
{
    SNUIImageView *_coverImgView;
    UIImageView *_activityTypeImgView;
    UILabel *_activityNameLbl;
    UILabel *_activityDetailLbl;
    UIView *_leftLineView;
    UIView *_rightLineView;
    UIView *_bottomLineView;
}

+ (double)cellHeight:(id)arg1;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *rightLineView; // @synthesize rightLineView=_rightLineView;
@property(retain, nonatomic) UIView *leftLineView; // @synthesize leftLineView=_leftLineView;
@property(retain, nonatomic) UILabel *activityDetailLbl; // @synthesize activityDetailLbl=_activityDetailLbl;
@property(retain, nonatomic) UILabel *activityNameLbl; // @synthesize activityNameLbl=_activityNameLbl;
@property(retain, nonatomic) UIImageView *activityTypeImgView; // @synthesize activityTypeImgView=_activityTypeImgView;
@property(retain, nonatomic) SNUIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
- (void).cxx_destruct;
- (void)refreshCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

