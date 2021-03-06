//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class TPKReserveRequirementItem;

@interface SAKTravelReserveVisitorResponse : SAKDomainObject
{
    TPKReserveRequirementItem *_name;
    TPKReserveRequirementItem *_mobile;
    TPKReserveRequirementItem *_pinyin;
    TPKReserveRequirementItem *_email;
    TPKReserveRequirementItem *_address;
    TPKReserveRequirementItem *_postCode;
    TPKReserveRequirementItem *_credentials;
}

+ (id)emailJSONTransformer;
+ (id)credentialsJSONTransformer;
+ (id)postCodeJSONTransformer;
+ (id)addressJSONTransformer;
+ (id)pinyinJSONTransformer;
+ (id)mobileJSONTransformer;
+ (id)nameJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) TPKReserveRequirementItem *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) TPKReserveRequirementItem *postCode; // @synthesize postCode=_postCode;
@property(retain, nonatomic) TPKReserveRequirementItem *address; // @synthesize address=_address;
@property(retain, nonatomic) TPKReserveRequirementItem *email; // @synthesize email=_email;
@property(retain, nonatomic) TPKReserveRequirementItem *pinyin; // @synthesize pinyin=_pinyin;
@property(retain, nonatomic) TPKReserveRequirementItem *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) TPKReserveRequirementItem *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

