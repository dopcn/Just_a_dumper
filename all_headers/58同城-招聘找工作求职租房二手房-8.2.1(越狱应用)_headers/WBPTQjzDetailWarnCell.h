//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBPTBaseCell.h"

@class UIImageView, UILabel, UIView, WBPTQjzDetailWarnCellModel;

@interface WBPTQjzDetailWarnCell : WBPTBaseCell
{
    UILabel *_hintLabel;
    UIImageView *_rightImageView;
    UIView *_topSplitLine;
    UIView *_bottomSplitLine;
    UIView *_splitLine;
}

@property(retain, nonatomic) UIView *splitLine; // @synthesize splitLine=_splitLine;
@property(retain, nonatomic) UIView *bottomSplitLine; // @synthesize bottomSplitLine=_bottomSplitLine;
@property(retain, nonatomic) UIView *topSplitLine; // @synthesize topSplitLine=_topSplitLine;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
- (void).cxx_destruct;
- (void)updateCell;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(retain, nonatomic) WBPTQjzDetailWarnCellModel *cellModel; // @dynamic cellModel;

@end

