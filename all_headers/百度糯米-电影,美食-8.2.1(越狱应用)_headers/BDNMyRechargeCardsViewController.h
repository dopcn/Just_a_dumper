//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDNStyleTableViewController.h"

#import "BDNHBNoRedeemCardCellDelegate-Protocol.h"
#import "BDNRechargeAlertViewDelegate-Protocol.h"
#import "BDNRechargeInputViewDelegate-Protocol.h"
#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"

@class BDNHBEmptyTipButton, BDNRechargeCardDisplayModel, BDNRechargeInputView, BDNRechargeUserInfoJSONModel, BDNmSegmentView, NSString;

@interface BDNMyRechargeCardsViewController : BDNStyleTableViewController <BDNHBNoRedeemCardCellDelegate, BDNRechargeInputViewDelegate, BDNRechargeAlertViewDelegate, UIActionSheetDelegate, MFMessageComposeViewControllerDelegate>
{
    NSString *_uPhoneNumber;
    NSString *_requestRedeemCode;
    BDNRechargeUserInfoJSONModel *_requestRedeemUser;
    long long _requestPageIndexNoRedeem;
    long long _requestPageIndexHasRedeem;
    BDNRechargeCardDisplayModel *_unusedData;
    BDNRechargeCardDisplayModel *_usedData;
    NSString *_shareContent;
    BDNmSegmentView *_segmentView;
    BDNHBEmptyTipButton *_emptyTipButton;
    BDNRechargeInputView *_phoneNumberInputView;
    struct CGPoint _unusedTableViewOffset;
    struct CGPoint _usedTableViewOffset;
}

@property(retain, nonatomic) BDNRechargeInputView *phoneNumberInputView; // @synthesize phoneNumberInputView=_phoneNumberInputView;
@property(retain, nonatomic) BDNHBEmptyTipButton *emptyTipButton; // @synthesize emptyTipButton=_emptyTipButton;
@property(retain, nonatomic) BDNmSegmentView *segmentView; // @synthesize segmentView=_segmentView;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) struct CGPoint usedTableViewOffset; // @synthesize usedTableViewOffset=_usedTableViewOffset;
@property(nonatomic) struct CGPoint unusedTableViewOffset; // @synthesize unusedTableViewOffset=_unusedTableViewOffset;
@property(retain, nonatomic) BDNRechargeCardDisplayModel *usedData; // @synthesize usedData=_usedData;
@property(retain, nonatomic) BDNRechargeCardDisplayModel *unusedData; // @synthesize unusedData=_unusedData;
@property(nonatomic) long long requestPageIndexHasRedeem; // @synthesize requestPageIndexHasRedeem=_requestPageIndexHasRedeem;
@property(nonatomic) long long requestPageIndexNoRedeem; // @synthesize requestPageIndexNoRedeem=_requestPageIndexNoRedeem;
@property(retain, nonatomic) BDNRechargeUserInfoJSONModel *requestRedeemUser; // @synthesize requestRedeemUser=_requestRedeemUser;
@property(copy, nonatomic) NSString *requestRedeemCode; // @synthesize requestRedeemCode=_requestRedeemCode;
@property(copy, nonatomic) NSString *uPhoneNumber; // @synthesize uPhoneNumber=_uPhoneNumber;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak BDNRechargeCardDisplayModel *displayingData;
- (id)HBRechargeCardAtIndexPath:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)HBNoRedeemCell:(id)arg1 tapQRAction:(_Bool)arg2;
- (void)HBNoRedeemCell:(id)arg1 clickShareToFriend:(_Bool)arg2;
- (void)HBNoRedeemCell:(id)arg1 clickRecharge:(_Bool)arg2;
- (void)rechargeAlertView:(id)arg1 clickButtonAtIndex:(long long)arg2;
- (void)rechargeInputView:(id)arg1 phoneNumber:(id)arg2;
- (void)rechargeInputView:(id)arg1 clickKeyBordReturn:(id)arg2;
- (void)rechargeInputView:(id)arg1 clickContact:(id)arg2;
- (id)tableView:(id)arg1 emptyCellForRowAtIndexPath:(id)arg2 withTipType:(unsigned long long)arg3;
- (id)tableView:(id)arg1 expandCellForRowAtIndexPath:(id)arg2 withDisplayModel:(id)arg3;
- (id)tableView:(id)arg1 sectionFooterCellAtIndexPath:(id)arg2 withDisplayModel:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)requestCardRedeemByCode:(id)arg1 toUser:(id)arg2 redeemType:(unsigned long long)arg3;
- (void)requestUserInfoByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)requestUserPhoneNumberAndPresentInputView;
- (void)requestMyRechargeCardListWithIndex:(long long)arg1 status:(unsigned long long)arg2;
- (void)segmentControlValueChanged;
- (void)actionMyRechargeCardChargeButtonDidTap:(id)arg1;
- (void)showPhoneNumberInputView;
- (struct UIEdgeInsets)tableViewOriginalContentInset;
- (void)hideErrorView;
- (void)reloadViewControllerDataInternal;
- (void)viewControllerShouldReloadMoreData;
- (void)reloadViewControllerData;
- (id)mergeSegmentTitle:(id)arg1 count:(long long)arg2;
- (void)viewControllerShouldReloadData;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithScheme:(id)arg1;
- (id)initViewController;
- (void)clearRechargeCardRequestIndex;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

