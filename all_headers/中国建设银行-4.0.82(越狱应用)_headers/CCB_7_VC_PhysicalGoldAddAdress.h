//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCBFormViewController.h"

#import "CCBAreaSelectViewControllerCloseDelegate-Protocol.h"
#import "CCBTextFieldDelegate-Protocol.h"

@class CCB_7_VM_PhysicalGoldAddAdress, CCB_O_PYX009, NSString;

@interface CCB_7_VC_PhysicalGoldAddAdress : CCBFormViewController <CCBAreaSelectViewControllerCloseDelegate, CCBTextFieldDelegate>
{
    NSString *selectArea;
    NSString *provice;
    NSString *city;
    NSString *town;
    NSString *provinceId;
    NSString *cityId;
    NSString *townId;
    _Bool isMobile;
    CCB_O_PYX009 *pyx009;
    _Bool _isFirstAdd;
    CCB_7_VM_PhysicalGoldAddAdress *_viewModel;
}

@property(retain, nonatomic) CCB_7_VM_PhysicalGoldAddAdress *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isFirstAdd; // @synthesize isFirstAdd=_isFirstAdd;
- (void).cxx_destruct;
- (void)judgeJSBtnEnableStatus;
- (id)cityCodeFormCityName:(id)arg1 andQueryType:(id)arg2;
- (id)cityNameFormCityCode:(id)arg1 andQueryType:(id)arg2;
- (void)areaSelectDecode:(id)arg1 andPlaceName:(id)arg2;
- (void)selectAreaName:(id)arg1;
- (void)formViewCellDidClickRightButton:(id)arg1;
- (void)formViewCell:(id)arg1 didClickButtonAtIndex:(long long)arg2;
- (_Bool)judgementContactNumberIsLegalNumber:(id)arg1;
- (_Bool)didSelectKeyButton:(id)arg1 keyValue:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addObserverAdressTrade;
- (void)saveDetailAdress:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

