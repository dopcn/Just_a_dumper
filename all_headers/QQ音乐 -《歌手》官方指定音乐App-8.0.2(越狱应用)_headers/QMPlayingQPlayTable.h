//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BETouchView.h"

#import "CAAnimationDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UIView;
@protocol QMPlayingViewDelegate;

@interface QMPlayingQPlayTable : BETouchView <UITableViewDataSource, UITableViewDelegate, CAAnimationDelegate>
{
    _Bool _isShow;
    id <QMPlayingViewDelegate> _playingDelegate;
    UIView *_QPlayDeviceList;
    NSArray *_speakers;
}

@property(retain, nonatomic) NSArray *speakers; // @synthesize speakers=_speakers;
@property(retain, nonatomic) UIView *QPlayDeviceList; // @synthesize QPlayDeviceList=_QPlayDeviceList;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) __weak id <QMPlayingViewDelegate> playingDelegate; // @synthesize playingDelegate=_playingDelegate;
- (void).cxx_destruct;
- (void)groupAccessoryButtonTapped:(id)arg1 withEvent:(id)arg2;
- (id)makeGroupAccessoryButton;
- (void)tableView:(id)arg1 accessoryButtonTappedForRowWithIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateLayout;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)hide:(id)arg1;
- (void)show:(id)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

