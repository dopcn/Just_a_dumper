//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "IGAnalyticsModule-Protocol.h"
#import "IGGestureHandler-Protocol.h"
#import "IGStoryMediaCompositionViewSwipableFilterDelegate-Protocol.h"
#import "IGStoryPostCaptureEditingViewControllerProtocol-Protocol.h"

@class IGStoryMediaCompositionView, IGStoryPostCaptureEditingControlsOverlayView, NSString, PHAsset, UILabel, UIView;

@interface IGStoryPostCaptureEditingViewController : UIViewController <IGStoryMediaCompositionViewSwipableFilterDelegate, IGAnalyticsModule, IGStoryPostCaptureEditingViewControllerProtocol, IGGestureHandler>
{
    PHAsset *_asset;
    UIView *_mediaCompositionWrapperView;
    IGStoryMediaCompositionView *_mediaCompositionView;
    UIView *_snapshotView;
    IGStoryPostCaptureEditingControlsOverlayView *_editingControlsOverlayView;
    UILabel *_filterNameLabel;
    struct CGSize _mediaCompositionSize;
}

+ (struct CGSize)mediaCompositionSize;
@property(readonly, nonatomic) struct CGSize mediaCompositionSize; // @synthesize mediaCompositionSize=_mediaCompositionSize;
- (void).cxx_destruct;
- (id)analyticsModule;
- (void)mediaCompositionView:(id)arg1 willSettleOnFilter:(id)arg2;
- (void)mediaCompositionView:(id)arg1 didSettleOnFilter:(id)arg2;
- (void)didTapCancelButton:(id)arg1;
- (void)didTapToDismiss:(id)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (struct CGRect)mediaCompositionRegion;
- (void)viewDidLayoutSubviews;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithAsset:(id)arg1;
- (_Bool)prefersStatusBarHidden;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

