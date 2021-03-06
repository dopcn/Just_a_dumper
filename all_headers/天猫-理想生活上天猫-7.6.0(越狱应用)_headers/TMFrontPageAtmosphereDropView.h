//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TMFrontPageAtmosphereBaseView.h"

@class NSArray;

@interface TMFrontPageAtmosphereDropView : TMFrontPageAtmosphereBaseView
{
    double _stayTime;
    long long _currentCycloneIndex;
    NSArray *_lanes;
    unsigned long long _showCount;
    NSArray *_images;
}

@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(nonatomic) unsigned long long showCount; // @synthesize showCount=_showCount;
@property(retain, nonatomic) NSArray *lanes; // @synthesize lanes=_lanes;
@property(nonatomic) long long currentCycloneIndex; // @synthesize currentCycloneIndex=_currentCycloneIndex;
@property(nonatomic) double stayTime; // @synthesize stayTime=_stayTime;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopPlay;
- (void)pause;
- (void)startPlay;
- (void)updateContentView;
- (void)buildContentView;
- (id)filterWillShowItems;
- (void)parseData:(id)arg1;
- (id)contentView;

@end

