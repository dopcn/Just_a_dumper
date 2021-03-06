//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WoPayBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSIndexPath, NSMutableArray, NSString, UIButton, UITableView, UIView;

@interface WoPayTransactionRecordViewController : WoPayBaseViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _IsNeedFlush;
    _Bool _isIndexViewHidden;
    UITableView *_woPayListTableView;
    UIView *_woPayIndexView;
    UIView *_woPayBackView;
    UIButton *_woPayTradeBtn;
    UIButton *_woPayWithdrawBtn;
    UIButton *_woPayRechargeBtn;
    UIButton *_woPayTransferBtn;
    UIButton *_woPayDFBtn;
    UIButton *_woPayECashBtn;
    UIButton *_woPayRefundBtn;
    UIView *_woPayErrorView;
    NSMutableArray *_woPayListData;
    long long _woPayPageIndex;
    long long _woPaySelectedIndex;
    long long _woPayFromState;
    NSIndexPath *_woPayExpandIndex;
}

@property(retain, nonatomic) NSIndexPath *woPayExpandIndex; // @synthesize woPayExpandIndex=_woPayExpandIndex;
@property(nonatomic) long long woPayFromState; // @synthesize woPayFromState=_woPayFromState;
@property(nonatomic) long long woPaySelectedIndex; // @synthesize woPaySelectedIndex=_woPaySelectedIndex;
@property(nonatomic) _Bool isIndexViewHidden; // @synthesize isIndexViewHidden=_isIndexViewHidden;
@property(nonatomic) _Bool IsNeedFlush; // @synthesize IsNeedFlush=_IsNeedFlush;
@property(nonatomic) long long woPayPageIndex; // @synthesize woPayPageIndex=_woPayPageIndex;
@property(retain, nonatomic) NSMutableArray *woPayListData; // @synthesize woPayListData=_woPayListData;
@property(retain, nonatomic) UIView *woPayErrorView; // @synthesize woPayErrorView=_woPayErrorView;
@property(retain, nonatomic) UIButton *woPayRefundBtn; // @synthesize woPayRefundBtn=_woPayRefundBtn;
@property(retain, nonatomic) UIButton *woPayECashBtn; // @synthesize woPayECashBtn=_woPayECashBtn;
@property(retain, nonatomic) UIButton *woPayDFBtn; // @synthesize woPayDFBtn=_woPayDFBtn;
@property(retain, nonatomic) UIButton *woPayTransferBtn; // @synthesize woPayTransferBtn=_woPayTransferBtn;
@property(retain, nonatomic) UIButton *woPayRechargeBtn; // @synthesize woPayRechargeBtn=_woPayRechargeBtn;
@property(retain, nonatomic) UIButton *woPayWithdrawBtn; // @synthesize woPayWithdrawBtn=_woPayWithdrawBtn;
@property(retain, nonatomic) UIButton *woPayTradeBtn; // @synthesize woPayTradeBtn=_woPayTradeBtn;
@property(retain, nonatomic) UIView *woPayBackView; // @synthesize woPayBackView=_woPayBackView;
@property(retain, nonatomic) UIView *woPayIndexView; // @synthesize woPayIndexView=_woPayIndexView;
@property(retain, nonatomic) UITableView *woPayListTableView; // @synthesize woPayListTableView=_woPayListTableView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)refreshView;
- (void)requestWithDrawFailed;
- (void)requestWithdrawSucess:(id)arg1;
- (void)requestWithdraw;
- (void)refreshData;
- (void)reloadData:(id)arg1;
- (void)resetIndexBtn;
- (void)RefundTap:(id)arg1;
- (void)eCahBtnTap:(id)arg1;
- (void)DFBtnTap:(id)arg1;
- (void)transfetBtnTap:(id)arg1;
- (void)rechargeBtnTap:(id)arg1;
- (void)withdrawBtnTap:(id)arg1;
- (void)tradeBtnTap:(id)arg1;
- (void)showIndexView;
- (void)backViewTap:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

