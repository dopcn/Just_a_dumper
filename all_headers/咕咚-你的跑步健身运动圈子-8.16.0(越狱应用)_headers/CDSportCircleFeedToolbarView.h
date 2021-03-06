//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CDShareActivityViewControllerDelegate-Protocol.h"

@class CDSportCircleCommonFeedModel, NSString, UIButton, UIImageView, UIViewController;

@interface CDSportCircleFeedToolbarView : UIView <CDShareActivityViewControllerDelegate>
{
    _Bool _isAnimating;
    UIViewController *_delegateViewController;
    CDSportCircleCommonFeedModel *_feed;
    CDUnknownBlockType _likeButtonCallback;
    UIButton *_likeButton;
    UIImageView *_likeImageView;
    UIButton *_commentButton;
    UIButton *_shareButton;
    UIButton *_moreButton;
    NSString *_shareID;
}

@property(retain, nonatomic) NSString *shareID; // @synthesize shareID=_shareID;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(copy, nonatomic) CDUnknownBlockType likeButtonCallback; // @synthesize likeButtonCallback=_likeButtonCallback;
@property(retain, nonatomic) CDSportCircleCommonFeedModel *feed; // @synthesize feed=_feed;
@property(nonatomic) __weak UIViewController *delegateViewController; // @synthesize delegateViewController=_delegateViewController;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)logEvents;
- (void)activityViewController:(id)arg1 willPerformShareActionWithActionType:(unsigned long long)arg2 object:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (id)preferredActivityTypes;
- (void)favouriteFeed;
- (void)recommendFeed;
- (void)doReportActionWithIndex:(long long)arg1;
- (void)reportFeed;
- (void)shareAction;
- (void)shareButtonDidPress;
- (void)moreButtonDidPress;
- (void)likeButtonDidPress;
- (id)vcForAnalytics;
- (void)commentButtonDidPress;
- (void)enableControl:(_Bool)arg1;
- (void)modelInfoDidChanged:(id)arg1;
- (void)removeObservers;
- (void)addObservers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

