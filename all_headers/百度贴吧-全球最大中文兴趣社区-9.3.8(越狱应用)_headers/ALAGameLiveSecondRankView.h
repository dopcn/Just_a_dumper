//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ALALiveRankViewDelegate-Protocol.h"

@class ALALiveRankView, NSString, UIButton;
@protocol ALAGameLiveSecondRankViewwDelegate;

@interface ALAGameLiveSecondRankView : UIView <ALALiveRankViewDelegate>
{
    id <ALAGameLiveSecondRankViewwDelegate> _delegate;
    UIButton *_backButton;
    ALALiveRankView *_rankView;
}

@property(retain, nonatomic) ALALiveRankView *rankView; // @synthesize rankView=_rankView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <ALAGameLiveSecondRankViewwDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)liveRankViewDidClickSupportButton:(id)arg1;
- (void)liveRankViewDidClickIntroduceView:(id)arg1;
- (void)liveRankViewDidClickCell:(id)arg1 item:(id)arg2;
- (void)backButtonDidClick;
- (void)updateWithLiveShowItem:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

