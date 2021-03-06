//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, SNBDismissableTitleCell, SNBRecommendCardsViewModel, UITableView;
@protocol SNBStatusDataHandlerDelegate;

@interface SNBRecommendCardsView : UIView <UITableViewDataSource, UITableViewDelegate, TTTAttributedLabelDelegate>
{
    _Bool _grayTheme;
    SNBRecommendCardsViewModel *_viewModel;
    id <SNBStatusDataHandlerDelegate> _delegate;
    CDUnknownBlockType _didTapRecommendCard;
    CDUnknownBlockType _didTapCloseButtonForRecommendCards;
    CDUnknownBlockType _didTapFollowButton;
    UITableView *_tableView;
    SNBDismissableTitleCell *_headerCell;
    UIView *_footerView;
}

+ (double)viewHeightForCards:(id)arg1;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) SNBDismissableTitleCell *headerCell; // @synthesize headerCell=_headerCell;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType didTapFollowButton; // @synthesize didTapFollowButton=_didTapFollowButton;
@property(copy, nonatomic) CDUnknownBlockType didTapCloseButtonForRecommendCards; // @synthesize didTapCloseButtonForRecommendCards=_didTapCloseButtonForRecommendCards;
@property(copy, nonatomic) CDUnknownBlockType didTapRecommendCard; // @synthesize didTapRecommendCard=_didTapRecommendCard;
@property(nonatomic) _Bool grayTheme; // @synthesize grayTheme=_grayTheme;
@property(nonatomic) __weak id <SNBStatusDataHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SNBRecommendCardsViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)_snb_didTapCloseButton:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)cardAtIndexPath:(id)arg1;
- (struct UIEdgeInsets)separatorInsetsAtIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateTheme:(_Bool)arg1;
- (void)_snb_ObserverUserFollowingStateIfNeeded;
- (void)_snb_configureSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 viewModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

