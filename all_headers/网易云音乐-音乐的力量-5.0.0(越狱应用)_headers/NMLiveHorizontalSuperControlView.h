//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NMDanmakusEditViewDelegate-Protocol.h"
#import "NMDanmukusDelegate-Protocol.h"
#import "NMMediaControlDataSource-Protocol.h"
#import "NMMediaControlDelegate-Protocol.h"

@class NMDanmakusEditView, NMDanmakusView, NMHorizontalMediaControlView, NSString;
@protocol NMLiveHorizontalSuperControlViewDataSource, NMLiveHorizontalSuperControlViewDelegate;

@interface NMLiveHorizontalSuperControlView : UIView <NMMediaControlDataSource, NMMediaControlDelegate, NMDanmakusEditViewDelegate, NMDanmukusDelegate>
{
    NMDanmakusView *_danmakusView;
    NMDanmakusEditView *_danmakusEditView;
    NMHorizontalMediaControlView *_mediaControlView;
    _Bool _isShowingDanmakusView;
    id <NMLiveHorizontalSuperControlViewDelegate> _delegate;
    id <NMLiveHorizontalSuperControlViewDataSource> _dataSource;
}

@property(nonatomic) __weak id <NMLiveHorizontalSuperControlViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NMLiveHorizontalSuperControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sendDanmakusContent:(id)arg1 color:(id)arg2 editView:(id)arg3;
- (void)danmakusEditViewGoBackWithString:(id)arg1;
- (_Bool)danmakusEditView:(id)arg1 canSelectColor:(id)arg2;
- (long long)danmakusCost;
- (long long)voteStatus;
- (id)selectedChannel;
- (id)selectedPerspective;
- (double)propFreezeTime;
- (id)supportedArtist;
- (long long)propCount;
- (id)factionsArray;
- (id)channelList;
- (id)perspectiveList;
- (long long)participantCount;
- (id)liveTitle;
- (void)openDanmakusView:(_Bool)arg1 controlView:(id)arg2;
- (void)voteClicked:(id)arg1;
- (void)switchToFaction:(id)arg1 controlView:(id)arg2;
- (void)switchToChannel:(id)arg1 controlView:(id)arg2;
- (void)switchToPerspective:(id)arg1 controlView:(id)arg2;
- (void)exitFullScreenClicked:(id)arg1;
- (void)postDanmakusClicked:(id)arg1;
- (void)shareLiveClicked:(id)arg1;
- (void)gobackClicked:(id)arg1;
- (id)danmakusDataArray;
- (double)currentTime;
- (void)prepareForAppearing;
- (void)updateLiveChannel;
- (void)hideVoteButton:(_Bool)arg1;
- (void)showLiveComment:(id)arg1;
- (void)updateSupportedAritist;
- (void)updateLiveConfigure;
- (void)updateParitipantCount;
- (void)updatePropsCount;
- (void)updateLiveComments;
- (void)updateLiveInfo;
@property(copy, nonatomic) NSString *reservedCommentString;
- (_Bool)resignFirstResponder;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initSubViews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

