//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSDate, TDUserChannelAlbumModel, UIImageView, UILabel, UIView;

@interface TDUserChannelAlbumCell : UITableViewCell
{
    _Bool _exposureEnable;
    UIImageView *_thumbImageView;
    UILabel *_titleLabel;
    UILabel *_publishTimeLabel;
    UILabel *_total_vvLabel;
    UIImageView *_viewedImageView;
    long long _rowIndex;
    TDUserChannelAlbumModel *_model;
    NSDate *_exposureDate;
    UIView *_contentTotalBoard;
    UILabel *_contentTotalLabel;
    UIImageView *_contentTotalImageView;
}

+ (double)cellHeightFor:(id)arg1;
@property(retain, nonatomic) UIImageView *contentTotalImageView; // @synthesize contentTotalImageView=_contentTotalImageView;
@property(retain, nonatomic) UILabel *contentTotalLabel; // @synthesize contentTotalLabel=_contentTotalLabel;
@property(retain, nonatomic) UIView *contentTotalBoard; // @synthesize contentTotalBoard=_contentTotalBoard;
@property(retain, nonatomic) NSDate *exposureDate; // @synthesize exposureDate=_exposureDate;
@property(nonatomic) _Bool exposureEnable; // @synthesize exposureEnable=_exposureEnable;
@property(readonly, nonatomic) TDUserChannelAlbumModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property(retain, nonatomic) UIImageView *viewedImageView; // @synthesize viewedImageView=_viewedImageView;
@property(retain, nonatomic) UILabel *total_vvLabel; // @synthesize total_vvLabel=_total_vvLabel;
@property(retain, nonatomic) UILabel *publishTimeLabel; // @synthesize publishTimeLabel=_publishTimeLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
- (void).cxx_destruct;
- (void)p_addUI;
- (void)layoutSubviews;
- (void)setupUI;
- (void)setupModel:(id)arg1 row:(long long)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

