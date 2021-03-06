//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel, WIAvatarImageView;

@interface WIChannelHotContentCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    WIAvatarImageView *_avatarImageView;
    UIButton *_badgeButton;
}

@property(nonatomic) __weak UIButton *badgeButton; // @synthesize badgeButton=_badgeButton;
@property(nonatomic) __weak WIAvatarImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(nonatomic) __weak UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

