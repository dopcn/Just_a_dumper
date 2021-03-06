//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSBaseViewController.h"

@class KSHomepageActivityTextDataModel, KSHomepageActivityTextModel, NSArray, UIButton, UIImageView, UILabel;

@interface KSHomepageActivityTextViewController : KSBaseViewController
{
    UIImageView *_leftImageView;
    UILabel *_contentLabel;
    UIButton *_closeButton;
    KSHomepageActivityTextModel *_textModel;
    KSHomepageActivityTextDataModel *_textDataModel;
    NSArray *_lineLabelArray;
}

@property(retain, nonatomic) NSArray *lineLabelArray; // @synthesize lineLabelArray=_lineLabelArray;
@property(retain, nonatomic) KSHomepageActivityTextDataModel *textDataModel; // @synthesize textDataModel=_textDataModel;
@property(retain, nonatomic) KSHomepageActivityTextModel *textModel; // @synthesize textModel=_textModel;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void).cxx_destruct;
- (void)refreshData;
- (void)backButtonClick:(id)arg1;
- (void)closeButtonClick:(id)arg1;
- (double)heightForRecommend;
- (void)setupContentColor:(id)arg1;
- (void)setTheme;
- (void)viewDidLoad;

@end

