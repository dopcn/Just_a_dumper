//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, UILabel, WMOrderReviewScoreAndPickLabelView;

@interface WMOrderEvaluationScoreAndPickLabelView : UIView
{
    CDUnknownBlockType _viewHeightDidChangeBlock;
    long long _scoreType;
    NSDictionary *_commentLabelTipsDic;
    UILabel *_titleLabel;
    WMOrderReviewScoreAndPickLabelView *_scoreView;
}

@property(retain, nonatomic) WMOrderReviewScoreAndPickLabelView *scoreView; // @synthesize scoreView=_scoreView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSDictionary *commentLabelTipsDic; // @synthesize commentLabelTipsDic=_commentLabelTipsDic;
@property(nonatomic) long long scoreType; // @synthesize scoreType=_scoreType;
@property(copy, nonatomic) CDUnknownBlockType viewHeightDidChangeBlock; // @synthesize viewHeightDidChangeBlock=_viewHeightDidChangeBlock;
- (void).cxx_destruct;
- (void)setScoreViewIsSupportLabelsFunction:(_Bool)arg1;
- (long long)commondityScore;
- (void)loadViewWithModel:(id)arg1 type:(long long)arg2;
- (void)layoutScoreAndPickLabelView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

