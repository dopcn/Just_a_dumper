//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AHUIFramework/AHViewController.h>

#import "AHStencilViewControllerDelegate-Protocol.h"
#import "AHStencilViewControllerLayoutDataSource-Protocol.h"
#import "CLLocationManagerDelegate-Protocol.h"
#import "MKMapViewDelegate-Protocol.h"

@class AHMapView, AHStencilViewController, CLLocationManager, NSMutableArray, NSString, UIButton;

@interface DLRBaiDuMapController : AHViewController <AHStencilViewControllerDelegate, AHStencilViewControllerLayoutDataSource, MKMapViewDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    AHMapView *bmkMapView;
    _Bool isupdateLocationData;
    NSMutableArray *dealerArray;
    UIButton *reportButton;
    NSString *_reportUrl;
    long long _specId;
    AHStencilViewController *_stencilViewController;
}

@property(retain, nonatomic) AHStencilViewController *stencilViewController; // @synthesize stencilViewController=_stencilViewController;
@property(nonatomic) long long specId; // @synthesize specId=_specId;
@property(retain, nonatomic) NSString *reportUrl; // @synthesize reportUrl=_reportUrl;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton;
@property(retain, nonatomic) NSMutableArray *dealerArray; // @synthesize dealerArray;
- (void).cxx_destruct;
- (void)clientViewChangedInAHStencilViewController:(id)arg1 clientViewSize:(struct CGSize)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (void)backButtonPressInViewController:(id)arg1;
- (int)viewModeInViewContoller:(id)arg1;
- (id)clientViewInViewContoller:(id)arg1 clientViewSize:(struct CGSize)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (id)rightExtensionInViewContoller:(id)arg1;
- (id)navigationMainViewForViewController:(id)arg1 mainViewWidh:(float)arg2;
- (int)backButtonTypeInViewController:(id)arg1;
- (_Bool)hasFooterBarInViewController:(id)arg1;
- (_Bool)hasNavigationBarInViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)reportButtonClick:(id)arg1;
- (void)initTopViewButton;
- (void)initStencilViewController;
- (void)autoLocation:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setup:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

