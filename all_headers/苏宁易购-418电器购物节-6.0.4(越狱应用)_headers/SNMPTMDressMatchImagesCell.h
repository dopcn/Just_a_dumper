//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNMPTMBaseTableViewCell.h"

@class SNMPTMDMImagesCellPresent, SNUIImageView, UIImageView, UILabel, UIView;

@interface SNMPTMDressMatchImagesCell : SNMPTMBaseTableViewCell
{
    SNMPTMDMImagesCellPresent *_ImagesCellPresent;
    SNUIImageView *_image1;
    SNUIImageView *_image2;
    SNUIImageView *_headImageView;
    UILabel *_nicknameLabel;
    SNUIImageView *_lookImageView;
    UILabel *_lookCountLabel;
    UILabel *_mainTitle;
    UILabel *_subMainTitle;
    UIView *_sepView;
    UIView *_imageCountView;
    UIImageView *_countIconView;
    UILabel *_countView;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UILabel *countView; // @synthesize countView=_countView;
@property(retain, nonatomic) UIImageView *countIconView; // @synthesize countIconView=_countIconView;
@property(retain, nonatomic) UIView *imageCountView; // @synthesize imageCountView=_imageCountView;
@property(retain, nonatomic) UIView *sepView; // @synthesize sepView=_sepView;
@property(retain, nonatomic) UILabel *subMainTitle; // @synthesize subMainTitle=_subMainTitle;
@property(retain, nonatomic) UILabel *mainTitle; // @synthesize mainTitle=_mainTitle;
@property(retain, nonatomic) UILabel *lookCountLabel; // @synthesize lookCountLabel=_lookCountLabel;
@property(retain, nonatomic) SNUIImageView *lookImageView; // @synthesize lookImageView=_lookImageView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) SNUIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(retain, nonatomic) SNUIImageView *image2; // @synthesize image2=_image2;
@property(retain, nonatomic) SNUIImageView *image1; // @synthesize image1=_image1;
@property(retain, nonatomic) SNMPTMDMImagesCellPresent *ImagesCellPresent; // @synthesize ImagesCellPresent=_ImagesCellPresent;
- (void).cxx_destruct;
- (void)configCell;
- (void)awakeFromNib;
- (void)makeConstrait;
- (void)setUpCellUI;

@end

