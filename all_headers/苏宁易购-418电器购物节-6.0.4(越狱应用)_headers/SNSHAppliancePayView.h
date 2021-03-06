//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "SNSHICPSPriceServiceDelegate-Protocol.h"

@class NSString, SNSHICPSPriceRequest, SNUIImageViewEx, UIImageView, UILabel, UIView;

@interface SNSHAppliancePayView : UIControl <SNSHICPSPriceServiceDelegate>
{
    SNUIImageViewEx *_productView;
    UILabel *_titleLabel;
    UILabel *_detailTitleLabel;
    UILabel *_sellOutLabel;
    UIImageView *_sellOutView;
    UIView *_topLineView;
    UILabel *_originalLabel;
    UILabel *_discountLabel;
    SNSHICPSPriceRequest *_icpsRequest;
}

@property(retain, nonatomic) SNSHICPSPriceRequest *icpsRequest; // @synthesize icpsRequest=_icpsRequest;
@property(retain, nonatomic) UILabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) UILabel *originalLabel; // @synthesize originalLabel=_originalLabel;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UIImageView *sellOutView; // @synthesize sellOutView=_sellOutView;
@property(retain, nonatomic) UILabel *sellOutLabel; // @synthesize sellOutLabel=_sellOutLabel;
@property(retain, nonatomic) UILabel *detailTitleLabel; // @synthesize detailTitleLabel=_detailTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SNUIImageViewEx *productView; // @synthesize productView=_productView;
- (void).cxx_destruct;
- (void)serviceCompleteWithDict:(id)arg1;
- (id)getGoodsPrice:(id)arg1;
- (void)refreshData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

