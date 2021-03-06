//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface QNBPayVipInfo : NSObject
{
    _Bool _isVipOrVipVisitor;
    _Bool _isVip;
    _Bool _isAnnualVip;
    _Bool _canImport;
    _Bool _visitorVip;
    _Bool _isLevelUp;
    NSString *_uin;
    long long _beginTime;
    long long _endTime;
    long long _level;
    NSString *_longLogoUrl;
    NSString *_shortLogoUrl;
    NSString *_jsonData;
    NSString *_endMsg;
    NSString *_serviceType;
    long long _annualBeginTime;
    long long _annualEndTime;
    long long _isLoginCheckFail;
    long long _visitorVipBeginTime;
    long long _visitorVipEndTime;
    long long _levelUpVersion;
}

@property(nonatomic) long long levelUpVersion; // @synthesize levelUpVersion=_levelUpVersion;
@property(nonatomic) _Bool isLevelUp; // @synthesize isLevelUp=_isLevelUp;
@property(nonatomic) long long visitorVipEndTime; // @synthesize visitorVipEndTime=_visitorVipEndTime;
@property(nonatomic) long long visitorVipBeginTime; // @synthesize visitorVipBeginTime=_visitorVipBeginTime;
@property(nonatomic) _Bool visitorVip; // @synthesize visitorVip=_visitorVip;
@property(nonatomic) long long isLoginCheckFail; // @synthesize isLoginCheckFail=_isLoginCheckFail;
@property(nonatomic) long long annualEndTime; // @synthesize annualEndTime=_annualEndTime;
@property(nonatomic) long long annualBeginTime; // @synthesize annualBeginTime=_annualBeginTime;
@property(retain, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) NSString *endMsg; // @synthesize endMsg=_endMsg;
@property(nonatomic) _Bool canImport; // @synthesize canImport=_canImport;
@property(retain, nonatomic) NSString *jsonData; // @synthesize jsonData=_jsonData;
@property(retain, nonatomic) NSString *shortLogoUrl; // @synthesize shortLogoUrl=_shortLogoUrl;
@property(retain, nonatomic) NSString *longLogoUrl; // @synthesize longLogoUrl=_longLogoUrl;
@property(nonatomic) _Bool isAnnualVip; // @synthesize isAnnualVip=_isAnnualVip;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) long long beginTime; // @synthesize beginTime=_beginTime;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(nonatomic) _Bool isVipOrVipVisitor; // @synthesize isVipOrVipVisitor=_isVipOrVipVisitor;
@property(copy, nonatomic) NSString *uin; // @synthesize uin=_uin;
- (void).cxx_destruct;
- (id)description;

@end

