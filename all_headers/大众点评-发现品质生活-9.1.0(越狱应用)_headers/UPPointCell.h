//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UPCommCell.h"

@class NSMutableArray, NSString;

@interface UPPointCell : UPCommCell
{
    NSString *amount;
    NSString *maxPoint;
    NSString *canUsePoint;
    NSString *ratio;
    NSMutableArray *observers;
    double keyPath;
}

@property(nonatomic) double keyPath; // @synthesize keyPath;
@property(retain, nonatomic) NSMutableArray *observers; // @synthesize observers;
@property(retain, nonatomic) NSString *ratio; // @synthesize ratio;
@property(retain, nonatomic) NSString *canUsePoint; // @synthesize canUsePoint;
@property(retain, nonatomic) NSString *maxPoint; // @synthesize maxPoint;
@property(retain, nonatomic) NSString *amount; // @synthesize amount;
- (void).cxx_destruct;
- (void)removeAllObservers;
- (void)addOffsetObserver:(id)arg1;
- (id)changeAmount:(double)arg1;
- (void)resetFrameWithOffset:(double)arg1;
- (void)resetKeyPathWithString:(id)arg1;
- (void)shouldChangeAmout:(double)arg1;
- (id)param;
- (_Bool)isLegalLength;
- (void)resetLabelAndTip:(struct CGRect)arg1;
- (double)floatFromString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 content:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

