//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QHExamEx.h"

@class QOperation;

@interface QHExamAlbumSlim : QHExamEx
{
    QOperation *_operation;
}

- (void).cxx_destruct;
- (void)onPreProcessComplete:(id)arg1;
- (void)asyncPreProcess;
- (_Bool)disableExam;
- (void)reviewDetail;
- (void)cancelExam;
- (void)startExam;
- (_Bool)canExam;
- (int)getOrderPriority;
- (int)getCostFactor;
- (double)getTimeCost;
- (id)init;

@end

