//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, HTLFilterAreaInfo, NSString;

@interface HTLAreaFilterParam : NSObject
{
    HTLFilterAreaInfo *_filterAreaInfo;
    long long _categoryID;
    NSString *_analyticsValue;
    unsigned long long _showType;
    long long _filterRoleType;
    NSString *_keyword;
    CLLocation *_userLocation;
    NSString *_requiredString;
}

@property(copy, nonatomic) NSString *requiredString; // @synthesize requiredString=_requiredString;
@property(retain, nonatomic) CLLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) long long filterRoleType; // @synthesize filterRoleType=_filterRoleType;
@property(nonatomic) unsigned long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *analyticsValue; // @synthesize analyticsValue=_analyticsValue;
@property(nonatomic) long long categoryID; // @synthesize categoryID=_categoryID;
@property(retain, nonatomic) HTLFilterAreaInfo *filterAreaInfo; // @synthesize filterAreaInfo=_filterAreaInfo;
- (void).cxx_destruct;
- (id)init;

@end

