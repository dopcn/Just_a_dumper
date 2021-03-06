//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UsedCarDetailCompanyProfileModel, UsedCarDetailStarsView;
@protocol UsedCarDetailCompanyInfoViewDelegate;

@interface UsedCarDetailCompanyInfoView : UIView
{
    id <UsedCarDetailCompanyInfoViewDelegate> _delegate;
    UIImageView *_iconView;
    UIImageView *_quanziOrdaV_View;
    UILabel *_nameLabel;
    UIView *_tagsView;
    UsedCarDetailStarsView *_starsView;
    UIButton *_infoBtn;
    UIView *_bargainingView;
    UIButton *_bargainingBtn;
    UIImageView *_bargainingImgView;
    UILabel *_bargainingTitleLabel;
    UIButton *_callBtn;
    UsedCarDetailCompanyProfileModel *_companyModel;
}

@property(retain, nonatomic) UsedCarDetailCompanyProfileModel *companyModel; // @synthesize companyModel=_companyModel;
@property(retain, nonatomic) UIButton *callBtn; // @synthesize callBtn=_callBtn;
@property(retain, nonatomic) UILabel *bargainingTitleLabel; // @synthesize bargainingTitleLabel=_bargainingTitleLabel;
@property(retain, nonatomic) UIImageView *bargainingImgView; // @synthesize bargainingImgView=_bargainingImgView;
@property(retain, nonatomic) UIButton *bargainingBtn; // @synthesize bargainingBtn=_bargainingBtn;
@property(retain, nonatomic) UIView *bargainingView; // @synthesize bargainingView=_bargainingView;
@property(retain, nonatomic) UIButton *infoBtn; // @synthesize infoBtn=_infoBtn;
@property(retain, nonatomic) UsedCarDetailStarsView *starsView; // @synthesize starsView=_starsView;
@property(retain, nonatomic) UIView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *quanziOrdaV_View; // @synthesize quanziOrdaV_View=_quanziOrdaV_View;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) __weak id <UsedCarDetailCompanyInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)resetButton:(id)arg1;
- (void)removeAllSubviewsFromView:(id)arg1;
- (void)reloadTagsViewWithArray:(id)arg1;
- (void)reloadAllSubView;
- (void)reloadViewWithData:(id)arg1;
- (void)infoAction:(id)arg1;
- (void)callAction:(id)arg1;
- (void)bargainingAction:(id)arg1;
- (void)createSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

