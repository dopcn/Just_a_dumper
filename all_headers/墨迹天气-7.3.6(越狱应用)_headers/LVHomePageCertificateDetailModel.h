//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"
#import "NSCoding-Protocol.h"

@class NSNumber, NSString;

@interface LVHomePageCertificateDetailModel : MTLModel <MTLJSONSerializing, NSCoding>
{
    NSNumber *_certificateID;
    NSNumber *_certificateType;
    NSNumber *_certificateStatus;
    NSString *_idcardFrontUrl;
    NSString *_idcardBackUrl;
    NSString *_selfPortraitUrl;
    NSString *_personalCerticateUrl;
    NSString *_licenseFrontUrl;
    NSString *_organCerticateUrl;
    NSString *_certificateName;
    NSString *_failReason;
    NSString *_personalCerticateExplainUrl;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *personalCerticateExplainUrl; // @synthesize personalCerticateExplainUrl=_personalCerticateExplainUrl;
@property(retain, nonatomic) NSString *failReason; // @synthesize failReason=_failReason;
@property(retain, nonatomic) NSString *certificateName; // @synthesize certificateName=_certificateName;
@property(retain, nonatomic) NSString *organCerticateUrl; // @synthesize organCerticateUrl=_organCerticateUrl;
@property(retain, nonatomic) NSString *licenseFrontUrl; // @synthesize licenseFrontUrl=_licenseFrontUrl;
@property(retain, nonatomic) NSString *personalCerticateUrl; // @synthesize personalCerticateUrl=_personalCerticateUrl;
@property(retain, nonatomic) NSString *selfPortraitUrl; // @synthesize selfPortraitUrl=_selfPortraitUrl;
@property(retain, nonatomic) NSString *idcardBackUrl; // @synthesize idcardBackUrl=_idcardBackUrl;
@property(retain, nonatomic) NSString *idcardFrontUrl; // @synthesize idcardFrontUrl=_idcardFrontUrl;
@property(retain, nonatomic) NSNumber *certificateStatus; // @synthesize certificateStatus=_certificateStatus;
@property(retain, nonatomic) NSNumber *certificateType; // @synthesize certificateType=_certificateType;
@property(retain, nonatomic) NSNumber *certificateID; // @synthesize certificateID=_certificateID;
- (void).cxx_destruct;

@end

