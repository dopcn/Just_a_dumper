//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface SPKBiometricsSwitchPasswordInfo : SAKDomainObject
{
    NSString *_pageTitle;
    unsigned long long _verifyType;
    NSString *_buttonTitle;
    NSString *_tipText;
}

+ (id)predicateDictionary;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(nonatomic) unsigned long long verifyType; // @synthesize verifyType=_verifyType;
@property(copy, nonatomic) NSString *pageTitle; // @synthesize pageTitle=_pageTitle;
- (void).cxx_destruct;

@end

