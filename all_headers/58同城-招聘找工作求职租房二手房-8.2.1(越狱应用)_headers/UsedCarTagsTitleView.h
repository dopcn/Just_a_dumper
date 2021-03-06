//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBDetailBaseViewTemplate.h"

@class NSDictionary, NSLayoutConstraint, NSString, PkView, UIImageView, UILabel, UIView, UsedCarPriceAnalyseView, UsedCarTagsTitleInstalmentView, UsedCarTagsTitlePriceView, UsedCarTagsTitleViewModel;

@interface UsedCarTagsTitleView : WBDetailBaseViewTemplate
{
    PkView *_pkView;
    UIView *_sline;
    UIImageView *_titleIconImageView;
    UILabel *_titleLabel;
    UIView *_tagsContentView;
    NSLayoutConstraint *_tagsContentViewHeightConstraint;
    UsedCarTagsTitlePriceView *_priceInfoView;
    NSLayoutConstraint *_priceInfoViewTopConstraint;
    NSLayoutConstraint *_priceInfoViewHeightConstraint;
    UsedCarTagsTitleInstalmentView *_instalmentView;
    UsedCarPriceAnalyseView *_priceAnalyseView;
    UsedCarTagsTitleViewModel *_model;
    NSDictionary *_compare_info;
    NSDictionary *_compareAction;
    NSString *_compareLabelText;
    NSString *_compareLogType;
}

+ (id)configDictOfTitleLabelWithIcon:(_Bool)arg1;
+ (double)heightForPriceViewWithModel:(id)arg1;
+ (double)heightForMultiLineCarTags:(id)arg1;
+ (double)heightForCarTitle:(id)arg1;
+ (double)computeHeightWithCellData:(id)arg1;
@property(copy, nonatomic) NSString *compareLogType; // @synthesize compareLogType=_compareLogType;
@property(copy, nonatomic) NSString *compareLabelText; // @synthesize compareLabelText=_compareLabelText;
@property(retain, nonatomic) NSDictionary *compareAction; // @synthesize compareAction=_compareAction;
@property(retain, nonatomic) NSDictionary *compare_info; // @synthesize compare_info=_compare_info;
@property(retain, nonatomic) UsedCarTagsTitleViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UsedCarPriceAnalyseView *priceAnalyseView; // @synthesize priceAnalyseView=_priceAnalyseView;
@property(retain, nonatomic) UsedCarTagsTitleInstalmentView *instalmentView; // @synthesize instalmentView=_instalmentView;
@property(retain, nonatomic) NSLayoutConstraint *priceInfoViewHeightConstraint; // @synthesize priceInfoViewHeightConstraint=_priceInfoViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *priceInfoViewTopConstraint; // @synthesize priceInfoViewTopConstraint=_priceInfoViewTopConstraint;
@property(retain, nonatomic) UsedCarTagsTitlePriceView *priceInfoView; // @synthesize priceInfoView=_priceInfoView;
@property(retain, nonatomic) NSLayoutConstraint *tagsContentViewHeightConstraint; // @synthesize tagsContentViewHeightConstraint=_tagsContentViewHeightConstraint;
@property(retain, nonatomic) UIView *tagsContentView; // @synthesize tagsContentView=_tagsContentView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *titleIconImageView; // @synthesize titleIconImageView=_titleIconImageView;
@property(retain, nonatomic) UIView *sline; // @synthesize sline=_sline;
@property(retain, nonatomic) PkView *pkView; // @synthesize pkView=_pkView;
- (void).cxx_destruct;
- (void)carNewTitleTapClick:(id)arg1;
- (void)instamentViewClick:(id)arg1;
- (void)configMultiLineCarTags:(id)arg1;
- (void)configWidgetViewData:(id)arg1 AtIndexPath:(id)arg2;
- (void)prepareWidgetViewWithData:(id)arg1 withCurrentIndexPath:(id)arg2;
- (void)initSubViews;
- (void)bindAction:(SEL)arg1 toTarget:(id)arg2 atView:(id)arg3;
- (void)bindAction:(SEL)arg1 atView:(id)arg2;
- (void)compareViewClick:(id)arg1;
- (void)awakeFromNib;

@end

