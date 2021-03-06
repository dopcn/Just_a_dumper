//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGBasicSheet.h"

@class AlbumInfo, KGTextRollView, KGThemeImageView, KGThemeLabel, NSString, SongInfo, UIView;
@protocol KGSongInfoSheetDelegate;

@interface KGSongInfoSheet : KGBasicSheet
{
    _Bool _isLoadingPublishTime;
    unsigned long long _sourceType;
    SongInfo *_songInfo;
    NSString *_lyricId;
    id <KGSongInfoSheetDelegate> _delegate;
    KGTextRollView *_songNameRollView;
    UIView *_singerView;
    KGThemeLabel *_singerNameLabel;
    KGThemeImageView *_singerArrow;
    UIView *_albumInfoView;
    KGThemeLabel *_albumNameLabel;
    KGThemeImageView *_albumArrow;
    UIView *_infoView;
    KGThemeLabel *_timeLabel;
    KGThemeLabel *_qualityLabel;
    KGThemeLabel *_formatLabel;
    KGThemeLabel *_sizeLabel;
    KGThemeLabel *_addTimeLabel;
    KGThemeLabel *_playCountLabel;
    UIView *_publishTimeView;
    UIView *_musicIndexView;
    KGThemeLabel *_publishTimeLabel;
    UIView *_bpmView;
    KGThemeLabel *_bpmLabel;
    UIView *_bottomView;
    UIView *_containerView;
    AlbumInfo *_albumInfo;
    UIView *_uploadInfoView;
}

@property(nonatomic) __weak UIView *uploadInfoView; // @synthesize uploadInfoView=_uploadInfoView;
@property(retain, nonatomic) AlbumInfo *albumInfo; // @synthesize albumInfo=_albumInfo;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) __weak UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(nonatomic) __weak KGThemeLabel *bpmLabel; // @synthesize bpmLabel=_bpmLabel;
@property(nonatomic) __weak UIView *bpmView; // @synthesize bpmView=_bpmView;
@property(nonatomic) __weak KGThemeLabel *publishTimeLabel; // @synthesize publishTimeLabel=_publishTimeLabel;
@property(nonatomic) __weak UIView *musicIndexView; // @synthesize musicIndexView=_musicIndexView;
@property(nonatomic) __weak UIView *publishTimeView; // @synthesize publishTimeView=_publishTimeView;
@property(nonatomic) __weak KGThemeLabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(nonatomic) __weak KGThemeLabel *addTimeLabel; // @synthesize addTimeLabel=_addTimeLabel;
@property(nonatomic) __weak KGThemeLabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(nonatomic) __weak KGThemeLabel *formatLabel; // @synthesize formatLabel=_formatLabel;
@property(nonatomic) __weak KGThemeLabel *qualityLabel; // @synthesize qualityLabel=_qualityLabel;
@property(nonatomic) __weak KGThemeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UIView *infoView; // @synthesize infoView=_infoView;
@property(nonatomic) __weak KGThemeImageView *albumArrow; // @synthesize albumArrow=_albumArrow;
@property(nonatomic) __weak KGThemeLabel *albumNameLabel; // @synthesize albumNameLabel=_albumNameLabel;
@property(nonatomic) __weak UIView *albumInfoView; // @synthesize albumInfoView=_albumInfoView;
@property(nonatomic) __weak KGThemeImageView *singerArrow; // @synthesize singerArrow=_singerArrow;
@property(nonatomic) __weak KGThemeLabel *singerNameLabel; // @synthesize singerNameLabel=_singerNameLabel;
@property(nonatomic) __weak UIView *singerView; // @synthesize singerView=_singerView;
@property(nonatomic) __weak KGTextRollView *songNameRollView; // @synthesize songNameRollView=_songNameRollView;
@property(nonatomic) _Bool isLoadingPublishTime; // @synthesize isLoadingPublishTime=_isLoadingPublishTime;
@property(nonatomic) __weak id <KGSongInfoSheetDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *lyricId; // @synthesize lyricId=_lyricId;
@property(readonly, nonatomic) SongInfo *songInfo; // @synthesize songInfo=_songInfo;
@property(nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
- (void).cxx_destruct;
- (void)reportInfo:(id)arg1;
- (void)copyrightAction;
- (void)showMusicIndexView;
- (void)goToDetailUploadList;
- (void)albumCellTapped:(id)arg1;
- (void)singerCellTapped:(id)arg1;
- (void)commonViewTaped:(id)arg1;
- (void)refreshUploadInfoViewTop;
- (void)refreshTopOfViewBelowMusicIndexView;
- (void)layoutContainerView;
- (void)showPublishTimeOfSong:(id)arg1;
- (double)getInfoY;
- (void)refreshSongInfoAreaWithSongInfo:(id)arg1;
- (void)reLayoutInfoViewSubviews;
- (id)getBpmIconForType:(unsigned long long)arg1;
- (void)checkCreateBpmCellForRelatedInfo:(id)arg1;
- (void)requestPublishTimeAndBpmOfSongInfo:(id)arg1;
- (void)showReportEntrance;
- (void)checkMusicIndexViewWithSongInfo:(id)arg1;
- (void)setSheetSongInfo:(id)arg1 hideAlbum:(_Bool)arg2;
- (void)showUploadRecordAndCopyRightEntranceWithHaveUploadInfo:(_Bool)arg1;
- (id)createBottomViewWithRect:(struct CGRect)arg1;
- (id)createSongInfoViewWithRect:(struct CGRect)arg1;
- (id)createCommonSongInfoLabelWithRect:(struct CGRect)arg1;
- (id)createCommonItemViewWithType:(long long)arg1 rect:(struct CGRect)arg2 showBottomSeparateLine:(_Bool)arg3 withDefaultIcon:(id)arg4;
- (id)createTitleView;
- (void)createUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

@end

