//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SNBFoundation/SNBObject.h>

@class NSString, SNBBrokerOAuthConfig;

@interface SNBSecuritiesBroker : SNBObject
{
    _Bool _isMantaince;
    long long _pageType;
    SNBBrokerOAuthConfig *_oauthConfig;
    NSString *_mantainceMessage;
}

+ (id)snb_dynamic_property_attr_minAppVersion;
+ (id)snb_dynamic_property_attr_bindUrl;
+ (id)snb_dynamic_property_attr_sortID;
+ (id)snb_dynamic_property_attr_traderDesc;
+ (id)snb_dynamic_property_attr_etype;
+ (id)snb_dynamic_property_attr_tid;
+ (id)snb_dynamic_property_attr_logo;
+ (id)snb_dynamic_property_attr_name;
@property(copy, nonatomic) NSString *mantainceMessage; // @synthesize mantainceMessage=_mantainceMessage;
@property(nonatomic) _Bool isMantaince; // @synthesize isMantaince=_isMantaince;
@property(retain, nonatomic) SNBBrokerOAuthConfig *oauthConfig; // @synthesize oauthConfig=_oauthConfig;
@property(nonatomic) long long pageType; // @synthesize pageType=_pageType;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) NSString *bindUrl; // @dynamic bindUrl;
@property(copy, nonatomic) NSString *etype; // @dynamic etype;
@property(copy, nonatomic) NSString *logo; // @dynamic logo;
@property(copy, nonatomic) NSString *minAppVersion; // @dynamic minAppVersion;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned long long sortID; // @dynamic sortID;
@property(copy, nonatomic) NSString *tid; // @dynamic tid;
@property(copy, nonatomic) NSString *traderDesc; // @dynamic traderDesc;

@end

