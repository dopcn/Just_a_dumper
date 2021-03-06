//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BDNAlertViewDelegate-Protocol.h"

@class UILabel;
@protocol BDNCouponRefundInfoViewDelegate;

@interface BDNCouponRefundInfoView : UIView <BDNAlertViewDelegate>
{
    long long _statusFlag;
    long long _styleFlag;
    id <BDNCouponRefundInfoViewDelegate> _bdnCouponRefundInfoViewDelegate;
    UILabel *_titleLabel;
    UILabel *_timeLabel;
    UILabel *_infoLabel;
}

@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <BDNCouponRefundInfoViewDelegate> bdnCouponRefundInfoViewDelegate; // @synthesize bdnCouponRefundInfoViewDelegate=_bdnCouponRefundInfoViewDelegate;
- (void).cxx_destruct;
- (void)didTapLabelWithGesture:(id)arg1;
- (void)disPlayWith:(id)arg1 withStatus:(long long)arg2 withStyle:(long long)arg3;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)initBaseView;
- (void)initBaseData;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

