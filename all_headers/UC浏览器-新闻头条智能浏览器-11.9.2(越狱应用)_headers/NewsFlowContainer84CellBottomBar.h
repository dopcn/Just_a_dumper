//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, NewsFlowContainer84CellBottomBarBackgroundView, UIImageView, UILabel;

@interface NewsFlowContainer84CellBottomBar : UIView
{
    NSString *_title;
    long long _likeCount;
    long long _playCount;
    NewsFlowContainer84CellBottomBarBackgroundView *_backgroundView;
    UILabel *_titleLabel;
    UIImageView *_likeCountImageView;
    UILabel *_likeCountLabel;
    UIImageView *_playCountImageView;
    UILabel *_playCountLabel;
}

@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) UIImageView *playCountImageView; // @synthesize playCountImageView=_playCountImageView;
@property(retain, nonatomic) UILabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIImageView *likeCountImageView; // @synthesize likeCountImageView=_likeCountImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NewsFlowContainer84CellBottomBarBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) long long playCount; // @synthesize playCount=_playCount;
@property(nonatomic) long long likeCount; // @synthesize likeCount=_likeCount;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)didThemeChange;
- (void)updatePlayCount;
- (void)updateLikeCount;
- (void)updateTitle;
- (void)layoutTitleLabel;
- (void)layoutSubviews;
- (id)init;
- (void)dealloc;

@end

