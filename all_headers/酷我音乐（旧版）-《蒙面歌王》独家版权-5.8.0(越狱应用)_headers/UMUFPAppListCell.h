//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UMUFPGridCell.h"

@class UIButton, UIImageView, UILabel, UMUFPImageView;

@interface UMUFPAppListCell : UMUFPGridCell
{
    UIButton *_mDownloadBtn;
    UILabel *_titleLabel;
    UILabel *_detailTextLabel;
    UIImageView *_mNewIcon;
    UMUFPImageView *_imageView;
    UIImageView *_mSeperationLineView;
}

@property(retain, nonatomic) UIImageView *mSeperationLineView; // @synthesize mSeperationLineView=_mSeperationLineView;
@property(retain, nonatomic) UMUFPImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *mNewIcon; // @synthesize mNewIcon=_mNewIcon;
@property(retain, nonatomic) UILabel *detailTextLabel; // @synthesize detailTextLabel=_detailTextLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)layoutSubviews;
- (void)relayoutViews;
- (void)updatePromoter:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)dealloc;

@end

