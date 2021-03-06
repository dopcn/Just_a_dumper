//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WQTextFieldQRCodeGeneratorViewController.h"

#import "ABPeoplePickerNavigationControllerDelegate-Protocol.h"
#import "CNContactPickerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSArray, NSString;

@interface WQPhoneQRCodeGeneratorViewController : WQTextFieldQRCodeGeneratorViewController <UIActionSheetDelegate, CNContactPickerDelegate, ABPeoplePickerNavigationControllerDelegate, UIAlertViewDelegate>
{
    NSArray *_arrayPhones;
    NSString *_strPhone;
}

@property(retain, nonatomic) NSString *strPhone; // @synthesize strPhone=_strPhone;
- (void).cxx_destruct;
- (void)setPhoneNumber:(id)arg1;
- (void)rightButtonTap;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)selectContact:(id)arg1;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (_Bool)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)addContact;
- (id)resultViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

