//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNNaviMsgBase.h"

@class NSString;

@interface BNaviExitFastWayBoard : BNNaviMsgBase
{
    int _eAction;
    NSString *_exitFastwayRoadName;
    NSString *_exitFastwayID;
    unsigned long long _startDist;
    unsigned long long _remainDist;
}

@property(nonatomic) unsigned long long remainDist; // @synthesize remainDist=_remainDist;
@property(nonatomic) unsigned long long startDist; // @synthesize startDist=_startDist;
@property(copy, nonatomic) NSString *exitFastwayID; // @synthesize exitFastwayID=_exitFastwayID;
@property(copy, nonatomic) NSString *exitFastwayRoadName; // @synthesize exitFastwayRoadName=_exitFastwayRoadName;
@property(nonatomic) int eAction; // @synthesize eAction=_eAction;
- (void).cxx_destruct;

@end

