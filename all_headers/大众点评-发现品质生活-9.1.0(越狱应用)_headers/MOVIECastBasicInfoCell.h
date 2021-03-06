//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel, UIView;

@interface MOVIECastBasicInfoCell : UITableViewCell
{
    UIButton *_likeItButton;
    CDUnknownBlockType _onAvatarImageClick;
    UILabel *_nameLabel;
    UIImageView *_avatarImageView;
    UIImageView *_backgroundImage;
    UIView *_backgroundMaskView;
    UIView *_tagsView;
}

@property(retain, nonatomic) UIView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) UIView *backgroundMaskView; // @synthesize backgroundMaskView=_backgroundMaskView;
@property(retain, nonatomic) UIImageView *backgroundImage; // @synthesize backgroundImage=_backgroundImage;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(copy, nonatomic) CDUnknownBlockType onAvatarImageClick; // @synthesize onAvatarImageClick=_onAvatarImageClick;
@property(retain, nonatomic) UIButton *likeItButton; // @synthesize likeItButton=_likeItButton;
- (void).cxx_destruct;
- (void)tapAvatarImage;
- (void)updateBackgroundImage:(id)arg1;
- (id)tagLabelWith:(id)arg1;
- (void)updateWithCastInfo:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

