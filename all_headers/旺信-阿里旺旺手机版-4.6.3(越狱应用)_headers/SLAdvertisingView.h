//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "SLAdImageViewDelegate-Protocol.h"

@class NSArray, NSString, NSTimer;
@protocol SLAdvertisingViewDelegate;

__attribute__((visibility("hidden")))
@interface SLAdvertisingView : UIView <SLAdImageViewDelegate>
{
    long long _flipInterval;
    NSArray *_aryAdElements;
    long long _curShowIndex;
    NSTimer *_timerChangeAdView;
    _Bool _hasImageLoaded;
    NSArray *_aryAdImageView;
    id <SLAdvertisingViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SLAdvertisingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *aryAdImageView; // @synthesize aryAdImageView=_aryAdImageView;
@property(nonatomic) long long flipInterval; // @synthesize flipInterval=_flipInterval;
@property(nonatomic) _Bool hasImageLoaded; // @synthesize hasImageLoaded=_hasImageLoaded;
@property(retain, nonatomic) NSArray *aryAdElements; // @synthesize aryAdElements=_aryAdElements;
- (void).cxx_destruct;
- (void)slAdImageViewDidLoadImag:(id)arg1;
- (void)addAdvertisingElement:(id)arg1;
- (void)handleGesture:(id)arg1;
- (void)onCloseButton:(id)arg1;
- (void)doChangeViewAnimationSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)doChangeViewAnimation;
- (void)removeAllAdImageViewInSubviews;
- (long long)getCountOfAdImageViewInSelfSubviews;
- (void)changeToAdvertisingImageView:(id)arg1;
- (void)changeToNextAdvertisingImageView;
- (void)changeAdViewTimerFucntion:(id)arg1;
- (void)addAdvertisingView:(id)arg1;
- (void)refreshAdvertisingView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

