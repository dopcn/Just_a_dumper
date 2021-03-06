//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKTableViewItem.h"

@class RACSignal, TPKDestinationMapSearchFilterGroupViewModel, TPKDestinationMapSearchPOIInfoViewModel;

@interface TPKDestinationMapSearchItem : TPKTableViewItem
{
    TPKDestinationMapSearchPOIInfoViewModel *_poiInfoViewModel;
    TPKDestinationMapSearchFilterGroupViewModel *_filterGroupViewModel;
    TPKDestinationMapSearchFilterGroupViewModel *_groupViewModel;
    RACSignal *_backgroundImageURLSignal;
    RACSignal *_jumpURLSignal;
    long long _destinationCityId;
}

@property(nonatomic) long long destinationCityId; // @synthesize destinationCityId=_destinationCityId;
@property(readonly, nonatomic) RACSignal *jumpURLSignal; // @synthesize jumpURLSignal=_jumpURLSignal;
@property(readonly, nonatomic) RACSignal *backgroundImageURLSignal; // @synthesize backgroundImageURLSignal=_backgroundImageURLSignal;
@property(readonly, nonatomic) TPKDestinationMapSearchFilterGroupViewModel *groupViewModel; // @synthesize groupViewModel=_groupViewModel;
@property(readonly, nonatomic) TPKDestinationMapSearchFilterGroupViewModel *filterGroupViewModel; // @synthesize filterGroupViewModel=_filterGroupViewModel;
@property(readonly, nonatomic) TPKDestinationMapSearchPOIInfoViewModel *poiInfoViewModel; // @synthesize poiInfoViewModel=_poiInfoViewModel;
- (void).cxx_destruct;
- (double)cellHeight;
- (id)initWithMapSearchModel:(id)arg1;

@end

