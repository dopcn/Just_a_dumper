//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NVShopInfoBaseModule.h"

@class KTVShopBusinessManagerEnterCell, KTVShopBusinessManagerNoteCell, KTVShopInfoTitleCell, NSArray, NVModelBaseKTVBusinessManagerGroup;

@interface KTVShopBusinessManagerModule : NVShopInfoBaseModule
{
    _Bool _shopPhoneShowable;
    _Bool _hasManagers;
    _Bool _hasNote;
    NVModelBaseKTVBusinessManagerGroup *_result;
    KTVShopInfoTitleCell *_titleCell;
    NSArray *_businessManagers;
    KTVShopBusinessManagerEnterCell *_enterCell;
    KTVShopBusinessManagerNoteCell *_noteCell;
}

@property(nonatomic) _Bool hasNote; // @synthesize hasNote=_hasNote;
@property(nonatomic) _Bool hasManagers; // @synthesize hasManagers=_hasManagers;
@property(retain, nonatomic) KTVShopBusinessManagerNoteCell *noteCell; // @synthesize noteCell=_noteCell;
@property(retain, nonatomic) KTVShopBusinessManagerEnterCell *enterCell; // @synthesize enterCell=_enterCell;
@property(retain, nonatomic) NSArray *businessManagers; // @synthesize businessManagers=_businessManagers;
@property(nonatomic) _Bool shopPhoneShowable; // @synthesize shopPhoneShowable=_shopPhoneShowable;
@property(retain, nonatomic) KTVShopInfoTitleCell *titleCell; // @synthesize titleCell=_titleCell;
@property(retain, nonatomic) NVModelBaseKTVBusinessManagerGroup *result; // @synthesize result=_result;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)getBusinessManagerInfoCellWithIdentifier:(id)arg1 index:(long long)arg2 tableView:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)heightForHeaderCellForSection:(long long)arg1;
- (id)headerCellForSection:(long long)arg1;
- (_Bool)hasHeaderCellForSection:(long long)arg1;
- (void)showManagerInfo:(id)arg1;
- (void)turnToNextPage;
- (void)reloadData;
- (id)enterSubtitleString;
- (id)enterDescString;
- (id)enterTitleString;
- (id)subtitleString;
- (id)titleString;
- (id)noteString;
- (void)queryShoperInfo;
- (void)setupModule;
- (void)loadView;
- (_Bool)shouldShow;

@end

