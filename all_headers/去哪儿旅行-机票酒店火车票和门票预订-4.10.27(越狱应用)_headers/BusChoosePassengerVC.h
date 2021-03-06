//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BusNaviBarVC.h"

#import "BusEditOnePassengerVCDelgt-Protocol.h"
#import "BusInterEditPassengerVCDelgt-Protocol.h"
#import "BusShipEditPassengerVCDelgt-Protocol.h"
#import "SearchNetDealPtc-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "VCControllerPtc-Protocol.h"

@class BusMobilePassenger, BusPassengerRequiredGroup, NSArray, NSMutableArray, NSNumber, NSString, UITableView;
@protocol BusChoosePassengerVCDelgt;

@interface BusChoosePassengerVC : BusNaviBarVC <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, BusEditOnePassengerVCDelgt, BusInterEditPassengerVCDelgt, VCControllerPtc, SearchNetDealPtc, BusShipEditPassengerVCDelgt>
{
    _Bool _hasChildTicket;
    _Bool _isfromRN;
    _Bool _isSelector;
    UITableView *_tableViewInfo;
    NSArray *_passengerTypeList;
    NSString *_Childdesc;
    NSMutableArray *_arrayPCPassenger;
    NSMutableArray *_arrayAddedPcPassenger;
    long long _maxSeatNumber;
    id <BusChoosePassengerVCDelgt> _delegate;
    NSArray *_supportCertTypeList__Array__NSNumber;
    NSArray *_supportNationalityList__Array__NSString;
    NSNumber *_needFlightNo;
    NSString *_depData;
    BusPassengerRequiredGroup *_passengerRequiredGroup;
    CDUnknownBlockType _selectPassenger;
    NSMutableArray *_checkList;
    BusMobilePassenger *_deletePassenger;
}

@property(nonatomic) _Bool isSelector; // @synthesize isSelector=_isSelector;
@property(retain, nonatomic) BusMobilePassenger *deletePassenger; // @synthesize deletePassenger=_deletePassenger;
@property(retain, nonatomic) NSMutableArray *checkList; // @synthesize checkList=_checkList;
@property(copy, nonatomic) CDUnknownBlockType selectPassenger; // @synthesize selectPassenger=_selectPassenger;
@property(retain, nonatomic) BusPassengerRequiredGroup *passengerRequiredGroup; // @synthesize passengerRequiredGroup=_passengerRequiredGroup;
@property(nonatomic) _Bool isfromRN; // @synthesize isfromRN=_isfromRN;
@property(retain, nonatomic) NSString *depData; // @synthesize depData=_depData;
@property(copy, nonatomic) NSNumber *needFlightNo; // @synthesize needFlightNo=_needFlightNo;
@property(copy, nonatomic, getter=supportNationalityList, setter=setSupportNationalityList:) NSArray *supportNationalityList__Array__NSString; // @synthesize supportNationalityList__Array__NSString=_supportNationalityList__Array__NSString;
@property(copy, nonatomic, getter=supportCertTypeList, setter=setSupportCertTypeList:) NSArray *supportCertTypeList__Array__NSNumber; // @synthesize supportCertTypeList__Array__NSNumber=_supportCertTypeList__Array__NSNumber;
@property(nonatomic) __weak id <BusChoosePassengerVCDelgt> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long maxSeatNumber; // @synthesize maxSeatNumber=_maxSeatNumber;
@property(retain, nonatomic) NSMutableArray *arrayAddedPcPassenger; // @synthesize arrayAddedPcPassenger=_arrayAddedPcPassenger;
@property(retain, nonatomic) NSMutableArray *arrayPCPassenger; // @synthesize arrayPCPassenger=_arrayPCPassenger;
@property(retain, nonatomic) NSString *Childdesc; // @synthesize Childdesc=_Childdesc;
@property(retain, nonatomic) NSArray *passengerTypeList; // @synthesize passengerTypeList=_passengerTypeList;
@property(nonatomic) _Bool hasChildTicket; // @synthesize hasChildTicket=_hasChildTicket;
@property(retain, nonatomic) UITableView *tableViewInfo; // @synthesize tableViewInfo=_tableViewInfo;
- (void).cxx_destruct;
- (_Bool)passengerValidation:(id)arg1;
- (void)busShipEditPassenger:(long long)arg1;
- (_Bool)checkPassengerDataValid:(long long)arg1;
- (void)editInterPassengerBack:(id)arg1 originalPassenger:(id)arg2;
- (void)addInterPassengerBack:(id)arg1;
- (void)getSearch:(id)arg1 forResult:(id)arg2 forInfo:(id)arg3;
- (void)requestContactStart:(id)arg1;
- (void)editPassengerBack:(id)arg1 originalPassenger:(id)arg2;
- (void)addPassengerBack:(id)arg1;
- (void)pushToNewPassengerVC:(long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)isPassengerValid:(id)arg1;
- (void)choosePassengerStart:(long long)arg1;
- (void)editPassenger:(id)arg1;
- (void)goAddPassenger:(id)arg1;
- (_Bool)doConfirm:(id)arg1;
- (_Bool)canGoBack;
- (void)goBack:(id)arg1;
- (void)setupCellPassengerC2R2LSubs:(id)arg1 inSize:(struct CGSize *)arg2 forPassenger:(id)arg3;
- (void)initCellPassengerC2R2LSubs:(id)arg1;
- (void)setupCellPassengerC2R1Subs:(id)arg1 inSize:(struct CGSize *)arg2 forPassenger:(id)arg3;
- (void)initCellPassengerC2R1Subs:(id)arg1;
- (void)setupCellPassengerC2Subs:(id)arg1 inSize:(struct CGSize *)arg2 forIndex:(long long)arg3;
- (void)initCellPassengerC2Subs:(id)arg1 forPassenger:(id)arg2;
- (void)setupCellPassengerSubs:(id)arg1 inSize:(struct CGSize *)arg2 forIndex:(long long)arg3;
- (void)initCellPassengerSubs:(id)arg1 forPassenger:(id)arg2;
- (void)setupNavigationBarSubs:(id)arg1;
- (void)setupViewRootSubs:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

