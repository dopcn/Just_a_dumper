//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YoyoRecord.h"

@class NSMutableArray, YoyoChatMsgGiftRecord, YoyoRect, YoyoRoomDanmuItemView;

@interface YoyoRoomDanmuItemRecord : YoyoRecord
{
    _Bool _follow;
    double _currentSpeedMs;
    double _speedMs;
    double _followSpeedMs;
    long long _line;
    YoyoRect *_bounds;
    double _intevalDistance;
    YoyoChatMsgGiftRecord *_danmuRecord;
    YoyoRoomDanmuItemView *_itemView;
    long long _lastUpdateTimeMs;
    double _flyPercent;
    YoyoRoomDanmuItemRecord *_followingRecord;
    NSMutableArray *_followedMeRecords;
}

@property(retain, nonatomic) NSMutableArray *followedMeRecords; // @synthesize followedMeRecords=_followedMeRecords;
@property(nonatomic) __weak YoyoRoomDanmuItemRecord *followingRecord; // @synthesize followingRecord=_followingRecord;
@property(nonatomic) double flyPercent; // @synthesize flyPercent=_flyPercent;
@property(nonatomic) long long lastUpdateTimeMs; // @synthesize lastUpdateTimeMs=_lastUpdateTimeMs;
@property(retain, nonatomic) YoyoRoomDanmuItemView *itemView; // @synthesize itemView=_itemView;
@property(retain, nonatomic) YoyoChatMsgGiftRecord *danmuRecord; // @synthesize danmuRecord=_danmuRecord;
@property(nonatomic) double intevalDistance; // @synthesize intevalDistance=_intevalDistance;
@property(retain, nonatomic) YoyoRect *bounds; // @synthesize bounds=_bounds;
@property(nonatomic) long long line; // @synthesize line=_line;
@property(nonatomic) double followSpeedMs; // @synthesize followSpeedMs=_followSpeedMs;
@property(nonatomic) double speedMs; // @synthesize speedMs=_speedMs;
@property(nonatomic) double currentSpeedMs; // @synthesize currentSpeedMs=_currentSpeedMs;
@property(nonatomic) _Bool follow; // @synthesize follow=_follow;
- (void).cxx_destruct;
- (_Bool)isOutScreen;
- (void)onUpdate;
- (double)h;
- (void)setH:(double)arg1;
- (double)w;
- (void)setW:(double)arg1;
- (double)y;
- (void)setY:(double)arg1;
- (double)x;
- (void)setX:(double)arg1;
- (void)onScreenOrientationChangedToHorizontal:(_Bool)arg1;
- (void)onInit;
- (void)invalidate;

@end

