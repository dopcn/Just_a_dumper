//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, YKPIconLabel, YKUGradientView;

@interface YKPWorkVideoView : UIView
{
    int _playId;
    long long _workFlag;
    CDUnknownBlockType _touchAvatarBlock;
    UIView *_avatarBgView;
    UIImageView *_avatarView;
    UIImageView *_starImgView;
    UIView *_coverContentView;
    UIImageView *_coverImgView;
    UILabel *_nameLabel;
    UILabel *_lengthLabel;
    UIImageView *_hotImageView;
    YKPIconLabel *_likeCountLabel;
    YKPIconLabel *_playCountLabel;
    YKUGradientView *_bottomGradientView;
    YKUGradientView *_topGradientView;
}

@property(retain, nonatomic) YKUGradientView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) YKUGradientView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) YKPIconLabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) YKPIconLabel *likeCountLabel; // @synthesize likeCountLabel=_likeCountLabel;
@property(retain, nonatomic) UIImageView *hotImageView; // @synthesize hotImageView=_hotImageView;
@property(retain, nonatomic) UILabel *lengthLabel; // @synthesize lengthLabel=_lengthLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *coverImgView; // @synthesize coverImgView=_coverImgView;
@property(retain, nonatomic) UIView *coverContentView; // @synthesize coverContentView=_coverContentView;
@property(retain, nonatomic) UIImageView *starImgView; // @synthesize starImgView=_starImgView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *avatarBgView; // @synthesize avatarBgView=_avatarBgView;
@property(copy, nonatomic) CDUnknownBlockType touchAvatarBlock; // @synthesize touchAvatarBlock=_touchAvatarBlock;
- (void).cxx_destruct;
- (void)setupWithModel:(id)arg1;
- (void)layoutSubviews;
- (void)initialize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

