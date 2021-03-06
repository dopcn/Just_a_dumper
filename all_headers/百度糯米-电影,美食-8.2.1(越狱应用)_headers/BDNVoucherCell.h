//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BDNVoucherJSONModel, TTTAttributedLabel, UIButton, UIImageView, UILabel, UIScrollView, UIView;
@protocol BDNVoucherCellDelegate;

@interface BDNVoucherCell : UITableViewCell
{
    UIView *_container;
    UIImageView *_bgImageView;
    int _type;
    TTTAttributedLabel *_labValue;
    UIButton *_btnSelect;
    UIView *_unableSign;
    UILabel *_labUnable;
    UIScrollView *_conditionsContainer;
    UILabel *_labExpires;
    UILabel *_labSource;
    _Bool _hideSource;
    id <BDNVoucherCellDelegate> _delegate;
    BDNVoucherJSONModel *_voucher;
}

@property(retain, nonatomic) BDNVoucherJSONModel *voucher; // @synthesize voucher=_voucher;
@property(nonatomic) __weak id <BDNVoucherCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)hideVoucherSource;
- (void)setTouchActionTitile:(id)arg1 numberOfLines:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setUserSelectedCell:(_Bool)arg1;
- (void)setSelectedVoucher:(_Bool)arg1;
- (void)onSelectVoucher;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 type:(int)arg3;

@end

