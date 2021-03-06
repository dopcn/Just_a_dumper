//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QHExamDelegate-Protocol.h"

@class NSDate, NSMutableArray, NSString, NSTimer;
@protocol QHExamMgrDelegate;

@interface QHExamMgr : NSObject <QHExamDelegate>
{
    _Bool _needExamination;
    NSTimer *_timer;
    long long _examItemCount;
    NSDate *_lastCheckDate;
    NSMutableArray *_allExamItems;
    NSMutableArray *_currentExamItems;
    NSMutableArray *_examResults;
    NSMutableArray *_otherExamResults;
    int _currentExamIndex;
    NSTimer *_progressTimer;
    int _progressCurrentTick;
    int _progressAllTick;
    double _fraction;
    int state;
    int currentExamItem;
    id <QHExamMgrDelegate> delegate;
}

+ (id)getInstance;
@property(nonatomic) __weak id <QHExamMgrDelegate> delegate; // @synthesize delegate;
@property(nonatomic) int currentExamItem; // @synthesize currentExamItem;
@property(nonatomic) int state; // @synthesize state;
- (void).cxx_destruct;
- (id)getBigImageAdsItems;
- (id)getAdsItems;
- (id)getCommercailPromotionItems;
- (id)getOtherExamResult:(int)arg1;
- (void)finishExamination;
- (void)increaseFraction:(id)arg1;
- (void)decreaseFraction:(id)arg1;
- (float)getTickProgress;
- (void)onProgressTimer:(id)arg1;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)fireStateChanged;
- (void)fireStateAnFinished;
- (void)didExamFinished:(id)arg1;
- (void)doNextExamination;
- (long long)getExamItemCount;
- (_Bool)reviewExamDetail:(int)arg1;
- (_Bool)reviewExamResult:(int)arg1;
- (_Bool)disableExam:(int)arg1;
- (_Bool)hasExamResult:(int)arg1;
- (_Bool)clearExamResult:(int)arg1;
- (float)getProgress;
- (double)getFraction;
- (long long)getAdvExamLevel;
- (id)getRiskItems;
- (_Bool)hasRisk;
- (_Bool)isExamItemExist:(int)arg1;
- (_Bool)canExamination;
- (void)setNeedExamination;
- (_Bool)isRunning;
- (void)stop;
- (void)start;
- (void)generateExamItems;
- (void)tryStart;
- (void)configExamItem;
- (void)addExamItem:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

