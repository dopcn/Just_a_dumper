//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "QLLOTAniViewHelperDelegate-Protocol.h"

@class LOTAnimationView, NSString, QLJCELottieEventConfig, QLLOTAniViewHelper, UIView;

@interface QLEventPromotionLottieHelper : NSObject <QLLOTAniViewHelperDelegate>
{
    QLLOTAniViewHelper *_lottieHelper;
    QLJCELottieEventConfig *_config;
    LOTAnimationView *_lottieView;
    CDUnknownBlockType _completion;
    UIView *_targetView;
}

@property(retain, nonatomic) UIView *targetView; // @synthesize targetView=_targetView;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) LOTAnimationView *lottieView; // @synthesize lottieView=_lottieView;
@property(retain, nonatomic) QLJCELottieEventConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) QLLOTAniViewHelper *lottieHelper; // @synthesize lottieHelper=_lottieHelper;
- (void).cxx_destruct;
- (void)reportLottieViewExposure;
- (void)clearResource;
- (void)lotAniViewHelperDidLoadAniResourceUrl:(id)arg1 ForJsonPath:(id)arg2;
- (void)stopLottieAnimation;
- (void)setObject:(id)arg1 targetView:(id)arg2 competion:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

