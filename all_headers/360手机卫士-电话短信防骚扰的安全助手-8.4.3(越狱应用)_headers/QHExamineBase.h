//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class QHExamineResult;
@protocol QHExamineDelegate;

@interface QHExamineBase : NSObject
{
    int _type;
    QHExamineResult *_result;
    id <QHExamineDelegate> delegate;
    double _progress;
}

@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <QHExamineDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)createExamineResult;
- (long long)getReviewCount;
- (id)getLastReviewDate;
- (void)reviewDetail;
- (void)review;
- (void)reset;
- (void)finishExam;
- (void)cancelExam;
- (void)startExam;
- (void)willStartExam;
- (id)getResult;
- (int)getOrderPriority;
- (int)getCostFactor;
- (double)getTimeCost;
- (_Bool)isDisabled;
- (_Bool)disableExam;
- (_Bool)canExam;
- (int)getType;
- (id)initWithType:(int)arg1;
- (id)init;

@end

