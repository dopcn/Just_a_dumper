//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "MyGiftCardBindViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDButton, JDStoreNetwork, MyGiftCardEmpty, NSMutableArray, NSString, UITableView, UIView;

@interface MyGiftCardViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, MyGiftCardBindViewControllerDelegate>
{
    JDStoreNetwork *netWork;
    NSMutableArray *cardDataArr;
    long long cardPage;
    _Bool isHasMore;
    _Bool isLoadingData;
    UITableView *mTableView;
    MyGiftCardEmpty *emptyView;
    JDButton *bindBtn;
    NSString *buyNewCardUrl;
    UIView *_cardInfoView;
}

@property(retain, nonatomic) UIView *cardInfoView; // @synthesize cardInfoView=_cardInfoView;
@property(copy, nonatomic) NSString *buyNewCardUrl; // @synthesize buyNewCardUrl;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)buyBtnClicked;
- (void)bindBtnClicked;
- (void)cardInfoViewTap:(id)arg1;
- (void)rightBtnClicked;
- (void)didBindedCardSuccess;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)updateBottomView:(id)arg1;
- (void)showAttentionView:(id)arg1;
- (void)addCardDataRequest;
- (void)refreshCardInfoViewWithData:(id)arg1;
- (void)getTheCardTip;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

