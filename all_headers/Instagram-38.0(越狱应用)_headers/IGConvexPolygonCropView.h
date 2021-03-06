//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "IGConvexPolygonScrollViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class IGConvexPolygonScrollView, NSArray, NSString;
@protocol IGConvexPolygonCropViewDelegate;

@interface IGConvexPolygonCropView : UIView <IGConvexPolygonScrollViewDelegate, UIGestureRecognizerDelegate>
{
    IGConvexPolygonScrollView *_scrollView;
    id <IGConvexPolygonCropViewDelegate> _delegate;
}

@property(nonatomic) __weak id <IGConvexPolygonCropViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndZoomBouncingAnimation:(id)arg1;
- (void)scrollViewWillBeginZoomBouncingAnimation:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1;
- (void)scrollViewWillBeginZooming:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)cancelAnimations;
@property(copy, nonatomic) NSArray *contentRegion;
@property(nonatomic) double cropAngle;
@property(nonatomic) struct CGPoint cropCenter;
@property(nonatomic) double cropZoomScale;
- (void)setContentTransform:(union _GLKMatrix4)arg1;
- (void)updateContentViewWithContentTransform:(union _GLKMatrix4)arg1 contentRegion:(id)arg2 cropCenter:(struct CGPoint)arg3 cropScale:(double)arg4 cropAspectRatio:(double)arg5;
- (void)setContentView:(id)arg1 viewModelSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

