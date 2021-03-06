//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTHotelBaseFloatView.h"

#import "CTLoginWidgetDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIView;

@interface CTHotelMainNewUserCouponFloatView : CTHotelBaseFloatView <CTLoginWidgetDelegate>
{
    _Bool _isoversea;
    NSArray *_couponList;
    UIView *_containerView;
    UIView *_middleView;
    long long _tapIndex;
    NSMutableArray *_acceptCouponList;
}

@property(retain, nonatomic) NSMutableArray *acceptCouponList; // @synthesize acceptCouponList=_acceptCouponList;
@property(nonatomic) long long tapIndex; // @synthesize tapIndex=_tapIndex;
@property(retain, nonatomic) UIView *middleView; // @synthesize middleView=_middleView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool isoversea; // @synthesize isoversea=_isoversea;
@property(retain, nonatomic) NSArray *couponList; // @synthesize couponList=_couponList;
- (void).cxx_destruct;
- (void)afterLoginSuccess:(id)arg1;
- (void)closeButtonTapped;
- (void)updateView:(id)arg1;
- (void)obtainCoupon;
- (void)buttonTapped:(id)arg1;
- (void)updatePriceView:(id)arg1;
- (void)drawCouponCell:(id)arg1 viewY:(double)arg2 count:(int)arg3;
- (void)showHelpView;
- (void)dismissView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

