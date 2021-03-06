//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CompView.h"

@class HXSocketFetcher, UIButton, UIImageView, UILabel;

@interface Tjianbaojia : CompView
{
    UIImageView *_RiseOrFallTips;
    UILabel *_stockNameLabels;
    UILabel *_stockCodeLabels;
    UIButton *_jianbaojiaBtns;
    UIImageView *_arrowTipViews;
    UILabel *_stockLastLabels;
    UILabel *_stockRaiseLabels;
    UILabel *_stockChangeLabels;
    HXSocketFetcher *_fetcher;
}

@property(retain, nonatomic) HXSocketFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(nonatomic) __weak UILabel *stockChangeLabels; // @synthesize stockChangeLabels=_stockChangeLabels;
@property(nonatomic) __weak UILabel *stockRaiseLabels; // @synthesize stockRaiseLabels=_stockRaiseLabels;
@property(nonatomic) __weak UILabel *stockLastLabels; // @synthesize stockLastLabels=_stockLastLabels;
@property(nonatomic) __weak UIImageView *arrowTipViews; // @synthesize arrowTipViews=_arrowTipViews;
@property(nonatomic) __weak UIButton *jianbaojiaBtns; // @synthesize jianbaojiaBtns=_jianbaojiaBtns;
@property(nonatomic) __weak UILabel *stockCodeLabels; // @synthesize stockCodeLabels=_stockCodeLabels;
@property(nonatomic) __weak UILabel *stockNameLabels; // @synthesize stockNameLabels=_stockNameLabels;
@property(nonatomic) __weak UIImageView *RiseOrFallTips; // @synthesize RiseOrFallTips=_RiseOrFallTips;
- (void).cxx_destruct;
- (void)setTitleView;
- (void)onPressArrowButtonUp:(id)arg1;
- (id)getTableModelWithModel:(id)arg1 key:(int)arg2;
- (void)setTableDataWith:(id)arg1;
- (void)requestDataInfo:(_Bool)arg1;
- (void)willDisappear;
- (void)willAppear;
- (void)onFinishInflate;

@end

