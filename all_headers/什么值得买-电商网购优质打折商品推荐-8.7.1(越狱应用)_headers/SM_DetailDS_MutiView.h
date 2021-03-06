//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIButton, UITableView;

@interface SM_DetailDS_MutiView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *bgView;
    UIView *bottomV;
    UIButton *wzspBtn;
    UIButton *ljdsBtn;
    UIButton *closeBtn;
    UIView *whiteV;
    _Bool _videoBool;
    NSMutableArray *_listArr;
    UITableView *_tableV;
    NSMutableDictionary *_detailDic;
    CDUnknownBlockType _SM_DetailDSBlock;
    CDUnknownBlockType _SM_DetailLJDSBlock;
    CDUnknownBlockType _SM_DetailWZSPBlock;
    NSString *_typeStr;
    CDUnknownBlockType _SM_DetailLJDCloseBlock;
    long long _type;
    NSString *_commonTitle;
}

@property(retain, nonatomic) NSString *commonTitle; // @synthesize commonTitle=_commonTitle;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType SM_DetailLJDCloseBlock; // @synthesize SM_DetailLJDCloseBlock=_SM_DetailLJDCloseBlock;
@property(retain, nonatomic) NSString *typeStr; // @synthesize typeStr=_typeStr;
@property(copy, nonatomic) CDUnknownBlockType SM_DetailWZSPBlock; // @synthesize SM_DetailWZSPBlock=_SM_DetailWZSPBlock;
@property(copy, nonatomic) CDUnknownBlockType SM_DetailLJDSBlock; // @synthesize SM_DetailLJDSBlock=_SM_DetailLJDSBlock;
@property(copy, nonatomic) CDUnknownBlockType SM_DetailDSBlock; // @synthesize SM_DetailDSBlock=_SM_DetailDSBlock;
@property(retain, nonatomic) NSMutableDictionary *detailDic; // @synthesize detailDic=_detailDic;
@property(retain, nonatomic) UITableView *tableV; // @synthesize tableV=_tableV;
@property(retain, nonatomic) NSMutableArray *listArr; // @synthesize listArr=_listArr;
@property(nonatomic) _Bool videoBool; // @synthesize videoBool=_videoBool;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsIntableView:(id)arg1;
- (void)showBuyAnimate;
- (void)lidsPress;
- (void)wzspBtnPress;
- (id)returnGTMDetailChannel;
- (void)tapPRess;
- (void)makeDS;
- (id)initWithFrame:(struct CGRect)arg1 andDic:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

