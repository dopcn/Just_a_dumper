//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FspSQLogBase.h"

@class NSString;

@interface FspFirstBufferSQLog : FspSQLogBase
{
    _Bool _lian;
    int _status;
    int _videoType;
    NSString *_hashId;
    double _beginPos;
    double _bufferTime;
    double _totalBufferTime;
    NSString *_bitRate;
    NSString *_messageId;
    NSString *_type;
    NSString *_serverIP;
    NSString *_mid;
    NSString *_eid;
    NSString *_vid;
}

@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(retain, nonatomic) NSString *eid; // @synthesize eid=_eid;
@property(retain, nonatomic) NSString *mid; // @synthesize mid=_mid;
@property(retain, nonatomic) NSString *serverIP; // @synthesize serverIP=_serverIP;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) _Bool lian; // @synthesize lian=_lian;
@property(retain, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(nonatomic) int videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSString *bitRate; // @synthesize bitRate=_bitRate;
@property(nonatomic) double totalBufferTime; // @synthesize totalBufferTime=_totalBufferTime;
@property(nonatomic) double bufferTime; // @synthesize bufferTime=_bufferTime;
@property(nonatomic) double beginPos; // @synthesize beginPos=_beginPos;
@property(nonatomic) int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *hashId; // @synthesize hashId=_hashId;
- (void).cxx_destruct;
- (id)otherParamsSortedKeys;
- (id)addOtherParams:(id)arg1;
- (id)getReportURL;

@end

