//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface MLConferenceListItem : NSObject
{
    int _age;
    int _online_type;
    NSString *_momoid;
    NSString *_userName;
    NSString *_avatarString;
    NSString *_score_str;
    long long _score;
    NSDate *_startTime;
    long long _charmsNum;
    long long _fortuneNum;
    long long _thumbs;
    NSString *_sex;
    NSArray *_rankingPhoto;
    unsigned long long _publisherType;
    NSString *_src;
    long long _richLevel;
    unsigned long long _state;
}

+ (id)itemWithDictionary:(id)arg1;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(nonatomic) long long richLevel; // @synthesize richLevel=_richLevel;
@property(retain, nonatomic) NSString *src; // @synthesize src=_src;
@property(nonatomic) int online_type; // @synthesize online_type=_online_type;
@property(nonatomic) unsigned long long publisherType; // @synthesize publisherType=_publisherType;
@property(copy, nonatomic) NSArray *rankingPhoto; // @synthesize rankingPhoto=_rankingPhoto;
@property(nonatomic) int age; // @synthesize age=_age;
@property(retain, nonatomic) NSString *sex; // @synthesize sex=_sex;
@property(nonatomic) long long thumbs; // @synthesize thumbs=_thumbs;
@property(nonatomic) long long fortuneNum; // @synthesize fortuneNum=_fortuneNum;
@property(nonatomic) long long charmsNum; // @synthesize charmsNum=_charmsNum;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *score_str; // @synthesize score_str=_score_str;
@property(copy, nonatomic) NSString *avatarString; // @synthesize avatarString=_avatarString;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *momoid; // @synthesize momoid=_momoid;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

