//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FspCustomUILabel, UIImageView;

@interface FspLiveOrderTableViewCell : UITableViewCell
{
    FspCustomUILabel *_startTimeLabel;
    FspCustomUILabel *_programNameLabel;
    FspCustomUILabel *_liveNameLabel;
    UIImageView *_noPlayingStateView;
    UIImageView *_playingStateView;
    FspCustomUILabel *_stateLabel;
}

@property(retain, nonatomic) FspCustomUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UIImageView *playingStateView; // @synthesize playingStateView=_playingStateView;
@property(retain, nonatomic) UIImageView *noPlayingStateView; // @synthesize noPlayingStateView=_noPlayingStateView;
@property(retain, nonatomic) FspCustomUILabel *liveNameLabel; // @synthesize liveNameLabel=_liveNameLabel;
@property(retain, nonatomic) FspCustomUILabel *programNameLabel; // @synthesize programNameLabel=_programNameLabel;
@property(retain, nonatomic) FspCustomUILabel *startTimeLabel; // @synthesize startTimeLabel=_startTimeLabel;
- (void).cxx_destruct;
- (void)hideOrderState;
- (void)refreshStateLabelWithPlaying:(_Bool)arg1;
- (_Bool)isProgramStartWithStartTime:(id)arg1;
- (void)refreshCell:(id)arg1;
- (void)initPlayState;
- (void)createSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

