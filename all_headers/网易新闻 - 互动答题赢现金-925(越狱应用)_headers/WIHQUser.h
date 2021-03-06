//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WIAnchor, WIAnchorPrivate, WIUserPrivate;

@interface WIHQUser : NSObject
{
    _Bool _isAnchor;
    _Bool _isFollowing;
    _Bool _isFamily;
    NSString *_userId;
    unsigned long long _userNum;
    unsigned long long _niceUserNum;
    unsigned long long _userType;
    NSString *_nick;
    NSString *_avatar;
    unsigned long long _followCount;
    unsigned long long _followedCount;
    unsigned long long _wealthLevel;
    unsigned long long _wealthLevelBadge;
    unsigned long long _verifiedType;
    NSArray *_badgeList;
    long long _nameplateBadge;
    NSString *_intro;
    unsigned long long _sex;
    long long _familyId;
    WIAnchor *_anchor;
    WIUserPrivate *_userPrivate;
    WIAnchorPrivate *_anchorPrivate;
}

@property(retain, nonatomic) WIAnchorPrivate *anchorPrivate; // @synthesize anchorPrivate=_anchorPrivate;
@property(retain, nonatomic) WIUserPrivate *userPrivate; // @synthesize userPrivate=_userPrivate;
@property(retain, nonatomic) WIAnchor *anchor; // @synthesize anchor=_anchor;
@property(nonatomic) _Bool isFamily; // @synthesize isFamily=_isFamily;
@property(nonatomic) _Bool isFollowing; // @synthesize isFollowing=_isFollowing;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(nonatomic) long long familyId; // @synthesize familyId=_familyId;
@property(nonatomic) unsigned long long sex; // @synthesize sex=_sex;
@property(copy, nonatomic) NSString *intro; // @synthesize intro=_intro;
@property(nonatomic) long long nameplateBadge; // @synthesize nameplateBadge=_nameplateBadge;
@property(retain, nonatomic) NSArray *badgeList; // @synthesize badgeList=_badgeList;
@property(nonatomic) unsigned long long verifiedType; // @synthesize verifiedType=_verifiedType;
@property(nonatomic) unsigned long long wealthLevelBadge; // @synthesize wealthLevelBadge=_wealthLevelBadge;
@property(nonatomic) unsigned long long wealthLevel; // @synthesize wealthLevel=_wealthLevel;
@property(nonatomic) unsigned long long followedCount; // @synthesize followedCount=_followedCount;
@property(nonatomic) unsigned long long followCount; // @synthesize followCount=_followCount;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) unsigned long long userType; // @synthesize userType=_userType;
@property(nonatomic) unsigned long long niceUserNum; // @synthesize niceUserNum=_niceUserNum;
@property(nonatomic) unsigned long long userNum; // @synthesize userNum=_userNum;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

