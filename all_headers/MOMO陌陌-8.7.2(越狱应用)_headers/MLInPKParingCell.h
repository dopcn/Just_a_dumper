//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface MLInPKParingCell : UIView
{
    _Bool _topTurn;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_subtitleLabel;
    UIImageView *_animationAvatarImageView;
}

@property(nonatomic) _Bool topTurn; // @synthesize topTurn=_topTurn;
@property(retain, nonatomic) UIImageView *animationAvatarImageView; // @synthesize animationAvatarImageView=_animationAvatarImageView;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)setTopImage:(id)arg1 nickName:(id)arg2;
- (void)playAnimationWithImage:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

