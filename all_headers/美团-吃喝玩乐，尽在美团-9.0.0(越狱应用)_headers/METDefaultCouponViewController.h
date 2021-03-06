//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "METBaseCouponViewController.h"

#import "SAKPortalable-Protocol.h"

@class MTOrderService, NSArray, NSDate, NSString;

@interface METDefaultCouponViewController : METBaseCouponViewController <SAKPortalable>
{
    MTOrderService *_orderService;
    NSArray *_myCouponArray;
    NSDate *_lastLoadDate;
}

@property(retain) NSDate *lastLoadDate; // @synthesize lastLoadDate=_lastLoadDate;
@property(copy, nonatomic) NSArray *myCouponArray; // @synthesize myCouponArray=_myCouponArray;
@property(retain, nonatomic) MTOrderService *orderService; // @synthesize orderService=_orderService;
- (void).cxx_destruct;
- (void)didClickMyOrderListLabel;
- (void)didTapNetworkUnreachableView;
- (void)didTapNetworkTimeoutView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showMyCoupons;
- (_Bool)canShareCouponsInOrder:(id)arg1;
- (void)reloadOrder;
- (void)loadCachedOrder;
- (void)viewDidLoad;
- (id)initWithOrder:(id)arg1;
- (id)pageDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

