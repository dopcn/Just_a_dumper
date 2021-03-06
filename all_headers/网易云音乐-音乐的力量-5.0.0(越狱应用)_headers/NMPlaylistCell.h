//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMCommonCell.h"

@class NMCustomTruncatingLabel, NMEssenceTipView, NMPlaylist, UIImageView, UILabel;

@interface NMPlaylistCell : NMCommonCell
{
    NMPlaylist *_playlist;
    id _delegate;
    UIImageView *_arrowView;
    UILabel *_nameLabel;
    NMEssenceTipView *_essenceTipImageView;
    NMCustomTruncatingLabel *_detailLabel;
    UIImageView *_imgIcon;
    UIImageView *_imgIconMask;
    UIImageView *_privateTipImageView;
}

+ (double)height;
@property(retain, nonatomic) UIImageView *privateTipImageView; // @synthesize privateTipImageView=_privateTipImageView;
@property(retain, nonatomic) UIImageView *imgIconMask; // @synthesize imgIconMask=_imgIconMask;
@property(retain, nonatomic) UIImageView *imgIcon; // @synthesize imgIcon=_imgIcon;
@property(retain, nonatomic) NMCustomTruncatingLabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) NMEssenceTipView *essenceTipImageView; // @synthesize essenceTipImageView=_essenceTipImageView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NMPlaylist *playlist; // @synthesize playlist=_playlist;
- (void).cxx_destruct;
- (void)resetCell;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

