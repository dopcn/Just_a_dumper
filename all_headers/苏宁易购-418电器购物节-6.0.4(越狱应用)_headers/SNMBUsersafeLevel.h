//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface SNMBUsersafeLevel : NSObject
{
    NSString *_custNum;
    NSString *_safeLevel;
    NSString *_mobileNumStat;
    NSString *_bindEmailVerifyStat;
    NSString *_safeScore;
    NSString *_defeatPercent;
    NSString *_pwdIsHigh;
    NSString *_emailIsBind;
    NSString *_mobileIsBind;
    NSString *_questionIsSet;
}

@property(retain, nonatomic) NSString *questionIsSet; // @synthesize questionIsSet=_questionIsSet;
@property(retain, nonatomic) NSString *mobileIsBind; // @synthesize mobileIsBind=_mobileIsBind;
@property(retain, nonatomic) NSString *emailIsBind; // @synthesize emailIsBind=_emailIsBind;
@property(retain, nonatomic) NSString *pwdIsHigh; // @synthesize pwdIsHigh=_pwdIsHigh;
@property(retain, nonatomic) NSString *defeatPercent; // @synthesize defeatPercent=_defeatPercent;
@property(retain, nonatomic) NSString *safeScore; // @synthesize safeScore=_safeScore;
@property(retain, nonatomic) NSString *bindEmailVerifyStat; // @synthesize bindEmailVerifyStat=_bindEmailVerifyStat;
@property(retain, nonatomic) NSString *mobileNumStat; // @synthesize mobileNumStat=_mobileNumStat;
@property(retain, nonatomic) NSString *safeLevel; // @synthesize safeLevel=_safeLevel;
@property(retain, nonatomic) NSString *custNum; // @synthesize custNum=_custNum;
- (void).cxx_destruct;
- (void)encodeFromDictionary:(id)arg1;

@end

