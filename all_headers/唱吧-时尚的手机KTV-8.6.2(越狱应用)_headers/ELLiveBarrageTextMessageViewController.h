//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ELBaseViewController.h"

#import "ELWSMessageValveProtocol-Protocol.h"

@class NSMutableArray, NSString;
@protocol ELLiveBarrageTextMessageViewDelegate;

@interface ELLiveBarrageTextMessageViewController : ELBaseViewController <ELWSMessageValveProtocol>
{
    _Bool _firstTunnelAnimating;
    _Bool _secondTunnelAnimating;
    id <ELLiveBarrageTextMessageViewDelegate> _delegate;
    NSMutableArray *_bulletTextMessages;
}

@property(nonatomic) _Bool secondTunnelAnimating; // @synthesize secondTunnelAnimating=_secondTunnelAnimating;
@property(nonatomic) _Bool firstTunnelAnimating; // @synthesize firstTunnelAnimating=_firstTunnelAnimating;
@property(retain, nonatomic) NSMutableArray *bulletTextMessages; // @synthesize bulletTextMessages=_bulletTextMessages;
@property(nonatomic) __weak id <ELLiveBarrageTextMessageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)handleMessage:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)tapBarrageMessageView:(id)arg1;
- (void)showBarrageAnimationForView:(id)arg1 willShowBlock:(CDUnknownBlockType)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)updateBarrageAnimation;
- (double)barrageTextInfoViewAnimateGapDurationForWidth:(double)arg1;
- (double)barrageTextInfoViewAnimateDurationFromWidth:(double)arg1;
- (void)receiveMessage:(id)arg1;
- (id)barrageTextInfoViewWithFirstTunnel:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

