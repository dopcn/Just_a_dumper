//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "VideoCardPosterDelegate-Protocol.h"

@class BDPictureNewsData, BDShortVIdeoData, NSString, UIButton, UILabel, UIView, VideoCardPoster;
@protocol VideoCardCellDelegate;

@interface VideoCardCell : UITableViewCell <VideoCardPosterDelegate>
{
    _Bool _isPlaying;
    _Bool _isPictureStyle;
    id <VideoCardCellDelegate> _delegate;
    VideoCardPoster *_cardPoster;
    UIView *_headerView;
    UILabel *_lbTitle;
    UILabel *_subTitle;
    UIView *_separtorLine;
    UIButton *_downloadButton;
    UIButton *_favouriteButton;
    UIButton *_shareButton;
    BDShortVIdeoData *_videoData;
    BDPictureNewsData *_pictureData;
}

@property(nonatomic) _Bool isPictureStyle; // @synthesize isPictureStyle=_isPictureStyle;
@property(retain, nonatomic) BDPictureNewsData *pictureData; // @synthesize pictureData=_pictureData;
@property(retain, nonatomic) BDShortVIdeoData *videoData; // @synthesize videoData=_videoData;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *favouriteButton; // @synthesize favouriteButton=_favouriteButton;
@property(retain, nonatomic) UIButton *downloadButton; // @synthesize downloadButton=_downloadButton;
@property(retain, nonatomic) UIView *separtorLine; // @synthesize separtorLine=_separtorLine;
@property(retain, nonatomic) UILabel *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UILabel *lbTitle; // @synthesize lbTitle=_lbTitle;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) VideoCardPoster *cardPoster; // @synthesize cardPoster=_cardPoster;
@property(nonatomic) __weak id <VideoCardCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)videoCardPosterPlayClicked;
- (void)refreshCellStatus:(_Bool)arg1;
- (void)refreshFavor;
- (void)bdPlayerFullOrSmallScreenChange:(id)arg1;
- (void)onFavouriteButtonClicked:(id)arg1;
- (void)onShareButtonClicked:(id)arg1;
- (void)refreshDownload;
- (void)checkReviewStatusRefresDownloadButton;
- (void)downloadIsHave:(_Bool)arg1;
- (void)addDownloadTask:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)checkDownload3G;
- (void)onDownloadButtonClicked:(id)arg1;
- (id)buildHeaderUtilityButton:(id)arg1 selectedImage:(id)arg2 targetSel:(SEL)arg3;
- (id)buildHeaderUtilityButtonLabel:(id)arg1 withButton:(id)arg2 targetSel:(SEL)arg3;
- (void)addMyConstrains;
- (void)refreshCellReplay:(_Bool)arg1;
- (void)refreshCellStyle:(_Bool)arg1;
- (id)getTextStringWithData:(id)arg1;
- (void)setCellData:(id)arg1;
- (void)prepareForReuse;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

