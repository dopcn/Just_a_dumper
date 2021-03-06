//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPAbnormalMatBaseModel.h"

@class NSArray, NSMutableArray, NSString, NSTimer;

@interface SHVP1200MatModel : SHVPAbnormalMatBaseModel
{
    NSMutableArray *_performInfoArray;
    _Bool _isPerforming;
    _Bool _isNotFirst;
    NSArray *_performInfo;
    double _startInitPlayer;
    double _finishInitPlayer;
    NSString *_playerInitTime;
    NSTimer *_collectTimer;
    NSTimer *_uploadTimer;
}

@property(nonatomic) _Bool isNotFirst; // @synthesize isNotFirst=_isNotFirst;
@property(retain, nonatomic) NSTimer *uploadTimer; // @synthesize uploadTimer=_uploadTimer;
@property(retain, nonatomic) NSTimer *collectTimer; // @synthesize collectTimer=_collectTimer;
@property(nonatomic) _Bool isPerforming; // @synthesize isPerforming=_isPerforming;
@property(copy, nonatomic) NSString *playerInitTime; // @synthesize playerInitTime=_playerInitTime;
@property(nonatomic) double finishInitPlayer; // @synthesize finishInitPlayer=_finishInitPlayer;
@property(nonatomic) double startInitPlayer; // @synthesize startInitPlayer=_startInitPlayer;
@property(retain, nonatomic) NSArray *performInfo; // @synthesize performInfo=_performInfo;
- (void).cxx_destruct;
- (double)getPlayInitTime;
- (void)addPerformData:(id)arg1;
- (_Bool)isValid;
- (id)abnormalErrorInfo;
- (void)finishedCurrentPerformalMat;
- (void)invalidTimerRelatedPerformalMAT;
- (void)performalInfoTimerStart;
- (id)initWithErrorCode:(long long)arg1 roomId:(id)arg2;

@end

