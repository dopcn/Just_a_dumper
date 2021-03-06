//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BNTableViewCell.h"

@class NSString, UIButton, UIImageView, UILabel;
@protocol BDataManagerTableViewCellDelegate;

@interface BDataManagerTableViewCell : BNTableViewCell
{
    id <BDataManagerTableViewCellDelegate> _delegate;
    UILabel *_cityLabel;
    UILabel *_statusLabel;
    UILabel *_sizeLabel;
    UIImageView *_lineLabel;
    UIImageView *_progressLabel;
    UIButton *_actionButton;
    UIImageView *_rollBlock;
    NSString *_savedSize;
}

@property(copy, nonatomic) NSString *savedSize; // @synthesize savedSize=_savedSize;
@property(retain, nonatomic) UIImageView *rollBlock; // @synthesize rollBlock=_rollBlock;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIImageView *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIImageView *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *cityLabel; // @synthesize cityLabel=_cityLabel;
@property(nonatomic) __weak id <BDataManagerTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)actionButtonPressed:(id)arg1;
- (void)adjustFrame;
- (void)setStatus:(int)arg1;
- (void)setProgress:(float)arg1;
- (void)animateProgress;
- (void)rollBlockAnimation:(_Bool)arg1;
- (void)setSizeLabelText:(id)arg1;
- (void)setStatusLabelText:(id)arg1;
- (void)setCityLabelText:(id)arg1;
- (void)setDataMergeStatus:(int)arg1;
- (void)setCellTheme:(int)arg1;
- (void)setCityInfo:(id)arg1;
- (id)deleteBtn;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;

@end

