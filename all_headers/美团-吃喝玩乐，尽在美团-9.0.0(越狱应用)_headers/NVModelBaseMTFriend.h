//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseMTFriend : NVBaseModel
{
    NSString *_item;
    long long _disableStatus;
    long long _userId;
    NSString *_mtUserName;
    NSString *_mtAvatarUrl;
    NSString *_relationNickName;
    NSString *_relationAvatarUrl;
    long long _feedbackNum;
    long long _level;
    long long _friendType;
    NSString *_friendTypeDesc;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *friendTypeDesc; // @synthesize friendTypeDesc=_friendTypeDesc;
@property(nonatomic) long long friendType; // @synthesize friendType=_friendType;
@property(nonatomic) long long level; // @synthesize level=_level;
@property(nonatomic) long long feedbackNum; // @synthesize feedbackNum=_feedbackNum;
@property(copy, nonatomic) NSString *relationAvatarUrl; // @synthesize relationAvatarUrl=_relationAvatarUrl;
@property(copy, nonatomic) NSString *relationNickName; // @synthesize relationNickName=_relationNickName;
@property(copy, nonatomic) NSString *mtAvatarUrl; // @synthesize mtAvatarUrl=_mtAvatarUrl;
@property(copy, nonatomic) NSString *mtUserName; // @synthesize mtUserName=_mtUserName;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long disableStatus; // @synthesize disableStatus=_disableStatus;
@property(copy, nonatomic) NSString *item; // @synthesize item=_item;
- (void).cxx_destruct;

@end

