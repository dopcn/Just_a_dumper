//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "NVBaseCellProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface OSSShopInfoFoodBookSeatsCell : UITableViewCell <NVBaseCellProtocol>
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_priceLabel;
    UILabel *_countLabel;
}

+ (double)cellHeight:(id)arg1;
+ (id)cellReuseId:(id)arg1;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (id)priceAttributeString:(id)arg1;
- (void)setData:(id)arg1;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

