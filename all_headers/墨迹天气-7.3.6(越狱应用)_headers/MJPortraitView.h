//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImage, UIImageView;

@interface MJPortraitView : UIView
{
    _Bool _showGender;
    UIButton *_btnPortrait;
    UIImageView *_genderIcon;
    UIImage *_portraitImage;
    unsigned long long _gender;
}

@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(nonatomic) _Bool showGender; // @synthesize showGender=_showGender;
@property(retain, nonatomic) UIImage *portraitImage; // @synthesize portraitImage=_portraitImage;
@property(retain, nonatomic) UIImageView *genderIcon; // @synthesize genderIcon=_genderIcon;
@property(retain, nonatomic) UIButton *btnPortrait; // @synthesize btnPortrait=_btnPortrait;
- (void).cxx_destruct;
- (void)clickPortrait;
- (id)getGenderIcon;
- (void)setPortraitImageByUrl:(id)arg1;
- (void)initGenderIcon:(struct CGRect)arg1 addview:(id)arg2;
- (void)initBtnPortrait:(struct CGRect)arg1;
- (void)initView:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

