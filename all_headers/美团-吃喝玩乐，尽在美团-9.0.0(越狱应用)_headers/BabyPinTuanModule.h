//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCBaseModule.h"

@class BabyPinTuanDetailCell, GCPopMask, NVModelBaseBabyPintuanInfo, UIView;

@interface BabyPinTuanModule : GCBaseModule
{
    NVModelBaseBabyPintuanInfo *_pinTuanItem;
    BabyPinTuanDetailCell *_pinTuanCell;
    long long _dealId;
    UIView *_modalView;
    UIView *_alertView;
    GCPopMask *_popManager;
}

@property(retain, nonatomic) GCPopMask *popManager; // @synthesize popManager=_popManager;
@property(retain, nonatomic) UIView *alertView; // @synthesize alertView=_alertView;
@property(retain, nonatomic) UIView *modalView; // @synthesize modalView=_modalView;
@property(nonatomic) long long dealId; // @synthesize dealId=_dealId;
@property(retain, nonatomic) BabyPinTuanDetailCell *pinTuanCell; // @synthesize pinTuanCell=_pinTuanCell;
@property(retain, nonatomic) NVModelBaseBabyPintuanInfo *pinTuanItem; // @synthesize pinTuanItem=_pinTuanItem;
- (void).cxx_destruct;
- (void)gotoPay;
- (void)showAlertView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)dismissModalView;
- (void)showPopModalView;
- (void)makeupCell;
- (void)queryData;
- (void)setupModule;
- (_Bool)shouldShow;
- (id)gc_mge_info;
- (_Bool)needAutoModuleView;

@end

