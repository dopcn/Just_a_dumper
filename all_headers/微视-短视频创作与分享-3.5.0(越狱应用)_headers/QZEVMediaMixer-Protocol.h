//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, QZEVMediaGraph;
@protocol QZEVMediaAction;

@protocol QZEVMediaMixer <NSObject>
@property(retain, nonatomic) id <QZEVMediaAction> outlet;
@property(retain, nonatomic) QZEVMediaGraph *graph;
- (void)updateWithActions:(NSArray *)arg1 timeRange:(struct _QZEVMediaTimeRange)arg2;
@end

