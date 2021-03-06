//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, ELLiveAvatar, UIImageView, UILabel;

@interface ELReceivedSongView : UIView
{
    CAShapeLayer *_backgroundLayer;
    UIImageView *_iconImageView;
    UILabel *_songNameLabel;
    ELLiveAvatar *_headerImageView;
    UILabel *_requestNickNameLabel;
    UILabel *_requestTotalCountLabel;
}

@property(retain, nonatomic) UILabel *requestTotalCountLabel; // @synthesize requestTotalCountLabel=_requestTotalCountLabel;
@property(retain, nonatomic) UILabel *requestNickNameLabel; // @synthesize requestNickNameLabel=_requestNickNameLabel;
@property(retain, nonatomic) ELLiveAvatar *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UILabel *songNameLabel; // @synthesize songNameLabel=_songNameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (double)maxTextWidth;
- (void)showReceivedSong:(id)arg1;
- (struct CGPath *)maskPath;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

