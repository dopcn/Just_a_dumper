//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SHVPLivingRedView, SHVPReplayBlackView, UILabel;

@interface SHVPListFloorStatusView : UIView
{
    SHVPLivingRedView *_livingView;
    SHVPReplayBlackView *_replayView;
    UILabel *_viewNumLabel;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) UILabel *viewNumLabel; // @synthesize viewNumLabel=_viewNumLabel;
@property(retain, nonatomic) SHVPReplayBlackView *replayView; // @synthesize replayView=_replayView;
@property(retain, nonatomic) SHVPLivingRedView *livingView; // @synthesize livingView=_livingView;
- (void).cxx_destruct;
- (void)stopLivingAnimation;
- (void)startLivingAnimation;
- (void)configStatusView;
- (void)configLabel:(id)arg1;
- (void)updateStatus:(long long)arg1 string:(id)arg2;
- (id)init;

@end

