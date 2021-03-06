//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBBaseDetailTableViewCell.h"

@class NSArray, NSLayoutConstraint, SCHGQQBindSpecificCellModel, UIImageView, UILabel, UIView;

@interface SCHGQQBindSpecificCell : WBBaseDetailTableViewCell
{
    UIImageView *_avatarBGImageView;
    UIImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    NSArray *_infoItemImageViewCollection;
    NSArray *_infoItemLabelCollection;
    UIView *_alertInfoView;
    UIImageView *_alertInfoBGImageView;
    UILabel *_alertInfoLabel;
    NSArray *_infoItemXPosConstaintCollection;
    NSArray *_productButtonCollection;
    NSArray *_productPriceLabelCollection;
    NSArray *_productDateLabelCollection;
    NSLayoutConstraint *_alertInfoViewFixedConstaint;
    NSLayoutConstraint *_productButtonHeightFixedConstaint;
    NSLayoutConstraint *_alertInfoViewWidthFixedConstaint;
    SCHGQQBindSpecificCellModel *_model;
}

+ (double)computeHeightWithCellData:(id)arg1;
@property(retain, nonatomic) SCHGQQBindSpecificCellModel *model; // @synthesize model=_model;
@property(nonatomic) NSLayoutConstraint *alertInfoViewWidthFixedConstaint; // @synthesize alertInfoViewWidthFixedConstaint=_alertInfoViewWidthFixedConstaint;
@property(nonatomic) NSLayoutConstraint *productButtonHeightFixedConstaint; // @synthesize productButtonHeightFixedConstaint=_productButtonHeightFixedConstaint;
@property(nonatomic) NSLayoutConstraint *alertInfoViewFixedConstaint; // @synthesize alertInfoViewFixedConstaint=_alertInfoViewFixedConstaint;
@property(retain, nonatomic) NSArray *productDateLabelCollection; // @synthesize productDateLabelCollection=_productDateLabelCollection;
@property(retain, nonatomic) NSArray *productPriceLabelCollection; // @synthesize productPriceLabelCollection=_productPriceLabelCollection;
@property(retain, nonatomic) NSArray *productButtonCollection; // @synthesize productButtonCollection=_productButtonCollection;
@property(retain, nonatomic) NSArray *infoItemXPosConstaintCollection; // @synthesize infoItemXPosConstaintCollection=_infoItemXPosConstaintCollection;
@property(nonatomic) UILabel *alertInfoLabel; // @synthesize alertInfoLabel=_alertInfoLabel;
@property(nonatomic) UIImageView *alertInfoBGImageView; // @synthesize alertInfoBGImageView=_alertInfoBGImageView;
@property(nonatomic) UIView *alertInfoView; // @synthesize alertInfoView=_alertInfoView;
@property(retain, nonatomic) NSArray *infoItemLabelCollection; // @synthesize infoItemLabelCollection=_infoItemLabelCollection;
@property(retain, nonatomic) NSArray *infoItemImageViewCollection; // @synthesize infoItemImageViewCollection=_infoItemImageViewCollection;
@property(nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) UIImageView *avatarBGImageView; // @synthesize avatarBGImageView=_avatarBGImageView;
- (void).cxx_destruct;
- (void)configItemImgViewWithServerUrl:(id)arg1 withButton:(id)arg2;
- (void)configItemImgViewWithServerUrl:(id)arg1 withImgView:(id)arg2;
- (void)configCellViewData:(id)arg1 AtIndexPath:(id)arg2;
- (void)prepareCellViewWithData:(id)arg1 withCurrentIndexPath:(id)arg2;
- (void)clickProductButton:(id)arg1;
- (void)clickTopAreaAction:(id)arg1;
- (void)awakeFromNib;

@end

