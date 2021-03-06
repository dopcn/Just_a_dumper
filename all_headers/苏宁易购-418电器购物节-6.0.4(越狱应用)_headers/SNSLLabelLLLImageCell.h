//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface SNSLLabelLLLImageCell : UITableViewCell
{
    unsigned long long _bottomType;
    UILabel *_leftLbl;
    UILabel *_rightUpLbl;
    UILabel *_rightDownLbl;
    UILabel *_secondLbl;
    UIImageView *_rightImgV;
    UIView *_bottomLine;
    UILabel *_downTipTextLabel;
    UIImageView *_downTipImageView;
    struct CGSize _imageSize;
}

@property(retain, nonatomic) UIImageView *downTipImageView; // @synthesize downTipImageView=_downTipImageView;
@property(retain, nonatomic) UILabel *downTipTextLabel; // @synthesize downTipTextLabel=_downTipTextLabel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIImageView *rightImgV; // @synthesize rightImgV=_rightImgV;
@property(retain, nonatomic) UILabel *secondLbl; // @synthesize secondLbl=_secondLbl;
@property(retain, nonatomic) UILabel *rightDownLbl; // @synthesize rightDownLbl=_rightDownLbl;
@property(retain, nonatomic) UILabel *rightUpLbl; // @synthesize rightUpLbl=_rightUpLbl;
@property(retain, nonatomic) UILabel *leftLbl; // @synthesize leftLbl=_leftLbl;
@property(nonatomic) unsigned long long bottomType; // @synthesize bottomType=_bottomType;
@property(nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)setUpContentWithLeftText:(id)arg1 secondText:(id)arg2 rightUpText:(id)arg3 rightDownText:(id)arg4 rightImageName:(id)arg5 downTipImageName:(id)arg6 downTipText:(id)arg7;
- (void)setUpContentWithLeftText:(id)arg1 secondText:(id)arg2 rightUpText:(id)arg3 rightDownText:(id)arg4 rightImageName:(id)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

