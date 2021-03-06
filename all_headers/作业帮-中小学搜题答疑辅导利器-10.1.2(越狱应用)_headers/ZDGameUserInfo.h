//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDApi.h"

@class NSArray, NSString, ZDGameUserInfoConfsItem, ZDGameUserInfoEventItem, ZDGameUserInfoSeasonItem;
@protocol Optional, ZDGameUserInfoAdsItem;

@interface ZDGameUserInfo : ZDApi
{
    NSString<Optional> *_http_method;
    id <Optional> _extension;
    ZDGameUserInfoConfsItem *_confs;
    long long _newTaskBox;
    long long _power;
    long long _point;
    long long _grade;
    ZDGameUserInfoSeasonItem *_season;
    long long _changeGradeTimes;
    long long _newFriends;
    long long _newAchieves;
    long long _powerMax;
    ZDGameUserInfoEventItem *_event;
    NSArray<ZDGameUserInfoAdsItem> *_ads;
}

@property(retain, nonatomic) NSArray<ZDGameUserInfoAdsItem> *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) ZDGameUserInfoEventItem *event; // @synthesize event=_event;
@property(nonatomic) long long powerMax; // @synthesize powerMax=_powerMax;
@property(nonatomic) long long newAchieves; // @synthesize newAchieves=_newAchieves;
@property(nonatomic) long long newFriends; // @synthesize newFriends=_newFriends;
@property(nonatomic) long long changeGradeTimes; // @synthesize changeGradeTimes=_changeGradeTimes;
@property(retain, nonatomic) ZDGameUserInfoSeasonItem *season; // @synthesize season=_season;
@property(nonatomic) long long grade; // @synthesize grade=_grade;
@property(nonatomic) long long point; // @synthesize point=_point;
@property(nonatomic) long long power; // @synthesize power=_power;
@property(nonatomic) long long newTaskBox; // @synthesize newTaskBox=_newTaskBox;
@property(retain, nonatomic) ZDGameUserInfoConfsItem *confs; // @synthesize confs=_confs;
@property(retain, nonatomic) id <Optional> extension; // @synthesize extension=_extension;
@property(retain, nonatomic) NSString<Optional> *http_method; // @synthesize http_method=_http_method;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end

