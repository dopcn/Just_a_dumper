//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ADView.h"

#import "ADViewDelegate-Protocol.h"

@class NSMutableArray, NSString, NSTimer;

@interface AnimationADView : ADView <ADViewDelegate>
{
    int _imgIndex;
    int _displayTime;
    int _transitionTime;
    NSMutableArray *_assetArray;
    NSMutableArray *_imgViews;
    NSTimer *_timer;
}

+ (id)makeWithPlacementType:(int)arg1 ADprofile:(id)arg2;
+ (void)load;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *imgViews; // @synthesize imgViews=_imgViews;
@property(nonatomic) int transitionTime; // @synthesize transitionTime=_transitionTime;
@property(nonatomic) int displayTime; // @synthesize displayTime=_displayTime;
@property(nonatomic) int imgIndex; // @synthesize imgIndex=_imgIndex;
@property(retain, nonatomic) NSMutableArray *assetArray; // @synthesize assetArray=_assetArray;
- (void).cxx_destruct;
- (void)animateImgs;
- (void)onStop;
- (void)onStart;
- (void)makeView;
- (void)customInit;
- (id)initWithPlacementType:(int)arg1 ADprofile:(id)arg2;
- (void)createAnimationVerticalViewOnView:(id)arg1;
- (void)createAnimationViewOnView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

