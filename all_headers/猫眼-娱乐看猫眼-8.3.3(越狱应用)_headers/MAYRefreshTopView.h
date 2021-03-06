//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CYPullRefreshViewProtocol-Protocol.h"

@class MAYPullActivityIndicatorView, MAYPullStateCircleView, NSString;

@interface MAYRefreshTopView : UIView <CYPullRefreshViewProtocol>
{
    unsigned long long _pullState;
    double _pullingPercent;
    CDUnknownBlockType _triggerLoadingStateBlock;
    UIView *_contentView;
    MAYPullStateCircleView *_pullCircleView;
    MAYPullActivityIndicatorView *_activityIndicatorView;
}

@property(readonly, retain, nonatomic) MAYPullActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, retain, nonatomic) MAYPullStateCircleView *pullCircleView; // @synthesize pullCircleView=_pullCircleView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType triggerLoadingStateBlock; // @synthesize triggerLoadingStateBlock=_triggerLoadingStateBlock;
@property(nonatomic) double pullingPercent; // @synthesize pullingPercent=_pullingPercent;
@property(nonatomic) unsigned long long pullState; // @synthesize pullState=_pullState;
- (void).cxx_destruct;
- (double)contentHeight;
- (void)setPullState:(unsigned long long)arg1 animated:(_Bool)arg2;
- (float)translantPercent:(float)arg1;
- (void)pullingPercent:(float)arg1;
- (void)topCircleStrokeColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

