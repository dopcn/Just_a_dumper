//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBImmersiveVideoBaseCell.h"

@class QBArticleCellActionView, QBArticleCellHeaderView, QBArticleCellHotCommonView, QBArticleCellVotersView, UIImageView, UILabel, UIView, YYLabel;

@interface QBImmersiveVideoCell : QBImmersiveVideoBaseCell
{
    _Bool _logPlayedFlag;
    QBArticleCellActionView *_actionView;
    QBArticleCellVotersView *_votersView;
    QBArticleCellHeaderView *_headerView;
    YYLabel *_contentLabel;
    UIImageView *_readMoreImageView;
    UILabel *_voteLabelInfo;
    QBArticleCellHotCommonView *_outerCommentLabel;
    UIView *_bottomLineView;
    unsigned long long _articleCellType;
    struct CGRect _orginMediaViewRect;
}

@property(nonatomic) _Bool logPlayedFlag; // @synthesize logPlayedFlag=_logPlayedFlag;
@property(nonatomic) unsigned long long articleCellType; // @synthesize articleCellType=_articleCellType;
@property(nonatomic) struct CGRect orginMediaViewRect; // @synthesize orginMediaViewRect=_orginMediaViewRect;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) QBArticleCellHotCommonView *outerCommentLabel; // @synthesize outerCommentLabel=_outerCommentLabel;
@property(retain, nonatomic) UILabel *voteLabelInfo; // @synthesize voteLabelInfo=_voteLabelInfo;
@property(retain, nonatomic) UIImageView *readMoreImageView; // @synthesize readMoreImageView=_readMoreImageView;
@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) QBArticleCellHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) QBArticleCellVotersView *votersView; // @synthesize votersView=_votersView;
@property(retain, nonatomic) QBArticleCellActionView *actionView; // @synthesize actionView=_actionView;
- (void).cxx_destruct;
- (void)loadThemeResource;
- (void)themeWillChanged;
- (id)valueForUndefinedKey:(id)arg1;
- (void)qbMediaPlayerUpdateCurrentSecond:(double)arg1 totalSecond:(double)arg2 playerModel:(id)arg3;
- (void)onTapOuterCommentLabel;
- (struct CGSize)sizeForVideoView:(id)arg1;
- (double)heightWithArticle:(id)arg1 targetWidth:(double)arg2;
- (double)heightOfCell;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeKVO;
- (void)addKVO;
- (void)updateVoteLabelInfo;
- (id)contentTextWithArticle:(id)arg1;
- (void)updateVoteInfo;
- (void)updateLayout;
- (void)updateContent;
- (void)layoutSubviews;
- (void)videoViewShareBtnPressed:(id)arg1;
- (void)setModelRetain:(id)arg1;
- (id)myAccessibilityElement;
- (id)init;
- (void)dealloc;

@end

