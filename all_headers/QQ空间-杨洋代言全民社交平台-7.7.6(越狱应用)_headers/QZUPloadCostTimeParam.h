//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface QZUPloadCostTimeParam : NSObject
{
    _Bool _notFastUpload;
    double _packetBeginTime;
    double _startDataTime;
    NSMutableDictionary *_costTimeDatas;
    double _packetFileStartTime;
    double _packetFileEndTime;
}

@property(nonatomic) double packetFileEndTime; // @synthesize packetFileEndTime=_packetFileEndTime;
@property(nonatomic) double packetFileStartTime; // @synthesize packetFileStartTime=_packetFileStartTime;
@property(retain, nonatomic) NSMutableDictionary *costTimeDatas; // @synthesize costTimeDatas=_costTimeDatas;
@property(nonatomic) _Bool notFastUpload; // @synthesize notFastUpload=_notFastUpload;
@property(nonatomic) double startDataTime; // @synthesize startDataTime=_startDataTime;
@property(nonatomic) double packetBeginTime; // @synthesize packetBeginTime=_packetBeginTime;
- (void).cxx_destruct;

@end

