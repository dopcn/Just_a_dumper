//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSXibView.h"

@class NSDictionary, NSLayoutConstraint, UIButton, UILabel, UIView;
@protocol KSLiftCardFuncViewDelegate;

@interface KSLiftCardFuncView : KSXibView
{
    UIButton *_praiseButton;
    UILabel *_praiseLabel;
    UIButton *_commentButton;
    UILabel *_commentLabel;
    UIButton *_rewardButton;
    UILabel *_rewardLabel;
    id <KSLiftCardFuncViewDelegate> _delegate;
    NSDictionary *_dataDict;
    UIView *_lineView;
    NSLayoutConstraint *_lineViewHeightConstraint;
    UIView *_ornView1;
    UIView *_ornView2;
    NSLayoutConstraint *_ornView1WidthConstraint;
    NSLayoutConstraint *_ornView2WidthConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *ornView2WidthConstraint; // @synthesize ornView2WidthConstraint=_ornView2WidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *ornView1WidthConstraint; // @synthesize ornView1WidthConstraint=_ornView1WidthConstraint;
@property(nonatomic) __weak UIView *ornView2; // @synthesize ornView2=_ornView2;
@property(nonatomic) __weak UIView *ornView1; // @synthesize ornView1=_ornView1;
@property(nonatomic) __weak NSLayoutConstraint *lineViewHeightConstraint; // @synthesize lineViewHeightConstraint=_lineViewHeightConstraint;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(nonatomic) __weak id <KSLiftCardFuncViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UILabel *rewardLabel; // @synthesize rewardLabel=_rewardLabel;
@property(nonatomic) __weak UIButton *rewardButton; // @synthesize rewardButton=_rewardButton;
@property(nonatomic) __weak UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property(nonatomic) __weak UIButton *commentButton; // @synthesize commentButton=_commentButton;
@property(nonatomic) __weak UILabel *praiseLabel; // @synthesize praiseLabel=_praiseLabel;
@property(nonatomic) __weak UIButton *praiseButton; // @synthesize praiseButton=_praiseButton;
- (void).cxx_destruct;
- (void)onDetailButtonClick:(id)arg1;
- (void)onRewardButtonClick:(id)arg1;
- (void)onCommentButtonClick:(id)arg1;
- (void)onPraiseButtonClick:(id)arg1;
- (void)setTheme;
- (void)awakeFromNib;

@end

