//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, UIImageView, UILabel, UIView;

@interface XSTShowDynamicTableViewCell : UITableViewCell
{
    UIView *_mainView;
    UIView *_bottomView;
    UIImageView *_videoPlayerIV;
    _Bool _isImg;
    UIImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UIImageView *_superManImageView;
    UILabel *_titleLabel;
    UILabel *_addTimeLabel;
    UILabel *_commentLabel;
    UIImageView *_commentImageView;
    UIImageView *_contentImageView;
    UILabel *_contentLabel;
    long long _type;
    NSIndexPath *_indexPath;
    CDUnknownBlockType _clickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool isImg; // @synthesize isImg=_isImg;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UIImageView *commentImageView; // @synthesize commentImageView=_commentImageView;
@property(retain, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(retain, nonatomic) UILabel *addTimeLabel; // @synthesize addTimeLabel=_addTimeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *superManImageView; // @synthesize superManImageView=_superManImageView;
@property(retain, nonatomic) UILabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)onClick:(id)arg1;
- (void)layoutSubviews;
- (void)iniUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

