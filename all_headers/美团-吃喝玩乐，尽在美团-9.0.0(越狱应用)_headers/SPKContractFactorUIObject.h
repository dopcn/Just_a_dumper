//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, SPKFactorDisplayUIObject;

@interface SPKContractFactorUIObject : NSObject
{
    _Bool _readonly;
    _Bool _forbiddenExtract;
    _Bool _verificationCodeSent;
    _Bool _isScanCardAvailable;
    _Bool _canUploadCardImage;
    NSString *_identifier;
    long long _type;
    SPKFactorDisplayUIObject *_factorDisplay;
    NSString *_value;
    NSString *_cardBINURLString;
    NSString *_optionIdentifier;
    NSArray *_availableOptions;
    NSString *_verificationCodeAPIURLString;
    unsigned long long _fieldType;
    double _hangingTipHeight;
}

@property(nonatomic) _Bool canUploadCardImage; // @synthesize canUploadCardImage=_canUploadCardImage;
@property(nonatomic) _Bool isScanCardAvailable; // @synthesize isScanCardAvailable=_isScanCardAvailable;
@property(nonatomic) double hangingTipHeight; // @synthesize hangingTipHeight=_hangingTipHeight;
@property(nonatomic) unsigned long long fieldType; // @synthesize fieldType=_fieldType;
@property(nonatomic) _Bool verificationCodeSent; // @synthesize verificationCodeSent=_verificationCodeSent;
@property(copy, nonatomic) NSString *verificationCodeAPIURLString; // @synthesize verificationCodeAPIURLString=_verificationCodeAPIURLString;
@property(copy, nonatomic) NSArray *availableOptions; // @synthesize availableOptions=_availableOptions;
@property(copy, nonatomic) NSString *optionIdentifier; // @synthesize optionIdentifier=_optionIdentifier;
@property(copy, nonatomic) NSString *cardBINURLString; // @synthesize cardBINURLString=_cardBINURLString;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) _Bool forbiddenExtract; // @synthesize forbiddenExtract=_forbiddenExtract;
@property(nonatomic) _Bool readonly; // @synthesize readonly=_readonly;
@property(retain, nonatomic) SPKFactorDisplayUIObject *factorDisplay; // @synthesize factorDisplay=_factorDisplay;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithContractFactor:(id)arg1;
- (id)selectedOptionValue;
- (_Bool)hasOptions;

@end

