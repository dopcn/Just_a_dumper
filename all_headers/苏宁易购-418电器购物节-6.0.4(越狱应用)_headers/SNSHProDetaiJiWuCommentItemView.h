//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNProDetailCommonView.h"

@class SNUIImageView, UIImageView, UILabel;

@interface SNSHProDetaiJiWuCommentItemView : SNProDetailCommonView
{
    UIImageView *_bgImgView;
    SNUIImageView *_faceImgView;
    UILabel *_nickLabel;
    SNUIImageView *_mainImgView;
    UILabel *_contentDescLbl;
}

@property(retain, nonatomic) UILabel *contentDescLbl; // @synthesize contentDescLbl=_contentDescLbl;
@property(retain, nonatomic) SNUIImageView *mainImgView; // @synthesize mainImgView=_mainImgView;
@property(retain, nonatomic) UILabel *nickLabel; // @synthesize nickLabel=_nickLabel;
@property(retain, nonatomic) SNUIImageView *faceImgView; // @synthesize faceImgView=_faceImgView;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (void)setItemWithCommentDto:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

