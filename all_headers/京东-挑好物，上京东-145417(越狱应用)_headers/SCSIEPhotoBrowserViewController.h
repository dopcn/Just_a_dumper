//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPageViewController.h>

#import "SCSIEPhotoPageViewControllerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"

@class NSMutableArray, NSString, UIBarButtonItem, UIImageView, UINavigationBar, UIToolbar, UIView, UIViewController;
@protocol SCSIEPhotoBrowserViewControllerDataSource;

@interface SCSIEPhotoBrowserViewController : UIPageViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SCSIEPhotoPageViewControllerDelegate>
{
    _Bool _controlHiden;
    _Bool _parentNavBarHiden;
    _Bool _apearAnimated;
    int _previousModalPresentationStyle;
    id <SCSIEPhotoBrowserViewControllerDataSource> _ieDataSource;
    unsigned long long _startingIndex;
    UIBarButtonItem *_itemChoose;
    long long _currentIndex;
    UIToolbar *_toolBar;
    UINavigationBar *_navBar;
    UIBarButtonItem *_itemSend;
    NSMutableArray *_mPhotos;
    UIImageView *_fromImageView;
    UIView *_animatedImageView;
    UIViewController *_applicationTopViewController;
    struct CGRect _initialImageViewFrame;
    struct CGRect _finalImageViewFrame;
}

+ (id)instance;
@property(nonatomic) _Bool apearAnimated; // @synthesize apearAnimated=_apearAnimated;
@property(nonatomic) int previousModalPresentationStyle; // @synthesize previousModalPresentationStyle=_previousModalPresentationStyle;
@property(retain, nonatomic) UIViewController *applicationTopViewController; // @synthesize applicationTopViewController=_applicationTopViewController;
@property(nonatomic) struct CGRect finalImageViewFrame; // @synthesize finalImageViewFrame=_finalImageViewFrame;
@property(nonatomic) struct CGRect initialImageViewFrame; // @synthesize initialImageViewFrame=_initialImageViewFrame;
@property(retain, nonatomic) UIView *animatedImageView; // @synthesize animatedImageView=_animatedImageView;
@property(retain, nonatomic) UIImageView *fromImageView; // @synthesize fromImageView=_fromImageView;
@property(retain, nonatomic) NSMutableArray *mPhotos; // @synthesize mPhotos=_mPhotos;
@property(nonatomic) _Bool parentNavBarHiden; // @synthesize parentNavBarHiden=_parentNavBarHiden;
@property(nonatomic) _Bool controlHiden; // @synthesize controlHiden=_controlHiden;
@property(retain, nonatomic) UIBarButtonItem *itemSend; // @synthesize itemSend=_itemSend;
@property(retain, nonatomic) UINavigationBar *navBar; // @synthesize navBar=_navBar;
@property(retain, nonatomic) UIToolbar *toolBar; // @synthesize toolBar=_toolBar;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIBarButtonItem *itemChoose; // @synthesize itemChoose=_itemChoose;
@property(nonatomic) unsigned long long startingIndex; // @synthesize startingIndex=_startingIndex;
@property(nonatomic) __weak id <SCSIEPhotoBrowserViewControllerDataSource> ieDataSource; // @synthesize ieDataSource=_ieDataSource;
- (void).cxx_destruct;
- (void)photoViewController:(id)arg1 didSingleTap:(struct CGPoint)arg2;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (void)dismissPhotoAnimated:(_Bool)arg1;
- (void)showPhotoBrowserAnimated:(_Bool)arg1 parent:(id)arg2;
- (void)doTapImageViewUrl:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)doTapImage:(id)arg1;
- (void)doTapImageView:(id)arg1;
- (id)screenshot;
- (id)topviewController;
- (void)panGestureRecognized:(id)arg1;
- (id)photoViewControllerWithIndex:(unsigned long long)arg1;
- (void)toggleControls;
- (long long)numOfPhotos;
- (void)loadPhotoPage;
- (void)loadData;
- (id)currentPageView;
- (void)itemBackAction:(id)arg1;
- (void)setupChooseView;
- (void)setupNavBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

