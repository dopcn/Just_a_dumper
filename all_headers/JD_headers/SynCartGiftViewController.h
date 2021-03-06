//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "SynCartGiftPoolsCellDelegate-Protocol.h"

@class JDPackModel, JDSKUModel, JDStoreNetwork, NSArray, NSString, UITableView;

@interface SynCartGiftViewController : JDViewController <SynCartGiftPoolsCellDelegate>
{
    UITableView *_tableview;
    JDStoreNetwork *_network;
    JDSKUModel *_skuModel;
    JDPackModel *_packModel;
    unsigned long long _preVC;
    CDUnknownBlockType _confirmBlock;
    NSArray *_items;
    NSArray *_giftDuplicate;
}

@property(retain, nonatomic) NSArray *giftDuplicate; // @synthesize giftDuplicate=_giftDuplicate;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(nonatomic) unsigned long long preVC; // @synthesize preVC=_preVC;
@property(retain, nonatomic) JDPackModel *packModel; // @synthesize packModel=_packModel;
@property(retain, nonatomic) JDSKUModel *skuModel; // @synthesize skuModel=_skuModel;
- (void).cxx_destruct;
- (void)checkBoxSelectedWithSku:(id)arg1 andCell:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)getPageParams;
- (id)getGiftArray;
- (void)pvSubmitWithSuccess:(_Bool)arg1;
- (void)submit;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

