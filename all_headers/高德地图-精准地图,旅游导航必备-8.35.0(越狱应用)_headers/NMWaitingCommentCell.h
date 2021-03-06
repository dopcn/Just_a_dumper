//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NMBaseTableViewCell.h"

@class LTMWaitingCommentCellData, UIButton, UIImageView, UILabel, UIView;
@protocol NMWaitingCommentCellDelegate;

@interface NMWaitingCommentCell : NMBaseTableViewCell
{
    LTMWaitingCommentCellData *_data;
    id <NMWaitingCommentCellDelegate> _delegate;
    UIImageView *_picView;
    UIImageView *_iconImageView;
    UILabel *_poiNameLabel;
    UILabel *_subTitleLabel;
    UIButton *_coinButton;
    UIView *_horizontalLineView;
}

+ (id)reuseIdentifier;
+ (double)cellHeightWithData:(id)arg1;
@property(retain, nonatomic) UIView *horizontalLineView; // @synthesize horizontalLineView=_horizontalLineView;
@property(retain, nonatomic) UIButton *coinButton; // @synthesize coinButton=_coinButton;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *poiNameLabel; // @synthesize poiNameLabel=_poiNameLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *picView; // @synthesize picView=_picView;
@property(nonatomic) __weak id <NMWaitingCommentCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) LTMWaitingCommentCellData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)coinAction:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

