//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBaseComProtocol-Protocol.h"
#import "SFormDelegate-Protocol.h"
#import "SHomeBubbleDelegate-Protocol.h"
#import "SOrderHookDelegate-Protocol.h"
#import "SPageSetDelegate-Protocol.h"

@class SStationInfoCom;

@protocol SStationInfoComDelegate <SBaseComProtocol, SHomeBubbleDelegate, SFormDelegate, SPageSetDelegate, SOrderHookDelegate>
- (void)clearStationRadarView;
- (void)stationInfoCom:(SStationInfoCom *)arg1 isStation:(_Bool)arg2;
@end

