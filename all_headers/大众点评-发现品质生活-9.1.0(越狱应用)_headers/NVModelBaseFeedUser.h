//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSArray, NSString;

@interface NVModelBaseFeedUser : NVBaseModel
{
    long long _lUserId;
    NSString *_profileUrl;
    NSArray *_userTags;
    NSString *_userLevel;
    long long _userId;
    NSString *_source;
    NSString *_avatar;
    NSString *_userName;
}

+ (id)metaInfo;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *userLevel; // @synthesize userLevel=_userLevel;
@property(retain, nonatomic) NSArray *userTags; // @synthesize userTags=_userTags;
@property(copy, nonatomic) NSString *profileUrl; // @synthesize profileUrl=_profileUrl;
@property(nonatomic) long long lUserId; // @synthesize lUserId=_lUserId;
- (void).cxx_destruct;

@end

