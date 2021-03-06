//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBCTableViewCell.h"

@class NSString, TBCImageView, UIImageView, UILabel, UINavigationController;

@interface TBCGroupNewsCell : TBCTableViewCell
{
    UINavigationController *_naviController;
    UIImageView *_bgViewUp;
    UIImageView *_bgViewDown;
    UILabel *_msgTypeLabel;
    UILabel *_timeLabel;
    TBCImageView *_userPhotoView;
    UILabel *_userNameLabel;
    UILabel *_contentLabel;
    NSString *_groupId;
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) TBCImageView *userPhotoView; // @synthesize userPhotoView=_userPhotoView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *msgTypeLabel; // @synthesize msgTypeLabel=_msgTypeLabel;
@property(retain, nonatomic) UIImageView *bgViewDown; // @synthesize bgViewDown=_bgViewDown;
@property(retain, nonatomic) UIImageView *bgViewUp; // @synthesize bgViewUp=_bgViewUp;
@property(nonatomic) UINavigationController *naviController; // @synthesize naviController=_naviController;
- (void)changeEditFrame:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)reuseCell;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

