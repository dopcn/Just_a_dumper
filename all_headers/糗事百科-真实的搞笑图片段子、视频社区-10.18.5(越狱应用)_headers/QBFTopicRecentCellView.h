//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBBaseCellContentView.h"

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView;

@interface QBFTopicRecentCellView : QBBaseCellContentView
{
    _Bool _canShowRankNum;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    NSLayoutConstraint *_titleLabelToRight;
    NSLayoutConstraint *_titleRelativeTopToImageView;
    UIButton *_anonimousButton;
    UIButton *_topicOwnerButton;
    UILabel *_briefLabel;
    NSLayoutConstraint *_briefLabelToRight;
    UILabel *_totalCntLabel;
    NSLayoutConstraint *_totalLabelRelativeBottomToImageView;
    UILabel *_todayCntLabel;
    UIImageView *_rankImgView;
    UILabel *_rankLabel;
    UIView *_bottomLine;
    NSLayoutConstraint *_bottomLineViewHeight;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomLineViewHeight; // @synthesize bottomLineViewHeight=_bottomLineViewHeight;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(nonatomic) __weak UIImageView *rankImgView; // @synthesize rankImgView=_rankImgView;
@property(nonatomic) __weak UILabel *todayCntLabel; // @synthesize todayCntLabel=_todayCntLabel;
@property(nonatomic) __weak NSLayoutConstraint *totalLabelRelativeBottomToImageView; // @synthesize totalLabelRelativeBottomToImageView=_totalLabelRelativeBottomToImageView;
@property(nonatomic) __weak UILabel *totalCntLabel; // @synthesize totalCntLabel=_totalCntLabel;
@property(nonatomic) __weak NSLayoutConstraint *briefLabelToRight; // @synthesize briefLabelToRight=_briefLabelToRight;
@property(nonatomic) __weak UILabel *briefLabel; // @synthesize briefLabel=_briefLabel;
@property(retain, nonatomic) UIButton *topicOwnerButton; // @synthesize topicOwnerButton=_topicOwnerButton;
@property(nonatomic) __weak UIButton *anonimousButton; // @synthesize anonimousButton=_anonimousButton;
@property(nonatomic) __weak NSLayoutConstraint *titleRelativeTopToImageView; // @synthesize titleRelativeTopToImageView=_titleRelativeTopToImageView;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelToRight; // @synthesize titleLabelToRight=_titleLabelToRight;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool canShowRankNum; // @synthesize canShowRankNum=_canShowRankNum;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)themeWillChanged;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)updateContent;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)dealloc;

@end

