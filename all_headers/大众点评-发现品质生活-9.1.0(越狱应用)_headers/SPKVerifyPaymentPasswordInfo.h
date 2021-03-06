//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString, SPKNoPasswordAdjustCreditInfo, SPKNoPasswordInfo, SPKVoiceVerificationInfo;

@interface SPKVerifyPaymentPasswordInfo : SAKDomainObject
{
    NSString *_title;
    SPKVoiceVerificationInfo *_voiceVerificationInfo;
    NSString *_pageTip;
    NSString *_subPageTip;
    NSString *_cancelTip;
    NSString *_forgetTip;
    long long _verifyType;
    SPKNoPasswordInfo *_noPasswordInfo;
    NSString *_submitURLString;
    SPKNoPasswordAdjustCreditInfo *_noPasswordAdjustCreditInfo;
}

+ (id)noPasswordAdjustCreditInfoJSONTransformer;
+ (id)noPasswordInfoJSONTransformer;
+ (id)voiceVerificationInfoJSONTransformer;
+ (id)predicateDictionary;
@property(retain, nonatomic) SPKNoPasswordAdjustCreditInfo *noPasswordAdjustCreditInfo; // @synthesize noPasswordAdjustCreditInfo=_noPasswordAdjustCreditInfo;
@property(copy, nonatomic) NSString *submitURLString; // @synthesize submitURLString=_submitURLString;
@property(retain, nonatomic) SPKNoPasswordInfo *noPasswordInfo; // @synthesize noPasswordInfo=_noPasswordInfo;
@property(nonatomic) long long verifyType; // @synthesize verifyType=_verifyType;
@property(copy, nonatomic) NSString *forgetTip; // @synthesize forgetTip=_forgetTip;
@property(copy, nonatomic) NSString *cancelTip; // @synthesize cancelTip=_cancelTip;
@property(copy, nonatomic) NSString *subPageTip; // @synthesize subPageTip=_subPageTip;
@property(copy, nonatomic) NSString *pageTip; // @synthesize pageTip=_pageTip;
@property(retain, nonatomic) SPKVoiceVerificationInfo *voiceVerificationInfo; // @synthesize voiceVerificationInfo=_voiceVerificationInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

