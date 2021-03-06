//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SNProDetailTableViewCell.h"

#import "UIScrollViewDelegate-Protocol.h"

@class DataProductBasic, NSString, UIButton, UIImageView, UILabel, UIScrollView;

@interface SNProdetailParameterCell : SNProDetailTableViewCell <UIScrollViewDelegate>
{
    DataProductBasic *_productDto;
    UIImageView *_bottomLine;
    CDUnknownBlockType _paramCellTapBlock;
    UILabel *_titleLabel;
    UIScrollView *_contentScrollView;
    UIButton *_moreButton;
}

+ (double)heightForParameterCell;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType paramCellTapBlock; // @synthesize paramCellTapBlock=_paramCellTapBlock;
@property(retain, nonatomic) UIImageView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) DataProductBasic *productDto; // @synthesize productDto=_productDto;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)configParameterCellWithSjCoreList:(id)arg1;
- (void)setSubViewsLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

