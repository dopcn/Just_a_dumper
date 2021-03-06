//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FAPanGesView.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField, UIView, YYLabel;
@protocol FALCStarLiveRobSeatAlertViewDelegate;

@interface FALCStarLiveRobSeatAlertView : FAPanGesView <UITextFieldDelegate>
{
    id <FALCStarLiveRobSeatAlertViewDelegate> _delegate;
    long long _leastTicket;
    long long _seatIndex;
    UIButton *_okBtn;
    UITextField *_inputField;
    UIView *_ticketCenterView;
    YYLabel *_tipLabel;
}

@property(retain, nonatomic) YYLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *ticketCenterView; // @synthesize ticketCenterView=_ticketCenterView;
@property(retain, nonatomic) UITextField *inputField; // @synthesize inputField=_inputField;
@property(retain, nonatomic) UIButton *okBtn; // @synthesize okBtn=_okBtn;
@property(nonatomic) long long seatIndex; // @synthesize seatIndex=_seatIndex;
@property(nonatomic) long long leastTicket; // @synthesize leastTicket=_leastTicket;
@property(nonatomic) __weak id <FALCStarLiveRobSeatAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldChange:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)dealloc;
- (void)moveUpTicketView;
- (void)updateTicketOkBtn:(id)arg1;
- (void)addAction;
- (void)okRobTicketAction;
- (void)dismiss;
- (void)show;
- (void)dismissKeyboard;
- (void)updateTipsLabel:(id)arg1;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

