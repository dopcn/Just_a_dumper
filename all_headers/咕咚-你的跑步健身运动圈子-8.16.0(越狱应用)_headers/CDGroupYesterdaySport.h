//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class CDVAvatarModel, NSString;

@interface CDGroupYesterdaySport : NSObject <NSCoding, NSCopying>
{
    NSString *_portrait;
    NSString *_content;
    long long _fightingLevel;
    NSString *_nick;
    NSString *_userID;
    CDVAvatarModel *_avatarModel;
}

+ (id)modelObjectWithDictionary:(id)arg1;
@property(retain, nonatomic) CDVAvatarModel *avatarModel; // @synthesize avatarModel=_avatarModel;
@property(retain, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) long long fightingLevel; // @synthesize fightingLevel=_fightingLevel;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *portrait; // @synthesize portrait=_portrait;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)objectOrNilForKey:(id)arg1 fromDictionary:(id)arg2;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;

@end

