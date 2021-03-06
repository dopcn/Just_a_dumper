//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FMBaseViewController.h"

#import "FMNeedLoginProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class ACRichTextView, FMDeliveryDO, FMPostageDO, FMTradeRedEnvelopeDO, NSString, UIButton, UILabel, UITableView, UITextField, XMItemInfo;

@interface FMItemBuyViewController : FMBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, FMNeedLoginProtocol>
{
    _Bool _deliverySuccess;
    _Bool _useRedEnvelope;
    XMItemInfo *_itemDO;
    UITableView *_tableView;
    UILabel *_addressLabel;
    ACRichTextView *_postageTextView;
    UILabel *_totalPriceLabel;
    UITextField *_userTextField;
    UITextField *_phoneTextField;
    unsigned long long _tradeType;
    UIButton *_hideKeyboardButton;
    FMDeliveryDO *_deliveryDO;
    NSString *_tid;
    FMPostageDO *_postageDO;
    FMTradeRedEnvelopeDO *_redEnvelopeDO;
}

@property(retain, nonatomic) FMTradeRedEnvelopeDO *redEnvelopeDO; // @synthesize redEnvelopeDO=_redEnvelopeDO;
@property(nonatomic) _Bool useRedEnvelope; // @synthesize useRedEnvelope=_useRedEnvelope;
@property(retain, nonatomic) FMPostageDO *postageDO; // @synthesize postageDO=_postageDO;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(nonatomic) _Bool deliverySuccess; // @synthesize deliverySuccess=_deliverySuccess;
@property(retain, nonatomic) FMDeliveryDO *deliveryDO; // @synthesize deliveryDO=_deliveryDO;
@property(retain, nonatomic) UIButton *hideKeyboardButton; // @synthesize hideKeyboardButton=_hideKeyboardButton;
@property(nonatomic) unsigned long long tradeType; // @synthesize tradeType=_tradeType;
@property(retain, nonatomic) UITextField *phoneTextField; // @synthesize phoneTextField=_phoneTextField;
@property(retain, nonatomic) UITextField *userTextField; // @synthesize userTextField=_userTextField;
@property(retain, nonatomic) UILabel *totalPriceLabel; // @synthesize totalPriceLabel=_totalPriceLabel;
@property(retain, nonatomic) ACRichTextView *postageTextView; // @synthesize postageTextView=_postageTextView;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) XMItemInfo *itemDO; // @synthesize itemDO=_itemDO;
- (void).cxx_destruct;
- (id)cellButtonBgImage;
- (id)getConfirmButton;
- (_Bool)isShowControl;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)updateTotalPriceText;
- (void)updatePostageText:(id)arg1;
- (void)updatePostageWithDeliveryDO:(id)arg1;
- (void)updateAddress:(id)arg1;
- (id)getDefaultDeliveryDO:(id)arg1;
- (void)requestTradeRedEnvelope:(id)arg1;
- (_Bool)hasRedEnvelope;
- (void)requestDeliveryAddress;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)autoMoveKeyboard:(float)arg1;
- (void)pushToOrderDetail;
- (void)paymentWithOrderId:(id)arg1;
- (void)createTradeSuccess:(id)arg1;
- (void)requestCreateTrade:(id)arg1 buyerName:(id)arg2 buyerPhone:(id)arg3;
- (void)confirmAction;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getTotalPriceLabel;
- (id)getPostageTextView;
- (id)getAddressLabel;
- (id)tradeTypeControl;
- (void)segmentChanged:(id)arg1;
- (void)hideKeyboard;
- (void)showKeyboardButton:(double)arg1 keyboard:(struct CGRect)arg2;
- (void)hideKeyboardButton:(double)arg1;
- (void)initHideKeyboardButton;
- (id)tableHeaderView;
- (void)loadView;
- (void)initNavigationBar;
- (id)initWithItemDO:(id)arg1;
- (void)urlHandlerWithQuery:(id)arg1 nativeParams:(id)arg2;
- (id)initWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

