//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "ONESBaseMapEntranceDelegate-Protocol.h"
#import "SShareAnnotationMangerDelegate-Protocol.h"

@class NSString, ONESBaseMapEntrance, ONESBasePointAnnotation, SShareAnnotationManger, SShareCarAddressBar, SShareCarEndGuideView, SShareCarSelectStationView, SShareMapAnnotation, TRTopNavgationView, UIButton;

@interface SShareCarEndAddressViewController : UIViewController <ONESBaseMapEntranceDelegate, SShareAnnotationMangerDelegate>
{
    _Bool _isDrivering;
    CDUnknownBlockType _confirmBlock;
    TRTopNavgationView *_topNavgationView;
    SShareCarEndGuideView *_guideView;
    ONESBaseMapEntrance *_mapEntrance;
    SShareCarSelectStationView *_selectView;
    SShareCarAddressBar *_addressBar;
    UIButton *_locationButton;
    UIButton *_myInfoButtn;
    UIButton *_callButton;
    SShareAnnotationManger *_annotationManager;
    ONESBasePointAnnotation *_locationAnnotation;
    SShareMapAnnotation *_stationAnnotation;
    NSString *_selectAddress;
}

@property(retain, nonatomic) NSString *selectAddress; // @synthesize selectAddress=_selectAddress;
@property(retain, nonatomic) SShareMapAnnotation *stationAnnotation; // @synthesize stationAnnotation=_stationAnnotation;
@property(retain, nonatomic) ONESBasePointAnnotation *locationAnnotation; // @synthesize locationAnnotation=_locationAnnotation;
@property(retain, nonatomic) SShareAnnotationManger *annotationManager; // @synthesize annotationManager=_annotationManager;
@property(retain, nonatomic) UIButton *callButton; // @synthesize callButton=_callButton;
@property(retain, nonatomic) UIButton *myInfoButtn; // @synthesize myInfoButtn=_myInfoButtn;
@property(retain, nonatomic) UIButton *locationButton; // @synthesize locationButton=_locationButton;
@property(retain, nonatomic) SShareCarAddressBar *addressBar; // @synthesize addressBar=_addressBar;
@property(retain, nonatomic) SShareCarSelectStationView *selectView; // @synthesize selectView=_selectView;
@property(retain, nonatomic) ONESBaseMapEntrance *mapEntrance; // @synthesize mapEntrance=_mapEntrance;
@property(retain, nonatomic) SShareCarEndGuideView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) TRTopNavgationView *topNavgationView; // @synthesize topNavgationView=_topNavgationView;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(nonatomic) _Bool isDrivering; // @synthesize isDrivering=_isDrivering;
- (void).cxx_destruct;
- (void)kefuClcick;
- (void)infoClick;
- (id)distance:(id)arg1 toCoor:(struct CLLocationCoordinate2D)arg2;
- (void)updateAddress:(id)arg1;
- (void)shareMapAnnotationViewSelected:(id)arg1;
- (void)bestView;
- (void)choice;
- (void)disMissSelectView;
- (void)showSelectView;
- (id)defaultSelectedId:(id)arg1;
- (void)autoSelectStation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)fetchStations:(struct CLLocationCoordinate2D)arg1;
- (void)disMissGudie;
- (id)configCarIcon;
- (void)addStationAnnotation:(struct CLLocationCoordinate2D)arg1 isCar:(_Bool)arg2;
- (void)choiceEndAddress;
- (void)onCancel;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initMapConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

