//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface MDNearbyFeedQueryFilter : NSObject <NSCoding>
{
    _Bool _isCustomFilter;
    _Bool _flag;
    _Bool _showDefaultSex;
    int _languageMode;
    NSString *_sex;
    long long _ageParams;
    long long _distacneFilter;
    long long _minAge;
    long long _maxAge;
    long long _defaultMinAge;
}

@property(nonatomic) long long defaultMinAge; // @synthesize defaultMinAge=_defaultMinAge;
@property(nonatomic) _Bool showDefaultSex; // @synthesize showDefaultSex=_showDefaultSex;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
@property(nonatomic) long long maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) long long minAge; // @synthesize minAge=_minAge;
@property(nonatomic) long long distacneFilter; // @synthesize distacneFilter=_distacneFilter;
@property(nonatomic) long long ageParams; // @synthesize ageParams=_ageParams;
@property(nonatomic) _Bool isCustomFilter; // @synthesize isCustomFilter=_isCustomFilter;
@property(retain, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(nonatomic) int languageMode; // @synthesize languageMode=_languageMode;
- (void).cxx_destruct;
- (void)restoreCustomFilter:(id)arg1;
- (void)restoreFilter:(id)arg1;
- (void)saveToCache:(id)arg1;
- (id)filterCachePath:(id)arg1;
- (id)customFilterCachePath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)copyFromFilter:(id)arg1;
- (void)resetFilterToDefault;
- (void)checkUserAge;
- (_Bool)isValidUser;
- (long long)userDefaultMaxAge;
- (long long)userDefaultMinAge;
- (id)description;
- (id)init;

@end

