//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDBaseModel.h"

@class NSArray, NSString;

@interface PD_LOGAN_HlInfoEntity : PDBaseModel
{
    long long _identify;
    NSString *_headlineType;
    NSString *_showType;
    NSArray *_images;
    NSString *_title;
    long long _publisherId;
    NSString *_nick;
    NSString *_avatar;
    long long _gmtCreated;
    long long _commentNum;
    long long _praiseNum;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long praiseNum; // @synthesize praiseNum=_praiseNum;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(nonatomic) long long gmtCreated; // @synthesize gmtCreated=_gmtCreated;
@property(retain, nonatomic) NSString *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(nonatomic) long long publisherId; // @synthesize publisherId=_publisherId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *showType; // @synthesize showType=_showType;
@property(retain, nonatomic) NSString *headlineType; // @synthesize headlineType=_headlineType;
@property(nonatomic) long long identify; // @synthesize identify=_identify;
- (void).cxx_destruct;

@end

