//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MAYForumCity, NSDate, NSString;

@interface MAYForumUser : MTLModel <MTLJSONSerializing>
{
    int _avatarType;
    long long _userID;
    NSString *_userName;
    NSString *_avatarURLString;
    unsigned long long _gender;
    NSString *_nickName;
    NSString *_personalSignature;
    NSString *_authoritySignature;
    NSDate *_birthday;
    NSString *_occupation;
    NSString *_marriage;
    NSString *_interest;
    unsigned long long _age;
    NSString *_maoyanAge;
    unsigned long long _roleType;
    NSString *_roleInfo;
    unsigned long long _userLevel;
    NSString *_levelTitle;
    unsigned long long _userNextLevel;
    NSString *_nextTitle;
    unsigned long long _currentEXP;
    unsigned long long _nextLevelEXP;
    unsigned long long _userVIPType;
    NSString *_VIPInfo;
    unsigned long long _visitorCount;
    NSString *_postCount;
    NSString *_ticketCount;
    MAYForumCity *_city;
    NSDate *_registerTime;
    long long _celebrityId;
    NSString *_tmpNickName;
    long long _nickNameStatus;
    NSString *_tmpSignature;
    long long _signatureStatus;
    long long _userJuryLevel;
    long long _IMUid;
}

+ (id)forumUserTransformWithMTUser:(id)arg1;
+ (id)cityJSONTransformer;
+ (id)dateTransformer;
+ (id)registerTimeJSONTransformer;
+ (id)birthdayJSONTransformer;
+ (id)transformForCountNumers;
+ (id)ticketCountJSONTransformer;
+ (id)postCountJSONTransformer;
+ (id)userNameJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long IMUid; // @synthesize IMUid=_IMUid;
@property(nonatomic) long long userJuryLevel; // @synthesize userJuryLevel=_userJuryLevel;
@property(nonatomic) long long signatureStatus; // @synthesize signatureStatus=_signatureStatus;
@property(copy, nonatomic) NSString *tmpSignature; // @synthesize tmpSignature=_tmpSignature;
@property(nonatomic) long long nickNameStatus; // @synthesize nickNameStatus=_nickNameStatus;
@property(copy, nonatomic) NSString *tmpNickName; // @synthesize tmpNickName=_tmpNickName;
@property(nonatomic) long long celebrityId; // @synthesize celebrityId=_celebrityId;
@property(retain, nonatomic) NSDate *registerTime; // @synthesize registerTime=_registerTime;
@property(retain, nonatomic) MAYForumCity *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *ticketCount; // @synthesize ticketCount=_ticketCount;
@property(retain, nonatomic) NSString *postCount; // @synthesize postCount=_postCount;
@property(nonatomic) unsigned long long visitorCount; // @synthesize visitorCount=_visitorCount;
@property(retain, nonatomic) NSString *VIPInfo; // @synthesize VIPInfo=_VIPInfo;
@property(nonatomic) unsigned long long userVIPType; // @synthesize userVIPType=_userVIPType;
@property(nonatomic) unsigned long long nextLevelEXP; // @synthesize nextLevelEXP=_nextLevelEXP;
@property(nonatomic) unsigned long long currentEXP; // @synthesize currentEXP=_currentEXP;
@property(retain, nonatomic) NSString *nextTitle; // @synthesize nextTitle=_nextTitle;
@property(nonatomic) unsigned long long userNextLevel; // @synthesize userNextLevel=_userNextLevel;
@property(retain, nonatomic) NSString *levelTitle; // @synthesize levelTitle=_levelTitle;
@property(nonatomic) unsigned long long userLevel; // @synthesize userLevel=_userLevel;
@property(retain, nonatomic) NSString *roleInfo; // @synthesize roleInfo=_roleInfo;
@property(nonatomic) unsigned long long roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) NSString *maoyanAge; // @synthesize maoyanAge=_maoyanAge;
@property(nonatomic) unsigned long long age; // @synthesize age=_age;
@property(retain, nonatomic) NSString *interest; // @synthesize interest=_interest;
@property(retain, nonatomic) NSString *marriage; // @synthesize marriage=_marriage;
@property(retain, nonatomic) NSString *occupation; // @synthesize occupation=_occupation;
@property(retain, nonatomic) NSDate *birthday; // @synthesize birthday=_birthday;
@property(retain, nonatomic) NSString *authoritySignature; // @synthesize authoritySignature=_authoritySignature;
@property(retain, nonatomic) NSString *personalSignature; // @synthesize personalSignature=_personalSignature;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(nonatomic) unsigned long long gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(nonatomic) int avatarType; // @synthesize avatarType=_avatarType;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (_Bool)isCurrentUser;
- (id)VIPImage;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)init;

@end

