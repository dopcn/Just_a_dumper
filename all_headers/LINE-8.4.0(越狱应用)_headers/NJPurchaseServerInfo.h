//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL;

@interface NJPurchaseServerInfo : NSObject
{
    NSURL *mShopServerURL;
    NSURL *mBillingServerURL;
    NSURL *mBillingOrderIdSettingURL;
    long long mShopPayloadType;
    long long mBillingPayloadType;
}

+ (id)purchaseServerInfoWithBillingOrderIdSettingURL:(id)arg1;
+ (id)purchaseServerInfoWithShopServerURL:(id)arg1 billingServerURL:(id)arg2;
@property(nonatomic) long long billingPayloadType; // @synthesize billingPayloadType=mBillingPayloadType;
@property(nonatomic) long long shopPayloadType; // @synthesize shopPayloadType=mShopPayloadType;
@property(readonly, nonatomic) NSURL *billingOrderIdSettingURL; // @synthesize billingOrderIdSettingURL=mBillingOrderIdSettingURL;
@property(readonly, nonatomic) NSURL *billingServerURL; // @synthesize billingServerURL=mBillingServerURL;
@property(readonly, nonatomic) NSURL *shopServerURL; // @synthesize shopServerURL=mShopServerURL;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) _Bool validate;
- (id)requestVerifyReceiptURLWithOrderId:(id)arg1 debugInfo:(id)arg2;
@property(readonly, copy, nonatomic) NSURL *billingServerDomain;
- (id)initWithShopServerURL:(id)arg1 billingServerURL:(id)arg2 billingOrderIdSettingURL:(id)arg3;

@end

