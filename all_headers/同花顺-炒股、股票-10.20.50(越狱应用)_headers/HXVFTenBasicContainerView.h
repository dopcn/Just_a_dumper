//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HXVRobotContainerView.h"

#import "HXVContainerTitleViewDelegate-Protocol.h"

@class HXVContainerTitleView, NSString, UIView;

@interface HXVFTenBasicContainerView : HXVRobotContainerView <HXVContainerTitleViewDelegate>
{
    HXVContainerTitleView *_titleView;
    UIView *_bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) HXVContainerTitleView *titleView; // @synthesize titleView=_titleView;
- (void).cxx_destruct;
- (void)moreButtonClicked;
- (void)bindViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

