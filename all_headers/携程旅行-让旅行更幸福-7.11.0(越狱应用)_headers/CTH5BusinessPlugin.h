//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTH5Plugin.h"

#import "CTAddressBookDelegate-Protocol.h"
#import "CTBirthdayPickerDelegate-Protocol.h"
#import "CTPickerViewDelegate-Protocol.h"

@class CTPickerView, NSString;

@interface CTH5BusinessPlugin : CTH5Plugin <CTAddressBookDelegate, CTPickerViewDelegate, CTBirthdayPickerDelegate>
{
    NSString *_selectedInvoceTitleCallbackTag;
    NSString *_chooseContactFromAddressbookCallbackTag;
    NSString *_showPickerViewCallbackTag;
    NSString *_selectBirthdayCallbackTag;
    CTPickerView *_pickerView;
}

@property(retain, nonatomic) CTPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(copy, nonatomic) NSString *selectBirthdayCallbackTag; // @synthesize selectBirthdayCallbackTag=_selectBirthdayCallbackTag;
@property(copy, nonatomic) NSString *showPickerViewCallbackTag; // @synthesize showPickerViewCallbackTag=_showPickerViewCallbackTag;
@property(copy, nonatomic) NSString *chooseContactFromAddressbookCallbackTag; // @synthesize chooseContactFromAddressbookCallbackTag=_chooseContactFromAddressbookCallbackTag;
@property(copy, nonatomic) NSString *selectedInvoceTitleCallbackTag; // @synthesize selectedInvoceTitleCallbackTag=_selectedInvoceTitleCallbackTag;
- (void).cxx_destruct;
- (void)birthdayPickerConfirmWithDate:(id)arg1 birthdayPicker:(id)arg2;
- (void)birthdayPickerCancel:(id)arg1;
- (void)selectDate:(id)arg1;
- (void)getMobileConfig:(id)arg1;
- (void)ctPickerViewDidSeleted:(id)arg1;
- (void)addressBookDidSelectPerson:(id)arg1;
- (void)trackUBTJSLog:(id)arg1;
- (void)sendUBTEvent:(id)arg1;
- (void)sendUBTMetrics:(id)arg1;
- (void)sendUBTTrace:(id)arg1;
- (void)getABTestingInfo:(id)arg1;
- (void)getChannelInfo:(id)arg1;
- (void)doBusinessJob:(id)arg1;
- (void)callbackBusinessResultToH5:(id)arg1 tagName:(id)arg2 businessResultCode:(int)arg3 businessResultDict:(id)arg4 customErrorCode:(id)arg5;
- (id)getBusinessResultCodeDesc:(int)arg1;
- (void)sendUBTLog:(id)arg1;
- (void)showPickerView:(id)arg1;
- (void)chooseContactFromAddressbook:(id)arg1;
- (void)readVerificationCodeFromSMS:(id)arg1;
- (void)logGoogleRemarking:(id)arg1;
- (void)getDeviceInfo:(id)arg1;
- (void)showVoiceSearch:(id)arg1;
- (void)addPassbook:(id)arg1;
- (void)getCurrentCityMapping:(id)arg1;
- (void)setCityMapping:(id)arg1;
- (void)chooseInvoiceTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

