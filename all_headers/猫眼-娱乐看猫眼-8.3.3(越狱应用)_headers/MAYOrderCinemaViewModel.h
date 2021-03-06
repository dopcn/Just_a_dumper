//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MAYOrderBaseViewModel.h"

@class RACSignal;

@interface MAYOrderCinemaViewModel : MAYOrderBaseViewModel
{
    RACSignal *_cinemaNameSignal;
    RACSignal *_cinemaAddrSignal;
    RACSignal *_distanceSignal;
    RACSignal *_showDistanceSignal;
    RACSignal *_telephoneSignal;
}

@property(retain, nonatomic) RACSignal *telephoneSignal; // @synthesize telephoneSignal=_telephoneSignal;
@property(retain, nonatomic) RACSignal *showDistanceSignal; // @synthesize showDistanceSignal=_showDistanceSignal;
@property(retain, nonatomic) RACSignal *distanceSignal; // @synthesize distanceSignal=_distanceSignal;
@property(retain, nonatomic) RACSignal *cinemaAddrSignal; // @synthesize cinemaAddrSignal=_cinemaAddrSignal;
@property(retain, nonatomic) RACSignal *cinemaNameSignal; // @synthesize cinemaNameSignal=_cinemaNameSignal;
- (void).cxx_destruct;
- (void)bindSignals;
- (id)initWithTrade:(id)arg1;

@end

