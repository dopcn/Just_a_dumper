//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface CDRunGroundRaceTrackRankItemEntity : NSObject
{
    long long _rangeId;
    NSString *_score;
    NSString *_userId;
    NSString *_userNick;
    NSString *_userPortrait;
    NSString *_userVipSmall;
    NSString *_userVipInfo;
    NSString *_routeId;
}

+ (id)modelCustomPropertyMapper;
@property(copy, nonatomic) NSString *routeId; // @synthesize routeId=_routeId;
@property(copy, nonatomic) NSString *userVipInfo; // @synthesize userVipInfo=_userVipInfo;
@property(copy, nonatomic) NSString *userVipSmall; // @synthesize userVipSmall=_userVipSmall;
@property(copy, nonatomic) NSString *userPortrait; // @synthesize userPortrait=_userPortrait;
@property(copy, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(nonatomic) long long rangeId; // @synthesize rangeId=_rangeId;
- (void).cxx_destruct;

@end

