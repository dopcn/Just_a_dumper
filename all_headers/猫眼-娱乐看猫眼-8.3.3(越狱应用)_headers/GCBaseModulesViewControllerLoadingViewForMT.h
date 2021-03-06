//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GCBaseModulesViewControllerLoadingViewProtocol-Protocol.h"

@class NSString, UIImageView, UILabel;

@interface GCBaseModulesViewControllerLoadingViewForMT : UIView <GCBaseModulesViewControllerLoadingViewProtocol>
{
    UIImageView *_imageViewForLoading;
    UILabel *_labelForLoadingTip;
}

@property(retain, nonatomic) UILabel *labelForLoadingTip; // @synthesize labelForLoadingTip=_labelForLoadingTip;
@property(retain, nonatomic) UIImageView *imageViewForLoading; // @synthesize imageViewForLoading=_imageViewForLoading;
- (void).cxx_destruct;
- (id)obtainLoadingImagesForMT;
- (void)stopAnimating;
- (void)startAnimating;
- (void)layoutSubviews;
- (void)initialViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

