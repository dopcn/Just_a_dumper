//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSObject, NSString, NTESNBCommentComposerModel, NTESNBFavorButton, NTESNBToolBarCommentAnimationView, UIButton, UIImageView, UILabel;
@protocol NTESNBContentToolBarDelegate;

@interface NTESNBContentToolBar : UIView
{
    _Bool _onlyComment;
    _Bool _disappear;
    _Bool _showComposer;
    _Bool _showExpression;
    _Bool _showExpressionNewTipsView;
    _Bool _showCommentEntry;
    _Bool _showShareButton;
    _Bool _showRewardButton;
    _Bool _showFavButton;
    _Bool _showFontButton;
    _Bool _showRedPackage;
    _Bool _showMoreActionButton;
    _Bool _playAnimation;
    _Bool _showAttractionButton;
    NSObject<NTESNBContentToolBarDelegate> *_delegate;
    long long _type;
    NTESNBCommentComposerModel *_draft;
    NSString *_commentText;
    UILabel *_composeLabel;
    NTESNBToolBarCommentAnimationView *_commentEntryView;
    NTESNBFavorButton *_favButton;
    UIButton *_moreActionButton;
    UIButton *_shareButton;
    UIButton *_composeButton;
    UIButton *_attractionButton;
    UILabel *_draftLabel;
    UIButton *_rewardButton;
    UIButton *_fontButton;
    UIButton *_expressionButton;
    UIView *_expressionNewTipsView;
    UIImageView *_redPkgFlag;
}

@property(retain, nonatomic) UIImageView *redPkgFlag; // @synthesize redPkgFlag=_redPkgFlag;
@property(retain, nonatomic) UIView *expressionNewTipsView; // @synthesize expressionNewTipsView=_expressionNewTipsView;
@property(retain, nonatomic) UIButton *expressionButton; // @synthesize expressionButton=_expressionButton;
@property(retain, nonatomic) UIButton *fontButton; // @synthesize fontButton=_fontButton;
@property(retain, nonatomic) UIButton *rewardButton; // @synthesize rewardButton=_rewardButton;
@property(retain, nonatomic) UILabel *draftLabel; // @synthesize draftLabel=_draftLabel;
@property(retain, nonatomic) UIButton *attractionButton; // @synthesize attractionButton=_attractionButton;
@property(retain, nonatomic) UIButton *composeButton; // @synthesize composeButton=_composeButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *moreActionButton; // @synthesize moreActionButton=_moreActionButton;
@property(retain, nonatomic) NTESNBFavorButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) NTESNBToolBarCommentAnimationView *commentEntryView; // @synthesize commentEntryView=_commentEntryView;
@property(retain, nonatomic) UILabel *composeLabel; // @synthesize composeLabel=_composeLabel;
@property(nonatomic) _Bool showAttractionButton; // @synthesize showAttractionButton=_showAttractionButton;
@property(nonatomic) _Bool playAnimation; // @synthesize playAnimation=_playAnimation;
@property(nonatomic) _Bool showMoreActionButton; // @synthesize showMoreActionButton=_showMoreActionButton;
@property(nonatomic) _Bool showRedPackage; // @synthesize showRedPackage=_showRedPackage;
@property(nonatomic) _Bool showFontButton; // @synthesize showFontButton=_showFontButton;
@property(nonatomic) _Bool showFavButton; // @synthesize showFavButton=_showFavButton;
@property(nonatomic) _Bool showRewardButton; // @synthesize showRewardButton=_showRewardButton;
@property(nonatomic) _Bool showShareButton; // @synthesize showShareButton=_showShareButton;
@property(nonatomic) _Bool showCommentEntry; // @synthesize showCommentEntry=_showCommentEntry;
@property(nonatomic) _Bool showExpressionNewTipsView; // @synthesize showExpressionNewTipsView=_showExpressionNewTipsView;
@property(nonatomic) _Bool showExpression; // @synthesize showExpression=_showExpression;
@property(nonatomic) _Bool showComposer; // @synthesize showComposer=_showComposer;
@property(copy, nonatomic) NSString *commentText; // @synthesize commentText=_commentText;
@property(copy, nonatomic) NTESNBCommentComposerModel *draft; // @synthesize draft=_draft;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) _Bool disappear; // @synthesize disappear=_disappear;
@property(nonatomic) NSObject<NTESNBContentToolBarDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateToolBarWithCommentCount:(long long)arg1;
- (void)fillCommentCountNumber:(long long)arg1 willPlay:(_Bool)arg2;
- (void)handleEmoticonKeyboardDisplayed;
- (void)setFavor:(_Bool)arg1 animated:(_Bool)arg2;
- (void)attractionButtonDidClicked;
- (void)moreAction;
- (void)gotoComment;
- (void)expressionsClicked:(id)arg1;
- (void)fav:(id)arg1;
- (void)font;
- (void)reward;
- (void)share;
- (void)compose;
- (void)hideTagToShowGuide:(CDUnknownBlockType)arg1;
- (void)layoutButtons;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 onlyComment:(_Bool)arg2;

@end

