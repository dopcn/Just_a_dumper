//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, NSString, SPKContractFactorDisplay;

@interface SPKContractFactor : SAKDomainObject
{
    _Bool _readonly;
    _Bool _forbiddenExtract;
    _Bool _verificationCodeSent;
    int _type;
    NSString *_identifier;
    SPKContractFactorDisplay *_factorDisplay;
    NSString *_cardBINURLString;
    NSString *_value;
    NSString *_optionIdentifier;
    NSArray *_availableOptions;
    NSString *_verificationCodeAPIURLString;
}

+ (id)availableOptionsJSONTransformer;
+ (id)factorDisplayJSONTransformer;
+ (id)predicateDictionary;
@property(nonatomic) _Bool verificationCodeSent; // @synthesize verificationCodeSent=_verificationCodeSent;
@property(copy, nonatomic) NSString *verificationCodeAPIURLString; // @synthesize verificationCodeAPIURLString=_verificationCodeAPIURLString;
@property(copy, nonatomic) NSArray *availableOptions; // @synthesize availableOptions=_availableOptions;
@property(copy, nonatomic) NSString *optionIdentifier; // @synthesize optionIdentifier=_optionIdentifier;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *cardBINURLString; // @synthesize cardBINURLString=_cardBINURLString;
@property(nonatomic) _Bool forbiddenExtract; // @synthesize forbiddenExtract=_forbiddenExtract;
@property(nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(retain, nonatomic) SPKContractFactorDisplay *factorDisplay; // @synthesize factorDisplay=_factorDisplay;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

