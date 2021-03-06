//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MDHTMLLabel, UIButton, UIImageView, UILabel, UIView, VSVoucher;

@interface VSCartNativeCouponCell : UITableViewCell
{
    UIImageView *_bgImgView;
    UIButton *_couponNameButton;
    UIButton *_selectButton;
    UIImageView *_favMarkImageView;
    UILabel *_favLabel;
    UIButton *_limitButton;
    UILabel *_postFreeLabel;
    MDHTMLLabel *_durationLabel;
    MDHTMLLabel *_reasonsLabel;
    UIImageView *_reasonImageView;
    UIButton *_reasonButton;
    UIView *_coverView;
    CDUnknownBlockType _infoButtonActionCallback;
    CDUnknownBlockType _couponNameButtonActionCallback;
    VSVoucher *_voucher;
}

@property(retain, nonatomic) VSVoucher *voucher; // @synthesize voucher=_voucher;
@property(copy, nonatomic) CDUnknownBlockType couponNameButtonActionCallback; // @synthesize couponNameButtonActionCallback=_couponNameButtonActionCallback;
@property(copy, nonatomic) CDUnknownBlockType infoButtonActionCallback; // @synthesize infoButtonActionCallback=_infoButtonActionCallback;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIButton *reasonButton; // @synthesize reasonButton=_reasonButton;
@property(retain, nonatomic) UIImageView *reasonImageView; // @synthesize reasonImageView=_reasonImageView;
@property(retain, nonatomic) MDHTMLLabel *reasonsLabel; // @synthesize reasonsLabel=_reasonsLabel;
@property(retain, nonatomic) MDHTMLLabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UILabel *postFreeLabel; // @synthesize postFreeLabel=_postFreeLabel;
@property(retain, nonatomic) UIButton *limitButton; // @synthesize limitButton=_limitButton;
@property(retain, nonatomic) UILabel *favLabel; // @synthesize favLabel=_favLabel;
@property(retain, nonatomic) UIImageView *favMarkImageView; // @synthesize favMarkImageView=_favMarkImageView;
@property(retain, nonatomic) UIButton *selectButton; // @synthesize selectButton=_selectButton;
@property(retain, nonatomic) UIButton *couponNameButton; // @synthesize couponNameButton=_couponNameButton;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (void)reasonButtonClick;
- (void)updateWithVoucher:(id)arg1 canUse:(_Bool)arg2;
- (id)replacingOccurrencesOfString:(id)arg1 array:(id)arg2;
- (void)updateReasonLabelStatus:(id)arg1;
- (void)updateCouponStatus:(_Bool)arg1;
- (void)updatePostFreeStatus:(_Bool)arg1;
- (id)fetchImage:(id)arg1 canUse:(_Bool)arg2;
- (void)updateBackgroundImageView:(id)arg1 canUse:(_Bool)arg2;
- (void)updateCoverViewStatus:(_Bool)arg1 canUse:(_Bool)arg2;
- (void)updateSelectButtonStatus:(_Bool)arg1 canUse:(_Bool)arg2;
- (void)updateDuration:(id)arg1;
- (void)updateLimitMoney:(float)arg1;
- (void)updateCouponFav:(id)arg1;
- (void)updateCouponName:(id)arg1 couponFile:(long long)arg2 categoryUrl:(id)arg3;
- (void)couponNameButtonClicked;
- (void)infoButtonClicked;
- (void)couponNameButtonCallback:(CDUnknownBlockType)arg1;
- (void)infoButtonAction:(CDUnknownBlockType)arg1;
- (void)setupView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

