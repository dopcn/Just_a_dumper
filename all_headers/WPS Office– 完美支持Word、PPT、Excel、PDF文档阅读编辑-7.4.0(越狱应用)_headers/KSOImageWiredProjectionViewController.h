//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "KSODualScreenManagerDelegate-Protocol.h"
#import "KSOWiredProjectionDrawInkControllerDelegate-Protocol.h"
#import "KSOWiredProjectionInkViewDelegate-Protocol.h"
#import "KWBrowserViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WPSInkGuideViewDelegate-Protocol.h"

@class KSODualScreenManager, KSOImageWiredProjectionScrollView, KSOWiredProjectionInkView, KWBrowserViewController, KWProjectionGuideViewController, NSMutableSet, NSString, UIButton, UIImage, UIImageView, UIScrollView, UITapGestureRecognizer, UIView, WPSInkGuideView;

@interface KSOImageWiredProjectionViewController : UIViewController <UIScrollViewDelegate, KSODualScreenManagerDelegate, KSOWiredProjectionDrawInkControllerDelegate, KWBrowserViewControllerDelegate, KSOWiredProjectionInkViewDelegate, WPSInkGuideViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _isHaveShowInkGuideView;
    _Bool _isTwoFingerMove;
    _Bool _isOpenInk;
    long long _openInkTimes;
    long long _closeInkTimes;
    _Bool _isLoaded;
    _Bool _isFirstOpen;
    _Bool _isOpenFromMainInterface;
    NSString *_imagePath;
    KSODualScreenManager *_dualScreenManager;
    UIScrollView *_scrollView;
    KSOImageWiredProjectionScrollView *_imageWiredProjectionScrollView;
    UIView *_multiScreenInkView;
    UIImageView *_imageView;
    UIButton *_closeButton;
    UIButton *_inkButton;
    UIButton *_stateButton;
    KSOWiredProjectionInkView *_inkView;
    WPSInkGuideView *_inkGuideView;
    UITapGestureRecognizer *_oneTapOneTouchGestureRecognizer;
    UITapGestureRecognizer *_twoTapOneTouchGestureRecognizer;
    KWProjectionGuideViewController *_wireProjectionGuideVC;
    KWBrowserViewController *_browserViewController;
    NSMutableSet *_subButtons;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSMutableSet *subButtons; // @synthesize subButtons=_subButtons;
@property(retain, nonatomic) KWBrowserViewController *browserViewController; // @synthesize browserViewController=_browserViewController;
@property(retain, nonatomic) KWProjectionGuideViewController *wireProjectionGuideVC; // @synthesize wireProjectionGuideVC=_wireProjectionGuideVC;
@property(retain, nonatomic) UITapGestureRecognizer *twoTapOneTouchGestureRecognizer; // @synthesize twoTapOneTouchGestureRecognizer=_twoTapOneTouchGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *oneTapOneTouchGestureRecognizer; // @synthesize oneTapOneTouchGestureRecognizer=_oneTapOneTouchGestureRecognizer;
@property(retain, nonatomic) WPSInkGuideView *inkGuideView; // @synthesize inkGuideView=_inkGuideView;
@property(retain, nonatomic) KSOWiredProjectionInkView *inkView; // @synthesize inkView=_inkView;
@property(retain, nonatomic) UIButton *stateButton; // @synthesize stateButton=_stateButton;
@property(retain, nonatomic) UIButton *inkButton; // @synthesize inkButton=_inkButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *multiScreenInkView; // @synthesize multiScreenInkView=_multiScreenInkView;
@property(retain, nonatomic) KSOImageWiredProjectionScrollView *imageWiredProjectionScrollView; // @synthesize imageWiredProjectionScrollView=_imageWiredProjectionScrollView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) KSODualScreenManager *dualScreenManager; // @synthesize dualScreenManager=_dualScreenManager;
@property(nonatomic) _Bool isOpenFromMainInterface; // @synthesize isOpenFromMainInterface=_isOpenFromMainInterface;
@property(nonatomic) _Bool isFirstOpen; // @synthesize isFirstOpen=_isFirstOpen;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)browserViewControllerDidClose:(id)arg1;
- (void)removeInkGuideView;
- (void)wiredProjectionInkViewInkDrawMoving;
- (void)wiredProjectionInkViewInkNeedUpdate;
- (void)inkDrawMoving;
- (void)inkNeedUpdate;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dualScreenManagerDidDisconnect:(id)arg1;
- (void)dualScreenManagerDidConnect:(id)arg1;
- (void)resetScrollViewContentInset;
- (void)hiddenSubButtons;
- (void)hideWireProjectionGuideView;
- (void)showWireProjectionGuideView;
- (void)screenNotificationDidAccept;
- (void)stateButtonEvent:(id)arg1;
- (void)inkButtonEvent:(id)arg1;
- (void)closeButtonDownOutSizeEvent:(id)arg1;
- (void)closeButtonDownInSizeEvent:(id)arg1;
- (void)closeButtonEvent:(id)arg1;
- (struct CGRect)zoomRectFromScale:(double)arg1 toScale:(double)arg2 withCenter:(struct CGPoint)arg3;
- (void)twoTapOneTouchGestureRecognizerAction:(id)arg1;
- (void)oneTapOneTouchGestureRecognizerAction:(id)arg1;
- (void)clearAllInk;
- (void)contentDidScroll;
- (void)updateProjectionInk;
- (void)showInkGuideView;
- (void)reloadInkView;
- (void)loadStateButton;
- (void)loadInkButton;
- (void)loadCloseButton;
- (void)loadSubviews;
- (void)reloadScrollView;
- (void)reloadImageView;
- (void)reloadSubviews;
- (void)disconnectDualScreen;
- (void)connectDualScreen;
- (void)runDualScreen;
- (void)resetAllGestureEnabled:(_Bool)arg1;
- (void)addGestureRecognizers;
- (void)storeRecord:(id)arg1;
- (void)dismissWithAnimated:(_Bool)arg1;
- (void)forceClose:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

