//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTBusinessBean.h"

@class NSString;

@interface WalletTouchPayInfoModel : CTBusinessBean
{
    NSString *requestID;
    NSString *keyGUID;
    NSString *deviceGUID;
    NSString *deviceModel;
    NSString *wifiMAC;
    NSString *deviceIMEI;
    NSString *vendorid;
    NSString *payToken;
}

@property(copy, nonatomic) NSString *payToken; // @synthesize payToken;
@property(copy, nonatomic) NSString *vendorid; // @synthesize vendorid;
@property(copy, nonatomic) NSString *deviceIMEI; // @synthesize deviceIMEI;
@property(copy, nonatomic) NSString *wifiMAC; // @synthesize wifiMAC;
@property(copy, nonatomic) NSString *deviceModel; // @synthesize deviceModel;
@property(copy, nonatomic) NSString *deviceGUID; // @synthesize deviceGUID;
@property(copy, nonatomic) NSString *keyGUID; // @synthesize keyGUID;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID;
- (void).cxx_destruct;
- (id)getPBAnnotationArray;
- (id)init;

@end

