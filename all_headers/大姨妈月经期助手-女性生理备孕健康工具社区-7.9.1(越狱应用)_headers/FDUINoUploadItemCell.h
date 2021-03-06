//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FUploadInfo, NSIndexPath, UIImageView, UILabel, UIView;

@interface FDUINoUploadItemCell : UITableViewCell
{
    _Bool isSupportLightMode;
    UILabel *typeTitleLabel;
    UILabel *contentLabel;
    UILabel *dateLabel;
    UILabel *FailureReasonLabel;
    UILabel *emotionLabel;
    UIImageView *arrowImageView;
    UIImageView *picImageView;
    UIView *line;
    NSIndexPath *selectIndexPath;
    FUploadInfo *_upLoadInfo;
}

@property(retain, nonatomic) FUploadInfo *upLoadInfo; // @synthesize upLoadInfo=_upLoadInfo;
@property(nonatomic) _Bool isSupportLightMode; // @synthesize isSupportLightMode;
@property(nonatomic) NSIndexPath *selectIndexPath; // @synthesize selectIndexPath;
@property(retain, nonatomic) UIView *line; // @synthesize line;
@property(retain, nonatomic) UIImageView *picImageView; // @synthesize picImageView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView;
@property(retain, nonatomic) UILabel *emotionLabel; // @synthesize emotionLabel;
@property(retain, nonatomic) UILabel *FailureReasonLabel; // @synthesize FailureReasonLabel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel;
@property(retain, nonatomic) UILabel *typeTitleLabel; // @synthesize typeTitleLabel;
- (void).cxx_destruct;
- (void)setSelectedBackgroundView:(id)arg1;
- (id)addLabelwithFrame:(struct CGRect)arg1 withFontSize:(float)arg2 withTextColor:(id)arg3;
- (void)setCellInfo:(id)arg1 withIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isSupportLightMode:(_Bool)arg3;

@end

