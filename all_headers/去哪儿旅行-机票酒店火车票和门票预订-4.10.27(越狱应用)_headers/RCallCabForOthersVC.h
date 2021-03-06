//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NaviBarVC.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"
#import "freshDelgate-Protocol.h"

@class NSString, UILabel, UITextField;
@protocol RCallCabForOthersVCDelegate;

@interface RCallCabForOthersVC : NaviBarVC <ABPeoplePickerNavigationControllerDelegate, UITextFieldDelegate, freshDelgate>
{
    UILabel *_labelCheckedPhone;
    UITextField *_textFieldCallCabPhone;
    NSString *_orderPhoneStr;
    NSString *_passengerPhoneStr;
    id <RCallCabForOthersVCDelegate> _delegate;
}

@property(nonatomic) __weak id <RCallCabForOthersVCDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *passengerPhoneStr; // @synthesize passengerPhoneStr=_passengerPhoneStr;
@property(retain, nonatomic) NSString *orderPhoneStr; // @synthesize orderPhoneStr=_orderPhoneStr;
- (void).cxx_destruct;
- (void)freshRContactPhone:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)checkPhoneNumber:(id)arg1;
- (void)goSelectAPassanger;
- (void)changeCheckedPhoneNumber;
- (void)didSelectedCabInfo;
- (void)goBack:(id)arg1;
- (void)setupMainView;
- (void)setupNavbar;
- (void)viewDidLoad;
- (id)initWithName:(id)arg1 andOrderPhone:(id)arg2 andPassengerPhone:(id)arg3;
- (id)initWithName:(id)arg1 andOrderPhone:(id)arg2;
- (id)initWithOrderPhone:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

