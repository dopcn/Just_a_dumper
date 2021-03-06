//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IndexDetailBaseViewModel.h"

@class AdvCloseView, AdvInterfaceDataHandler, WeatherHomePageAdBasicView;

@interface IndexDetailAdvModel : IndexDetailBaseViewModel
{
    AdvInterfaceDataHandler *_advInterface;
    WeatherHomePageAdBasicView *_largeAdView;
    AdvCloseView *_advCloseView;
    double _cellHeight;
}

+ (Class)cellClass;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) AdvCloseView *advCloseView; // @synthesize advCloseView=_advCloseView;
@property(retain, nonatomic) WeatherHomePageAdBasicView *largeAdView; // @synthesize largeAdView=_largeAdView;
@property(retain, nonatomic) AdvInterfaceDataHandler *advInterface; // @synthesize advInterface=_advInterface;
- (void).cxx_destruct;
- (void)p_deleteAdvCloseViewWithTime:(double)arg1;
- (void)deleteAdvCloseView;
- (void)setAdvInterface:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

