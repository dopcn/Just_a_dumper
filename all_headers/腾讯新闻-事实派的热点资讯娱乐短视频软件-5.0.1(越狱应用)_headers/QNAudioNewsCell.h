//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CNewsViewCell.h"

#import "QNFileDownloaderProgressDelegate-Protocol.h"

@class CListItemType, CSimpleImageView, NSArray, NSString, QNAudioProgressView, QNBaseLabel, QNEnlargeHitTestButton, QNFileDownloader, QNLabel, UIButton, UIImageView;

@interface QNAudioNewsCell : CNewsViewCell <QNFileDownloaderProgressDelegate>
{
    QNFileDownloader *_downloader;
    CListItemType *_cellItem;
    NSArray *_listItems;
    UIButton *_dwnBtn;
    long long _channelType;
    CDUnknownBlockType _shareBlock;
    CSimpleImageView *_coverOverlayIcon;
    QNLabel *_titleLabel;
    QNLabel *_infoLabel;
    QNAudioProgressView *_progressView;
    UIImageView *_audioImage;
    UIImageView *_liveImage;
    QNBaseLabel *_liveInfoLabel;
    QNLabel *_liveSourceLabel;
    UIImageView *_liveStatusImage;
    NSArray *_audioList;
    QNEnlargeHitTestButton *_shareButton;
}

+ (double)getCellHeight:(id)arg1 row:(long long)arg2 isNoPicMode:(_Bool)arg3;
@property(retain, nonatomic) QNEnlargeHitTestButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) NSArray *audioList; // @synthesize audioList=_audioList;
@property(retain, nonatomic) UIImageView *liveStatusImage; // @synthesize liveStatusImage=_liveStatusImage;
@property(retain, nonatomic) QNLabel *liveSourceLabel; // @synthesize liveSourceLabel=_liveSourceLabel;
@property(retain, nonatomic) QNBaseLabel *liveInfoLabel; // @synthesize liveInfoLabel=_liveInfoLabel;
@property(retain, nonatomic) UIImageView *liveImage; // @synthesize liveImage=_liveImage;
@property(retain, nonatomic) UIImageView *audioImage; // @synthesize audioImage=_audioImage;
@property(retain, nonatomic) QNAudioProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) QNLabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) QNLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CSimpleImageView *coverOverlayIcon; // @synthesize coverOverlayIcon=_coverOverlayIcon;
@property(copy, nonatomic) CDUnknownBlockType shareBlock; // @synthesize shareBlock=_shareBlock;
@property(nonatomic) long long channelType; // @synthesize channelType=_channelType;
@property(retain, nonatomic) UIButton *dwnBtn; // @synthesize dwnBtn=_dwnBtn;
@property(retain, nonatomic) NSArray *listItems; // @synthesize listItems=_listItems;
@property(retain, nonatomic) CListItemType *cellItem; // @synthesize cellItem=_cellItem;
@property(retain, nonatomic) QNFileDownloader *downloader; // @synthesize downloader=_downloader;
- (void).cxx_destruct;
- (void)themeChanged:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addDownloader:(id)arg1;
- (void)removeDownloader;
- (void)aDownloaderStoped:(id)arg1;
- (void)aDownloaderStarted:(id)arg1;
- (void)downloadStatusChanged:(id)arg1 status:(long long)arg2;
- (void)downloadSizeChanged:(id)arg1;
- (void)updateProgress;
- (void)forceHideProgressView;
- (void)showProgressView;
- (void)updateDownloadBtn;
- (void)updateDownloadStatus;
- (void)updatePlayStatus;
- (void)_shareButtonClick:(id)arg1;
- (void)stopDownload;
- (void)startDownload;
- (void)becomeActiveStatus;
- (id)playList;
- (void)playBtnClicked:(id)arg1;
- (void)dwnBtnClicked:(id)arg1;
- (void)prepareForReuse;
- (id)p_generateLiveInfo:(id)arg1;
- (void)layoutCell:(id)arg1 row:(long long)arg2 isLastRow:(_Bool)arg3 isNoPicMode:(_Bool)arg4 context:(id)arg5;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

