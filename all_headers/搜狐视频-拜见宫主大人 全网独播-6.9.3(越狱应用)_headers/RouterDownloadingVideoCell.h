//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PKTableViewCell.h"

@class AsynImageView, DownloadProgressView, UIActivityIndicatorView, UIImageView, UILabel;

@interface RouterDownloadingVideoCell : PKTableViewCell
{
    AsynImageView *_videoImageView;
    DownloadProgressView *_progressView;
    UILabel *_nameLabel;
    UILabel *_sizeLabel;
    UIImageView *_stateImageView;
    UIActivityIndicatorView *_indicatorView;
    UILabel *_stateLabel;
    UIImageView *_backgroundImageView;
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) UIActivityIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(retain, nonatomic) UIImageView *stateImageView; // @synthesize stateImageView=_stateImageView;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) DownloadProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) AsynImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
- (void)updateProgressViewWithDownloadedSize:(unsigned long long)arg1 andTotalSize:(unsigned long long)arg2;
- (void)setObject:(id)arg1;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;

@end

