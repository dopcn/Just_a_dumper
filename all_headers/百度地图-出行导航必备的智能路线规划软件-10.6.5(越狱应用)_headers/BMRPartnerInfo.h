//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IphoneComFramework/JSONModel.h>

@class NSString;

@interface BMRPartnerInfo : JSONModel
{
    NSString *_partner_id;
    NSString *_partner_name;
    NSString *_partner_desc;
    NSString *_partner_desc_exta;
    NSString *_logo_url;
    NSString *_discount_desc;
    NSString *_discount_desc_extra;
    NSString *_dynamic_desc_rich;
    NSString *_price_desc;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(retain, nonatomic) NSString *price_desc; // @synthesize price_desc=_price_desc;
@property(retain, nonatomic) NSString *dynamic_desc_rich; // @synthesize dynamic_desc_rich=_dynamic_desc_rich;
@property(retain, nonatomic) NSString *discount_desc_extra; // @synthesize discount_desc_extra=_discount_desc_extra;
@property(retain, nonatomic) NSString *discount_desc; // @synthesize discount_desc=_discount_desc;
@property(retain, nonatomic) NSString *logo_url; // @synthesize logo_url=_logo_url;
@property(retain, nonatomic) NSString *partner_desc_exta; // @synthesize partner_desc_exta=_partner_desc_exta;
@property(retain, nonatomic) NSString *partner_desc; // @synthesize partner_desc=_partner_desc;
@property(retain, nonatomic) NSString *partner_name; // @synthesize partner_name=_partner_name;
@property(retain, nonatomic) NSString *partner_id; // @synthesize partner_id=_partner_id;
- (void).cxx_destruct;

@end

