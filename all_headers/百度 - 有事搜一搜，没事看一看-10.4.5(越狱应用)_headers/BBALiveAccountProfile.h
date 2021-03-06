//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface BBALiveAccountProfile : NSObject
{
    _Bool _isFollowedByUser;
    _Bool _isVip;
    NSNumber *_UID;
    NSString *_name;
    NSString *_portraitURL;
    NSString *_genderString;
    long long _followingCount;
    long long _followersCount;
}

@property(nonatomic) long long followersCount; // @synthesize followersCount=_followersCount;
@property(nonatomic) long long followingCount; // @synthesize followingCount=_followingCount;
@property(nonatomic) _Bool isVip; // @synthesize isVip=_isVip;
@property(nonatomic) _Bool isFollowedByUser; // @synthesize isFollowedByUser=_isFollowedByUser;
@property(retain, nonatomic) NSString *genderString; // @synthesize genderString=_genderString;
@property(retain, nonatomic) NSString *portraitURL; // @synthesize portraitURL=_portraitURL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *UID; // @synthesize UID=_UID;
- (void).cxx_destruct;

@end

