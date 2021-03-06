//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "JMPayCenterCellProtocol-Protocol.h"

@class JMPayCenterAddressInfoCellViewModel, NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface JMPayCenterAddressInfoCell : UITableViewCell <JMPayCenterCellProtocol>
{
    UILabel *_defaultAddressLabel;
    UILabel *_receiverNameLabel;
    UILabel *_mobileLabel;
    UILabel *_addressLabel;
    UILabel *_idNumCheckLabel;
    UILabel *_identifyNumberLabel;
    UILabel *_noneAddressLabel;
    UIView *_emptyAddressView;
    UIView *_addressView;
    UIImageView *_addressArror;
    NSLayoutConstraint *_defaultAddressViewWidth;
    NSLayoutConstraint *_idNumCheckLabelWidth;
    NSLayoutConstraint *_identifyNumberHeight;
    NSLayoutConstraint *_identifyNumberBottom;
    JMPayCenterAddressInfoCellViewModel *_viewModel;
}

+ (double)heightForViewModel:(id)arg1 atIndex:(id)arg2 tableView:(id)arg3;
+ (id)nib;
+ (id)identifier;
@property(retain, nonatomic) JMPayCenterAddressInfoCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak NSLayoutConstraint *identifyNumberBottom; // @synthesize identifyNumberBottom=_identifyNumberBottom;
@property(nonatomic) __weak NSLayoutConstraint *identifyNumberHeight; // @synthesize identifyNumberHeight=_identifyNumberHeight;
@property(nonatomic) __weak NSLayoutConstraint *idNumCheckLabelWidth; // @synthesize idNumCheckLabelWidth=_idNumCheckLabelWidth;
@property(nonatomic) __weak NSLayoutConstraint *defaultAddressViewWidth; // @synthesize defaultAddressViewWidth=_defaultAddressViewWidth;
@property(nonatomic) __weak UIImageView *addressArror; // @synthesize addressArror=_addressArror;
@property(nonatomic) __weak UIView *addressView; // @synthesize addressView=_addressView;
@property(nonatomic) __weak UIView *emptyAddressView; // @synthesize emptyAddressView=_emptyAddressView;
@property(nonatomic) __weak UILabel *noneAddressLabel; // @synthesize noneAddressLabel=_noneAddressLabel;
@property(nonatomic) __weak UILabel *identifyNumberLabel; // @synthesize identifyNumberLabel=_identifyNumberLabel;
@property(nonatomic) __weak UILabel *idNumCheckLabel; // @synthesize idNumCheckLabel=_idNumCheckLabel;
@property(nonatomic) __weak UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(nonatomic) __weak UILabel *mobileLabel; // @synthesize mobileLabel=_mobileLabel;
@property(nonatomic) __weak UILabel *receiverNameLabel; // @synthesize receiverNameLabel=_receiverNameLabel;
@property(nonatomic) __weak UILabel *defaultAddressLabel; // @synthesize defaultAddressLabel=_defaultAddressLabel;
- (void).cxx_destruct;
- (void)updateCellHeightWithViewModel:(id)arg1;
- (void)updateCellWithViewModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

