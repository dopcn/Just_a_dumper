//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYUPhoneCardBaseCell.h"

@class QYBisonAlbum, QYUTagSubscribeButton, UIButton, UIImageView, UILabel;

@interface QYUTagSubscribeCell : QYUPhoneCardBaseCell
{
    QYUTagSubscribeButton *_subscribeBtn;
    UIImageView *_avatarView;
    UIImageView *_logoView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    QYBisonAlbum *_bisonAlbum;
    UIButton *_leftTagButton;
    UIButton *_middleTagButton;
    UIButton *_rightTagButton;
}

+ (id)getCellObjByContainer:(id)arg1 andIndex:(long long)arg2;
+ (long long)getLinesByCardData:(id)arg1 andShowNum:(long long)arg2;
+ (void)load;
@property(retain, nonatomic) UIButton *rightTagButton; // @synthesize rightTagButton=_rightTagButton;
@property(retain, nonatomic) UIButton *middleTagButton; // @synthesize middleTagButton=_middleTagButton;
@property(retain, nonatomic) UIButton *leftTagButton; // @synthesize leftTagButton=_leftTagButton;
@property(retain, nonatomic) QYBisonAlbum *bisonAlbum; // @synthesize bisonAlbum=_bisonAlbum;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) QYUTagSubscribeButton *subscribeBtn; // @synthesize subscribeBtn=_subscribeBtn;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)buildUI;
- (void)cellDidClick;
- (void)subscribeButtonDidClick;
- (_Bool)hasSubscribed;
- (void)updateConstraints;
- (void)setCellModel:(id)arg1;
- (void)updateContentIfNeed:(id)arg1;
- (void)updateContent;
- (id)newTagButton;
- (void)didClickTagButton:(id)arg1;
- (_Bool)shouldUpdateContent:(id)arg1;

@end

