//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPPFeedDetailBaseItemView.h"

@class QYPPFeedRelatedCirclesView, UIView;

@interface QYPPFeedDetailRelatedCirclesItemView : QYPPFeedDetailBaseItemView
{
    QYPPFeedRelatedCirclesView *_relatedCirclesView;
    UIView *_topSeperatorGrayView;
}

+ (double)relateCirclesViewHeightIsShowSingleView:(_Bool)arg1;
+ (double)calculateViewHeight:(id)arg1 viewLogic:(id)arg2 maxWidth:(double)arg3;
@property(retain, nonatomic) UIView *topSeperatorGrayView; // @synthesize topSeperatorGrayView=_topSeperatorGrayView;
@property(retain, nonatomic) QYPPFeedRelatedCirclesView *relatedCirclesView; // @synthesize relatedCirclesView=_relatedCirclesView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)createSubViews;
- (void)updateViewWithViewLogic:(id)arg1 maxWidth:(double)arg2;

@end

