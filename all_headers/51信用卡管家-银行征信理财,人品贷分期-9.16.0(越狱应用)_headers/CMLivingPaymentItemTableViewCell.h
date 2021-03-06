//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CMLivingPaymentConfigItemModel, UIImageView, UILabel;

@interface CMLivingPaymentItemTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UILabel *_promotionLabel;
    CMLivingPaymentConfigItemModel *_configItemModel;
}

@property(retain, nonatomic) CMLivingPaymentConfigItemModel *configItemModel; // @synthesize configItemModel=_configItemModel;
@property(nonatomic) __weak UILabel *promotionLabel; // @synthesize promotionLabel=_promotionLabel;
@property(nonatomic) __weak UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(nonatomic) __weak UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)updateCell:(id)arg1;
- (void)awakeFromNib;

@end

