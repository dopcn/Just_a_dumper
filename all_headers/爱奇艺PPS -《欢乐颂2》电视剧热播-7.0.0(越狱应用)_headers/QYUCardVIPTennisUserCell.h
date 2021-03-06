//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class QYUserHeaderIconView, UIButton, UIImageView, UILabel;

@interface QYUCardVIPTennisUserCell : QYUPhoneCardBaseCell
{
    UIImageView *_goldenVIPImageView;
    UIImageView *_vipTagImageView;
    UIImageView *_vipLevelImageView;
    UIButton *_autoRenewalButton;
    UILabel *_userNameLabel;
    UILabel *_vipCodeLabel;
    UILabel *_expiredTimeLabel;
    UIImageView *_expiredImageView;
    QYUserHeaderIconView *_avatarImageView;
}

+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (void)load;
@property(retain, nonatomic) QYUserHeaderIconView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *expiredImageView; // @synthesize expiredImageView=_expiredImageView;
@property(retain, nonatomic) UILabel *expiredTimeLabel; // @synthesize expiredTimeLabel=_expiredTimeLabel;
@property(retain, nonatomic) UILabel *vipCodeLabel; // @synthesize vipCodeLabel=_vipCodeLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIButton *autoRenewalButton; // @synthesize autoRenewalButton=_autoRenewalButton;
@property(retain, nonatomic) UIImageView *vipLevelImageView; // @synthesize vipLevelImageView=_vipLevelImageView;
@property(retain, nonatomic) UIImageView *vipTagImageView; // @synthesize vipTagImageView=_vipTagImageView;
@property(retain, nonatomic) UIImageView *goldenVIPImageView; // @synthesize goldenVIPImageView=_goldenVIPImageView;
- (void).cxx_destruct;
- (void)onClicked:(id)arg1;
- (void)generateLayout;
- (void)updateCell:(id)arg1;
- (void)setCellModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

