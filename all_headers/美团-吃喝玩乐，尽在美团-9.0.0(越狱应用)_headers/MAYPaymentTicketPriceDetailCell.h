//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MAYPaymentPriceDetail, UILabel;

@interface MAYPaymentTicketPriceDetailCell : UIView
{
    MAYPaymentPriceDetail *_detail;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_grayLable;
}

@property(retain, nonatomic) UILabel *grayLable; // @synthesize grayLable=_grayLable;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MAYPaymentPriceDetail *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (void)setUpSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

