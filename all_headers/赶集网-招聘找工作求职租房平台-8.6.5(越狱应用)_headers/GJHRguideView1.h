//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJHRGuideBaseView.h"

@class UIImageView, UILabel;

@interface GJHRguideView1 : GJHRGuideBaseView
{
    UIImageView *_mainBackGroundView;
    UIImageView *_imageView;
    UILabel *_lable1;
    UILabel *_lable2;
    UILabel *_lable3;
    UILabel *_lable4;
    UILabel *_lable5;
}

@property(retain, nonatomic) UILabel *lable5; // @synthesize lable5=_lable5;
@property(retain, nonatomic) UILabel *lable4; // @synthesize lable4=_lable4;
@property(retain, nonatomic) UILabel *lable3; // @synthesize lable3=_lable3;
@property(retain, nonatomic) UILabel *lable2; // @synthesize lable2=_lable2;
@property(retain, nonatomic) UILabel *lable1; // @synthesize lable1=_lable1;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *mainBackGroundView; // @synthesize mainBackGroundView=_mainBackGroundView;
- (void).cxx_destruct;
- (void)finishAnimationWithViewIndex:(long long)arg1;
- (void)addLable5;
- (void)addLable4;
- (void)addLable3;
- (void)addLable2;
- (void)addLableViews;
- (void)addImageView;
- (void)startAnimationwithViewImage;
- (void)startAnimationwithViewIndex:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1 WithMainBackGroundImage:(id)arg2;

@end

