//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JUDComponent.h"

#import "JUDSliderViewDelegate-Protocol.h"

@class JUDSliderView, NSMutableArray, NSString, NSTimer;

@interface JUDSliderComponent : JUDComponent <JUDSliderViewDelegate>
{
    _Bool _autoPlay;
    _Bool _sliderChangeEvent;
    _Bool _sliderScrollEvent;
    _Bool _sliderScrollStartEvent;
    _Bool _sliderScrollStopEvent;
    _Bool _sliderScrollCancelEvent;
    _Bool _sliderStartEventFired;
    _Bool _scrollable;
    JUDSliderView *_sliderView;
    NSTimer *_autoTimer;
    long long _currentIndex;
    unsigned long long _interval;
    long long _index;
    double _lastOffsetXRatio;
    double _offsetXAccuracy;
    NSMutableArray *_childrenView;
}

@property(nonatomic) _Bool scrollable; // @synthesize scrollable=_scrollable;
@property(retain, nonatomic) NSMutableArray *childrenView; // @synthesize childrenView=_childrenView;
@property(nonatomic) _Bool sliderStartEventFired; // @synthesize sliderStartEventFired=_sliderStartEventFired;
@property(nonatomic) _Bool sliderScrollCancelEvent; // @synthesize sliderScrollCancelEvent=_sliderScrollCancelEvent;
@property(nonatomic) _Bool sliderScrollStopEvent; // @synthesize sliderScrollStopEvent=_sliderScrollStopEvent;
@property(nonatomic) _Bool sliderScrollStartEvent; // @synthesize sliderScrollStartEvent=_sliderScrollStartEvent;
@property(nonatomic) _Bool sliderScrollEvent; // @synthesize sliderScrollEvent=_sliderScrollEvent;
@property(nonatomic) _Bool sliderChangeEvent; // @synthesize sliderChangeEvent=_sliderChangeEvent;
@property(nonatomic) double offsetXAccuracy; // @synthesize offsetXAccuracy=_offsetXAccuracy;
@property(nonatomic) double lastOffsetXRatio; // @synthesize lastOffsetXRatio=_lastOffsetXRatio;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) unsigned long long interval; // @synthesize interval=_interval;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSTimer *autoTimer; // @synthesize autoTimer=_autoTimer;
@property(retain, nonatomic) JUDSliderView *sliderView; // @synthesize sliderView=_sliderView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)sliderView:(id)arg1 scrollViewDidCancelDraging:(id)arg2;
- (void)sliderView:(id)arg1 scrollViewDidStopScroll:(id)arg2;
- (void)sliderView:(id)arg1 scrollViewDidStartScroll:(id)arg2;
- (void)sliderView:(id)arg1 didScrollToItemAtIndex:(long long)arg2;
- (void)sliderView:(id)arg1 sliderViewDidScroll:(id)arg2;
- (void)_autoPlayOnTimer;
- (void)_stopAutoPlayTimer;
- (void)_startAutoPlayTimer;
- (void)setIndicatorView:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)viewDidUnload;
- (void)layoutDidFinish;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 judInstance:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

