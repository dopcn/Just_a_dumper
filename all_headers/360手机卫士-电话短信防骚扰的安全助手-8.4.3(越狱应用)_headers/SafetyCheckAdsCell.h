//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSIndexPath, NSLayoutConstraint, QSEAdsModel, QSEInMobiNativeInfo, UIButton, UIImageView, UILabel, UIView;
@protocol SafetyCheckAdsCellDelegate;

@interface SafetyCheckAdsCell : UITableViewCell
{
    id <SafetyCheckAdsCellDelegate> _delegate;
    UIImageView *_headerImageView;
    UIView *_actionView;
    UIButton *_actionBtn;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_closeBtn;
    UILabel *_adType;
    UILabel *_actionLabel;
    UIImageView *_arrowImageView;
    UIImageView *_closeImageView;
    QSEAdsModel *_adsModel;
    QSEInMobiNativeInfo *_inMobiModel;
    NSIndexPath *_indexpath;
    NSLayoutConstraint *_layoutTopMargin;
    NSLayoutConstraint *_layoutLabelViewHeight;
    NSLayoutConstraint *_layoutSubtitleHeight;
    NSLayoutConstraint *_layoutButtonWidth;
}

+ (double)heightForAdsCell:(id)arg1;
@property(nonatomic) __weak NSLayoutConstraint *layoutButtonWidth; // @synthesize layoutButtonWidth=_layoutButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *layoutSubtitleHeight; // @synthesize layoutSubtitleHeight=_layoutSubtitleHeight;
@property(nonatomic) __weak NSLayoutConstraint *layoutLabelViewHeight; // @synthesize layoutLabelViewHeight=_layoutLabelViewHeight;
@property(nonatomic) __weak NSLayoutConstraint *layoutTopMargin; // @synthesize layoutTopMargin=_layoutTopMargin;
@property(retain, nonatomic) NSIndexPath *indexpath; // @synthesize indexpath=_indexpath;
@property(retain, nonatomic) QSEInMobiNativeInfo *inMobiModel; // @synthesize inMobiModel=_inMobiModel;
@property(retain, nonatomic) QSEAdsModel *adsModel; // @synthesize adsModel=_adsModel;
@property(nonatomic) __weak UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(nonatomic) __weak UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(nonatomic) __weak UILabel *actionLabel; // @synthesize actionLabel=_actionLabel;
@property(nonatomic) __weak UILabel *adType; // @synthesize adType=_adType;
@property(nonatomic) __weak UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(nonatomic) __weak UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(nonatomic) __weak UIView *actionView; // @synthesize actionView=_actionView;
@property(nonatomic) __weak UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(nonatomic) __weak id <SafetyCheckAdsCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)closeCellAction:(id)arg1;
- (void)prepare;
- (void)tryShowSeperator:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setupUI;
- (void)awakeFromNib;

@end

