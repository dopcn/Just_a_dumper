//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString;
@protocol Optional, ZDApolloDayiFollowingteachersRecteachersItem, ZDApolloDayiFollowingteachersTeachersItem;

@interface ZDApolloDayiFollowingteachers : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    long long _packLeftTime;
    NSString *_givePackageBoxText;
    long long _isGivePackage;
    long long _userType;
    NSString *_topText;
    NSString *_serialNum;
    NSArray<ZDApolloDayiFollowingteachersRecteachersItem> *_recTeachers;
    long long _packType;
    NSArray<ZDApolloDayiFollowingteachersTeachersItem> *_teachers;
}

@property(retain, nonatomic) NSArray<ZDApolloDayiFollowingteachersTeachersItem> *teachers; // @synthesize teachers=_teachers;
@property(nonatomic) long long packType; // @synthesize packType=_packType;
@property(retain, nonatomic) NSArray<ZDApolloDayiFollowingteachersRecteachersItem> *recTeachers; // @synthesize recTeachers=_recTeachers;
@property(retain, nonatomic) NSString *serialNum; // @synthesize serialNum=_serialNum;
@property(retain, nonatomic) NSString *topText; // @synthesize topText=_topText;
@property(nonatomic) long long userType; // @synthesize userType=_userType;
@property(nonatomic) long long isGivePackage; // @synthesize isGivePackage=_isGivePackage;
@property(retain, nonatomic) NSString *givePackageBoxText; // @synthesize givePackageBoxText=_givePackageBoxText;
@property(nonatomic) long long packLeftTime; // @synthesize packLeftTime=_packLeftTime;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

