//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GJGCCirleBaseTabHeaderView.h"

#import "GJGCCircleTabHeaderViewProtocol-Protocol.h"

@class GJAttributedLabel, GJGCImageView, GJGCOccupatonCirclesTopicListModel, NSString, UILabel, UIView;
@protocol GJGCCircleTopicHeaderViewDelegate;

@interface GJGCCircleTopicHeaderView : GJGCCirleBaseTabHeaderView <GJGCCircleTabHeaderViewProtocol>
{
    id <GJGCCircleTopicHeaderViewDelegate> _delegate;
    GJGCImageView *_topicImageView;
    UIView *_maskBlackView;
    UILabel *_topicTitleLabel;
    UILabel *_topicContentLabel;
    GJAttributedLabel *_topicDescriptionLabel;
    GJGCOccupatonCirclesTopicListModel *_topicModel;
    UIView *_lineView;
    UIView *_dividingLine;
}

@property(retain, nonatomic) UIView *dividingLine; // @synthesize dividingLine=_dividingLine;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) GJGCOccupatonCirclesTopicListModel *topicModel; // @synthesize topicModel=_topicModel;
@property(retain, nonatomic) GJAttributedLabel *topicDescriptionLabel; // @synthesize topicDescriptionLabel=_topicDescriptionLabel;
@property(retain, nonatomic) UILabel *topicContentLabel; // @synthesize topicContentLabel=_topicContentLabel;
@property(retain, nonatomic) UILabel *topicTitleLabel; // @synthesize topicTitleLabel=_topicTitleLabel;
@property(retain, nonatomic) UIView *maskBlackView; // @synthesize maskBlackView=_maskBlackView;
@property(retain, nonatomic) GJGCImageView *topicImageView; // @synthesize topicImageView=_topicImageView;
@property(nonatomic) __weak id <GJGCCircleTopicHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectTextCheckingResult:(id)arg2 atPoint:(struct CGPoint)arg3;
- (void)setObject:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;
- (double)viewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

