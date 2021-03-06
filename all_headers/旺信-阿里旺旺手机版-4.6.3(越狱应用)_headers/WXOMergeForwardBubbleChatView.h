//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YWBaseBubbleChatView.h"

#import "YWBaseBubbleChatViewInf-Protocol.h"

@class NSString, UIButton, UIControl, UIImageView, UILabel, WXORichLabel, YWMergeForwardBubbleViewModel;

@interface WXOMergeForwardBubbleChatView : YWBaseBubbleChatView <YWBaseBubbleChatViewInf>
{
    UIControl *_touchArea;
    UILabel *_labelTitle;
    UIImageView *_imageViewLine;
    WXORichLabel *_labelMessage1;
    WXORichLabel *_labelMessage2;
    UIButton *_moreButton;
}

@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) WXORichLabel *labelMessage2; // @synthesize labelMessage2=_labelMessage2;
@property(retain, nonatomic) WXORichLabel *labelMessage1; // @synthesize labelMessage1=_labelMessage1;
@property(retain, nonatomic) UIImageView *imageViewLine; // @synthesize imageViewLine=_imageViewLine;
@property(retain, nonatomic) UILabel *labelTitle; // @synthesize labelTitle=_labelTitle;
@property(retain, nonatomic) UIControl *touchArea; // @synthesize touchArea=_touchArea;
- (void).cxx_destruct;
- (id)formatChatText:(id)arg1;
- (struct CGSize)getBubbleContentSize;
- (void)updateBubbleView;
- (void)moreButtonClicked:(id)arg1;
- (void)onCardClicked;
- (void)layoutWhenRightSide;
- (void)layoutWhenLeftSide;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) YWMergeForwardBubbleViewModel *viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

