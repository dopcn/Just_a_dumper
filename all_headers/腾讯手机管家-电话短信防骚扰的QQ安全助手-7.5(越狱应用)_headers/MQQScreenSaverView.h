//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;

@interface MQQScreenSaverView : UIView
{
    _Bool _shouldShowColdRabbitNew;
    UIButton *_coldRabbitNewButton;
}

@property(readonly, nonatomic) UIButton *coldRabbitNewButton; // @synthesize coldRabbitNewButton=_coldRabbitNewButton;
@property(nonatomic) _Bool shouldShowColdRabbitNew; // @synthesize shouldShowColdRabbitNew=_shouldShowColdRabbitNew;
- (void)cleapUpCache;
- (void)endAnimation;
- (void)beginAnimation;
- (void)refreshChargingState;
- (void)refreshBatteryLevel;
- (void)refreshChargingTime;
- (void)screenSaverDidExit;
- (void)screenSaverDidShow;
- (void)setColdRabbitNewVisible:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)hideColdRabbitNewWithCompletion:(CDUnknownBlockType)arg1;
- (void)showShowColdRabbitNewWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

