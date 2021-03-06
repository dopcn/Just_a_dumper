//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CUBaseViewController.h"

#import "CUAdvertisingViewDelegate-Protocol.h"

@class CUAdvertisingView, CUCallService, NSArray, NSMutableArray, NSString, UITableViewCell, UIView;

@interface CUWoodEngravingViewController : CUBaseViewController <CUAdvertisingViewDelegate>
{
    int currentType;
    NSMutableArray *allWoodEngravings;
    NSMutableArray *allTypes;
    NSMutableArray *allproducts;
    CUCallService *productsCaller;
    UIView *advertisingView;
    UIView *ADSView;
    NSArray *allADs;
    CUCallService *indexADCaller;
    NSString *baiDuToken;
    NSMutableArray *selectedImages;
    NSString *controllerType;
    UITableViewCell *_ADSCell;
    CUAdvertisingView *_adsView;
}

@property(retain, nonatomic) CUAdvertisingView *adsView; // @synthesize adsView=_adsView;
@property(retain, nonatomic) UITableViewCell *ADSCell; // @synthesize ADSCell=_ADSCell;
@property(retain, nonatomic) NSString *controllerType; // @synthesize controllerType;
@property(retain, nonatomic) NSMutableArray *selectedImages; // @synthesize selectedImages;
@property(retain, nonatomic) NSString *baiDuToken; // @synthesize baiDuToken;
@property(retain, nonatomic) CUCallService *indexADCaller; // @synthesize indexADCaller;
@property(retain, nonatomic) NSArray *allADs; // @synthesize allADs;
@property(nonatomic) __weak UIView *ADSView; // @synthesize ADSView;
@property(retain, nonatomic) UIView *advertisingView; // @synthesize advertisingView;
@property(retain, nonatomic) CUCallService *productsCaller; // @synthesize productsCaller;
@property(nonatomic) int currentType; // @synthesize currentType;
@property(retain, nonatomic) NSMutableArray *allproducts; // @synthesize allproducts;
@property(retain, nonatomic) NSMutableArray *allTypes; // @synthesize allTypes;
@property(retain, nonatomic) NSMutableArray *allWoodEngravings; // @synthesize allWoodEngravings;
- (void).cxx_destruct;
- (void)backToParentForBaiDu:(id)arg1;
- (void)itemClicked:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)advertisingViewClickForPage:(long long)arg1;
- (void)initAdvertising;
- (void)resetShowProudcts;
- (void)typeBtnClicked:(id)arg1;
- (void)setTypeLab;
- (void)callFinish:(id)arg1 withData:(id)arg2;
- (void)getPrudoctList;
- (void)getAdList;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

