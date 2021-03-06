//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AdrCarouselViewDelegate-Protocol.h"

@class AdrCarouselView, NSString, NSTimer, UIButton, UIColor;
@protocol AdrBreathViewDelegate;

@interface AdrBreathView : UIView <AdrCarouselViewDelegate>
{
    UIView *_darkBreathView;
    UIView *_lightBreathView;
    UIColor *_startColor;
    UIColor *_endColor;
    NSTimer *_breathTimer;
    AdrCarouselView *_carouseLabel;
    UIButton *_breathBtn;
    id <AdrBreathViewDelegate> _delegate;
}

@property(nonatomic) __weak id <AdrBreathViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMsgAnimation;
- (void)startMsgAnimation;
- (void)stopBreathe;
- (void)startBreathe;
- (void)setBreathButtonEnabel:(_Bool)arg1;
- (void)clickMessageURL:(id)arg1 pluginId:(id)arg2;
- (void)breathAction;
- (void)breathAnimation;
- (void)addChangeColorNotification;
- (void)configBreathColor;
- (void)initBreathLabel;
- (void)drawLightBreathView;
- (void)drawDarkBreathView;
- (void)drawBreathView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

