//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ARTreasureHuntBaseRequest.h"

@interface ARTreasureHuntGainRewardReq : ARTreasureHuntBaseRequest
{
    unsigned int _anchorUid;
    unsigned int _activityId;
    unsigned int _activityInstId;
    unsigned int _boxInstId;
}

+ (unsigned int)minType;
+ (unsigned int)maxType;
@property(nonatomic) unsigned int boxInstId; // @synthesize boxInstId=_boxInstId;
@property(nonatomic) unsigned int activityInstId; // @synthesize activityInstId=_activityInstId;
@property(nonatomic) unsigned int activityId; // @synthesize activityId=_activityId;
@property(nonatomic) unsigned int anchorUid; // @synthesize anchorUid=_anchorUid;
- (id)marshall;

@end

