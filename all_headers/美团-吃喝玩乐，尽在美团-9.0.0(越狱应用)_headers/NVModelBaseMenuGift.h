//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVBaseModel.h"

@class NSString;

@interface NVModelBaseMenuGift : NVBaseModel
{
    NSString *_activityTime;
    long long _dishId;
    NSString *_name;
    long long _giftId;
    long long _actId;
    long long _genusType;
}

+ (id)metaInfo;
@property(nonatomic) long long genusType; // @synthesize genusType=_genusType;
@property(nonatomic) long long actId; // @synthesize actId=_actId;
@property(nonatomic) long long giftId; // @synthesize giftId=_giftId;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) long long dishId; // @synthesize dishId=_dishId;
@property(copy, nonatomic) NSString *activityTime; // @synthesize activityTime=_activityTime;
- (void).cxx_destruct;

@end

