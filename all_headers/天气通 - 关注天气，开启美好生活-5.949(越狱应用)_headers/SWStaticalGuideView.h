//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView;
@protocol SWGuideViewDelegate;

@interface SWStaticalGuideView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    UIScrollView *bgScrollView;
    _Bool _isDismissing;
    NSArray *_imageList;
    id <SWGuideViewDelegate> _delegate;
}

+ (_Bool)shouldShowGuider;
@property(nonatomic) __weak id <SWGuideViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isDismissing; // @synthesize isDismissing=_isDismissing;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
- (void).cxx_destruct;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)guideViewQuit;
- (void)oneFingerSwiperight:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

