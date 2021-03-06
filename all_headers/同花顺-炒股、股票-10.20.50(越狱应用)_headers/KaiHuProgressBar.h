//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface KaiHuProgressBar : UIView
{
    UILabel *_leftDescriptionLabel;
    UILabel *_leftDateLabel;
    UILabel *_rightDescriptionLabel;
    UILabel *_rightDateLabel;
    UIImageView *_leftImgView;
    UIImageView *_rightImgView;
    UIView *_leftLine;
    UIView *_rightLine;
}

@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UIImageView *rightImgView; // @synthesize rightImgView=_rightImgView;
@property(retain, nonatomic) UIImageView *leftImgView; // @synthesize leftImgView=_leftImgView;
@property(retain, nonatomic) UILabel *rightDateLabel; // @synthesize rightDateLabel=_rightDateLabel;
@property(retain, nonatomic) UILabel *rightDescriptionLabel; // @synthesize rightDescriptionLabel=_rightDescriptionLabel;
@property(retain, nonatomic) UILabel *leftDateLabel; // @synthesize leftDateLabel=_leftDateLabel;
@property(retain, nonatomic) UILabel *leftDescriptionLabel; // @synthesize leftDescriptionLabel=_leftDescriptionLabel;
- (void).cxx_destruct;
- (void)layoutStateFail;
- (void)layoutStateSuccess;
- (void)layoutStateLoading;
- (void)layoutWithModelType:(int)arg1;
- (void)masonarySubviews;
- (void)setModelData:(id)arg1;
- (void)initSubViews;
- (id)init;

@end

