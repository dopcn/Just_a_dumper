//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TDUserSpaceBaseCell.h"

@class TDHistoryModel, UIButton, UIImageView, UILabel;

@interface TDHistoryCell : TDUserSpaceBaseCell
{
    TDHistoryModel *_model;
    UIButton *_nextBtn;
    UILabel *_playInfoLabel;
    UIImageView *_hatImageView;
    UILabel *_playlistVideoNameLabel;
}

@property(retain, nonatomic) UILabel *playlistVideoNameLabel; // @synthesize playlistVideoNameLabel=_playlistVideoNameLabel;
@property(retain, nonatomic) UIImageView *hatImageView; // @synthesize hatImageView=_hatImageView;
@property(retain, nonatomic) UILabel *playInfoLabel; // @synthesize playInfoLabel=_playInfoLabel;
@property(retain, nonatomic) UIButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) TDHistoryModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)resetHeaderImage;
- (void)updateTitleAlignmentWhenOnlySingleLine;
- (void)layoutSubviews;
- (double)titleLabelMaxWidth;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)feedPos;
- (void)sendNextBtnClickEvent;
- (void)gotoDetail;
- (void)addNextBtnView;

@end

