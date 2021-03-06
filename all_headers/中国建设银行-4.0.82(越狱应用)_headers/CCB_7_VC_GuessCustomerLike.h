//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CCB_2_baseSubViewController.h"

#import "RightButtonHandlerProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CCBTableView, CCB_7_VM_GuessCustomerLike, NSArray, NSString;

@interface CCB_7_VC_GuessCustomerLike : CCB_2_baseSubViewController <RightButtonHandlerProtocol, UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isLoginCache;
    _Bool _isLoginState;
    _Bool _isBindState;
    CCB_7_VM_GuessCustomerLike *_customerLike;
    CCBTableView *_tableView;
    NSArray *_tempArray;
}

+ (double)cellHeight:(id)arg1;
@property(nonatomic) _Bool isBindState; // @synthesize isBindState=_isBindState;
@property(nonatomic) _Bool isLoginState; // @synthesize isLoginState=_isLoginState;
@property(retain, nonatomic) NSArray *tempArray; // @synthesize tempArray=_tempArray;
@property(retain, nonatomic) CCBTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool isLoginCache; // @synthesize isLoginCache=_isLoginCache;
@property(retain, nonatomic) CCB_7_VM_GuessCustomerLike *customerLike; // @synthesize customerLike=_customerLike;
- (void).cxx_destruct;
- (void)likeProductTrade;
- (void)getShowData;
- (void)rightButtonDidClick;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)addObserverForViewModel;
- (void)viewDidLoad;
- (void)drawHot_sellingProductView;
- (id)init;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

