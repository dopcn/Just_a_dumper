//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NMLyricPagingViewControllerDelegate-Protocol.h"
#import "NMLyricShareImageTabDelegate-Protocol.h"
#import "NMLyricShareImageViewDelegate-Protocol.h"
#import "NMShareIconMenuDelegate-Protocol.h"
#import "NMShareToSinglePlatformViewControllerDelegate-Protocol.h"
#import "OpenPlatformAuthViewControllerDelegate-Protocol.h"

@class NMLyricPagingViewController, NMShareIconMenu, NMShortUrlRequest, NMSong, NSArray, NSString, UIImage;
@protocol NMLyricShareImageControllerDelegate;

@interface NMLyricShareImageController : UIViewController <NMLyricShareImageViewDelegate, NMLyricShareImageTabDelegate, NMLyricPagingViewControllerDelegate, NMShareIconMenuDelegate, NMShareToSinglePlatformViewControllerDelegate, OpenPlatformAuthViewControllerDelegate>
{
    NMLyricPagingViewController *_pagingViewController;
    long long _defaultTabIndex;
    NMShareIconMenu *_shareMenu;
    NMShortUrlRequest *_shortUrlRequest;
    id <NMLyricShareImageControllerDelegate> _delegate;
    NSArray *_lyrics;
    NMSong *_song;
    UIImage *_image;
    NSString *_sharingString;
    NSString *_weixinTitle;
    NSString *_weixinDescription;
    NSString *_resourceUrl;
}

@property(retain, nonatomic) NSString *resourceUrl; // @synthesize resourceUrl=_resourceUrl;
@property(retain, nonatomic) NSString *weixinDescription; // @synthesize weixinDescription=_weixinDescription;
@property(retain, nonatomic) NSString *weixinTitle; // @synthesize weixinTitle=_weixinTitle;
@property(retain, nonatomic) NSString *sharingString; // @synthesize sharingString=_sharingString;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NMSong *song; // @synthesize song=_song;
@property(retain, nonatomic) NSArray *lyrics; // @synthesize lyrics=_lyrics;
@property(nonatomic) id <NMLyricShareImageControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)bindSnsFail:(id)arg1;
- (void)bindSnsSuccess:(id)arg1;
- (_Bool)shouldAutoBackAction:(id)arg1;
- (void)shareButtonTouched:(id)arg1 type:(unsigned long long)arg2;
- (void)currentPagingChangedToIndex:(long long)arg1;
- (void)saveLyricImageAction:(id)arg1;
- (void)shareButtonAction:(id)arg1;
- (void)tabView:(id)arg1 didSelectedAtIndex:(unsigned long long)arg2;
- (void)backAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)tab;
- (id)lyricView;
- (void)dealloc;
- (id)initWithLyrics:(id)arg1 song:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

