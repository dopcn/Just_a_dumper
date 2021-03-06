//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XcfScrollViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "XcfUrlHandlerProtocol-Protocol.h"

@class MBProgressHUD, NSLayoutConstraint, NSMutableArray, NSString, UIBarButtonItem, UIButton, UIImageView, UILabel, UITableView, UIView, XCFCursor;

@interface XCFCartViewController : XcfScrollViewController <UITableViewDataSource, UITableViewDelegate, XcfUrlHandlerProtocol>
{
    _Bool _retriveValidItemsFinished;
    _Bool _editingMode;
    UITableView *_cartTableView;
    UIView *_cartFooterView;
    NSLayoutConstraint *_cartFooterViewHeight;
    UIImageView *_checkoutAllImageView;
    UIButton *_functionButton;
    UILabel *_totalPriceLabel;
    UILabel *_totalFreightLabel;
    UILabel *_noCartItemLabel;
    MBProgressHUD *_hud;
    UIBarButtonItem *_rightBarButtonItem;
    NSMutableArray *_readyToCheckoutCartItems;
    NSMutableArray *_shopCartItems;
    NSMutableArray *_invalidCartItems;
    XCFCursor *_validCursor;
    XCFCursor *_invalidCursor;
}

+ (void)handleUrl:(id)arg1;
+ (_Bool)canHandleUrl:(id)arg1;
+ (_Bool)canHandleNextUrl:(id)arg1;
+ (unsigned long long)totalValid:(id)arg1;
@property(retain, nonatomic) XCFCursor *invalidCursor; // @synthesize invalidCursor=_invalidCursor;
@property(retain, nonatomic) XCFCursor *validCursor; // @synthesize validCursor=_validCursor;
@property(nonatomic) _Bool editingMode; // @synthesize editingMode=_editingMode;
@property(nonatomic) _Bool retriveValidItemsFinished; // @synthesize retriveValidItemsFinished=_retriveValidItemsFinished;
@property(retain, nonatomic) NSMutableArray *invalidCartItems; // @synthesize invalidCartItems=_invalidCartItems;
@property(retain, nonatomic) NSMutableArray *shopCartItems; // @synthesize shopCartItems=_shopCartItems;
@property(retain, nonatomic) NSMutableArray *readyToCheckoutCartItems; // @synthesize readyToCheckoutCartItems=_readyToCheckoutCartItems;
@property(retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // @synthesize rightBarButtonItem=_rightBarButtonItem;
@property(retain, nonatomic) MBProgressHUD *hud; // @synthesize hud=_hud;
@property(nonatomic) __weak UILabel *noCartItemLabel; // @synthesize noCartItemLabel=_noCartItemLabel;
@property(nonatomic) __weak UILabel *totalFreightLabel; // @synthesize totalFreightLabel=_totalFreightLabel;
@property(nonatomic) __weak UILabel *totalPriceLabel; // @synthesize totalPriceLabel=_totalPriceLabel;
@property(nonatomic) __weak UIButton *functionButton; // @synthesize functionButton=_functionButton;
@property(nonatomic) __weak UIImageView *checkoutAllImageView; // @synthesize checkoutAllImageView=_checkoutAllImageView;
@property(retain, nonatomic) NSLayoutConstraint *cartFooterViewHeight; // @synthesize cartFooterViewHeight=_cartFooterViewHeight;
@property(retain, nonatomic) UIView *cartFooterView; // @synthesize cartFooterView=_cartFooterView;
@property(nonatomic) __weak UITableView *cartTableView; // @synthesize cartTableView=_cartTableView;
- (void).cxx_destruct;
- (id)trackLocation;
- (void)updateFunctionButtonTitle;
- (void)reloadData;
- (void)addCartItemToReady:(id)arg1;
- (void)checkoutSelectedCartItems;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)addShopCartItems:(id)arg1;
- (void)updateShopCartItem:(id)arg1 originalId:(id)arg2;
- (void)removeLocalCartItems:(id)arg1;
- (void)removeCartItems:(id)arg1;
- (void)startRefreshingAction;
- (void)startLoadingMoreAction;
- (void)editOrFinishButtonTouched:(id)arg1;
- (void)allReadyButtonTouched:(id)arg1;
- (_Bool)allCheckedButtonShouldBeChecked;
- (void)functionButtonTouched:(id)arg1;
- (void)cartDataChanged:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setRightBarItemForNavigationItem:(id)arg1;
- (void)setupTableView;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)setupAfterLoadingFromNib;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

