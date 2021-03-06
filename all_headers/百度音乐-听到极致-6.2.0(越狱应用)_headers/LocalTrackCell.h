//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TrackBaseCell.h"

#import "CloudServiceDelegate-Protocol.h"

@class Download, NSNumber, NSString, Track, UIImageView;
@protocol MusicTrackCellDelegate;

@interface LocalTrackCell : TrackBaseCell <CloudServiceDelegate>
{
    Download *_downloadDB;
    NSString *reuseId;
    _Bool _isPlayList;
    UIImageView *playingIcon;
    NSNumber *playlistID;
    id <MusicTrackCellDelegate> delegate;
    Track *trackDb;
    UIImageView *_errorIconImageView;
}

@property(retain, nonatomic) UIImageView *errorIconImageView; // @synthesize errorIconImageView=_errorIconImageView;
@property(nonatomic) _Bool isPlayList; // @synthesize isPlayList=_isPlayList;
@property(retain, nonatomic) Download *downloadDB; // @synthesize downloadDB=_downloadDB;
@property(retain, nonatomic) Track *trackDb; // @synthesize trackDb;
@property(nonatomic) __weak id <MusicTrackCellDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) NSNumber *playlistID; // @synthesize playlistID;
@property(retain, nonatomic) UIImageView *playingIcon; // @synthesize playingIcon;
- (void).cxx_destruct;
- (void)doRemoveFavSongFailed:(id)arg1;
- (void)doRemoveFavSongSuccess:(id)arg1;
- (void)doAddFavSongFailed:(id)arg1 errorText:(id)arg2;
- (void)doAddFavSongSuccess:(id)arg1;
- (id)shouldShowErrorText;
- (_Bool)shouldShowNextSongIcon;
- (_Bool)shouldShowKTVIcon;
- (_Bool)shouldShowSQIcon;
- (_Bool)shouldShowTencentIcon;
- (_Bool)shouldShowHQIcon;
- (void)clickOnKtvButton:(id)arg1 withEvent:(id)arg2;
- (void)p_removeTrack:(id)arg1;
- (_Bool)updateTrackState;
- (void)didSelectType:(int)arg1;
- (void)accessoryButtonTapped:(id)arg1 withEvent:(id)arg2;
- (void)displayContent;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

