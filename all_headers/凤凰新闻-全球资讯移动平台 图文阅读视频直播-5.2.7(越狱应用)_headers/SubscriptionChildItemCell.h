//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SubscriptionBaseCell.h"

@class IfengUIImageView, NSDictionary, UIButton, UIImageView, UILabel;

@interface SubscriptionChildItemCell : SubscriptionBaseCell
{
    NSDictionary *dicSourceData;
    _Bool _isSmallMode;
    _Bool _hasRecommonded;
    IfengUIImageView *_iconView;
    UILabel *_labItemName;
    UIButton *_btnRecommond;
    UILabel *_labDescription;
    UIImageView *_sepertorView;
}

+ (float)heightForCellWithIsSmallMode:(_Bool)arg1;
@property(nonatomic) _Bool hasRecommonded; // @synthesize hasRecommonded=_hasRecommonded;
@property(nonatomic) __weak UIImageView *sepertorView; // @synthesize sepertorView=_sepertorView;
@property(nonatomic) __weak UILabel *labDescription; // @synthesize labDescription=_labDescription;
@property(nonatomic) __weak UIButton *btnRecommond; // @synthesize btnRecommond=_btnRecommond;
@property(nonatomic) __weak UILabel *labItemName; // @synthesize labItemName=_labItemName;
@property(nonatomic) __weak IfengUIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool isSmallMode; // @synthesize isSmallMode=_isSmallMode;
@property(retain, nonatomic) NSDictionary *dicSourceData; // @synthesize dicSourceData;
- (void).cxx_destruct;
- (void)showArrowInsteadRecommendBtn;
- (void)handleResult:(id)arg1 isSuccess:(_Bool)arg2 isSubscribe:(_Bool)arg3;
- (void)reloadRecommondStatu;
- (void)recommondResponse;
- (void)hiddenSepertorView;
- (void)createSepertorView;
- (void)createRecommondView;
- (void)createDescriptionView;
- (void)createItemNameView;
- (void)createIconView;
- (void)reSetupViewsForSearchList;
- (void)setupSubViews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

