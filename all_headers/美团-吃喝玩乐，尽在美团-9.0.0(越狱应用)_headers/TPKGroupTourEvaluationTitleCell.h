//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPKTableViewCell.h"

@class MTStarRater, UIImageView, UILabel;

@interface TPKGroupTourEvaluationTitleCell : TPKTableViewCell
{
    UILabel *_titleLabel;
    MTStarRater *_starRaterView;
    UILabel *_evaluationScoreLabel;
    UILabel *_moreEvaluationLabel;
    UIImageView *_moreIndicatorImageView;
}

@property(retain, nonatomic) UIImageView *moreIndicatorImageView; // @synthesize moreIndicatorImageView=_moreIndicatorImageView;
@property(retain, nonatomic) UILabel *moreEvaluationLabel; // @synthesize moreEvaluationLabel=_moreEvaluationLabel;
@property(retain, nonatomic) UILabel *evaluationScoreLabel; // @synthesize evaluationScoreLabel=_evaluationScoreLabel;
@property(retain, nonatomic) MTStarRater *starRaterView; // @synthesize starRaterView=_starRaterView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setupView;
- (void)bindSignal;
- (void)setItem:(id)arg1;

@end

