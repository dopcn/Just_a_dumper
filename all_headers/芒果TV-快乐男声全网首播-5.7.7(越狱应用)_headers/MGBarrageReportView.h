//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SlideChoiceView.h"

@class HNTVBarrageDataManager, HNTVReadBarrageBody;

@interface MGBarrageReportView : SlideChoiceView
{
    HNTVBarrageDataManager *_dataManager;
    HNTVReadBarrageBody *_barrage;
}

@property(retain, nonatomic) HNTVReadBarrageBody *barrage; // @synthesize barrage=_barrage;
@property(nonatomic) __weak HNTVBarrageDataManager *dataManager; // @synthesize dataManager=_dataManager;
- (void).cxx_destruct;
- (void)reportAction;
- (void)setUpWithBarrage:(id)arg1;
- (id)initWithBarrage:(id)arg1;

@end

