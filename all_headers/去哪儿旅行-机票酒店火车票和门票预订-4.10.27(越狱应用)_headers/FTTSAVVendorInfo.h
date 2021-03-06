//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface FTTSAVVendorInfo : NSObject
{
    NSString *_wrapperid;
    NSString *_cabinDes;
    NSString *_domain;
    NSString *_provider;
    NSString *_providerTelephone;
    NSString *_providerLogo;
    NSString *_site;
    NSNumber *_otaType;
    NSString *_contentKey;
}

@property(readonly, nonatomic, getter=contentKey) NSString *contentKey; // @synthesize contentKey=_contentKey;
@property(readonly, nonatomic, getter=otaType) NSNumber *otaType; // @synthesize otaType=_otaType;
@property(readonly, nonatomic, getter=site) NSString *site; // @synthesize site=_site;
@property(readonly, nonatomic, getter=vendorLogo) NSString *providerLogo; // @synthesize providerLogo=_providerLogo;
@property(readonly, nonatomic, getter=vendorPhone) NSString *providerTelephone; // @synthesize providerTelephone=_providerTelephone;
@property(readonly, nonatomic, getter=vendorName) NSString *provider; // @synthesize provider=_provider;
@property(readonly, nonatomic, getter=domain) NSString *domain; // @synthesize domain=_domain;
@property(readonly, nonatomic, getter=cabinDes) NSString *cabinDes; // @synthesize cabinDes=_cabinDes;
@property(readonly, nonatomic, getter=wrapperid) NSString *wrapperid; // @synthesize wrapperid=_wrapperid;
- (void).cxx_destruct;

@end

