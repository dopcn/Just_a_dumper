//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIActivityIndicatorView, UIButton, UILabel, UIProgressView, UISlider;

@protocol IYYVODPlayerDashboard <NSObject>

@optional
@property(nonatomic) __weak UIActivityIndicatorView *cacheActivityIndicatorView;
@property(nonatomic) __weak UILabel *durationLabel;
@property(nonatomic) __weak UILabel *playTimeLabel;
@property(nonatomic) __weak UIProgressView *cacheProgressView;
@property(nonatomic) __weak UIProgressView *playProgressView;
@property(nonatomic) __weak UISlider *seekSlider;
@property(nonatomic) long long commentCount;
@property(nonatomic) long long likeCount;
@property(nonatomic) __weak UIButton *commentListButton;
@property(nonatomic) __weak UIButton *modeButton;
@property(nonatomic) __weak UIButton *moreButton;
@property(nonatomic) __weak UIButton *shareButton;
@property(nonatomic) __weak UIButton *praiseButton;
@property(nonatomic) __weak UIButton *commentButton;
@property(nonatomic) __weak UIButton *pauseButton;
@property(nonatomic) __weak UIButton *playButton;
@end

