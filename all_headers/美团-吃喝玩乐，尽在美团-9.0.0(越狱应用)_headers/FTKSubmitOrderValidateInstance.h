//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FTKNewPassengerBirthDayItem, FTKNewPassengerFirstNameItem, FTKNewPassengerIDItem, FTKNewPassengerLastNameItem, FTKNewPassengerNameItem, FTKNewPassengerPhoneItem, FTKSubmitOrderContacterIDItem, FTKSubmitOrderContacterNameItem, FTKSubmitOrderContacterPhoneItem, NSMutableArray, NSString;

@interface FTKSubmitOrderValidateInstance : NSObject
{
    _Bool _isNewUser;
    _Bool _isMember;
    FTKSubmitOrderContacterIDItem *_memberIDItem;
    FTKSubmitOrderContacterNameItem *_memberNameItem;
    FTKSubmitOrderContacterPhoneItem *_memberPhoneItem;
    FTKSubmitOrderContacterNameItem *_contacterNameItem;
    FTKSubmitOrderContacterPhoneItem *_contacterPhoneItem;
    FTKNewPassengerIDItem *_cardItem;
    FTKNewPassengerNameItem *_nameItem;
    FTKNewPassengerFirstNameItem *_firstNameItem;
    FTKNewPassengerLastNameItem *_lastNameItem;
    FTKNewPassengerPhoneItem *_phoneItem;
    NSString *_validateString;
    NSMutableArray *_validateArray;
    FTKNewPassengerBirthDayItem *_birthdayItem;
    NSMutableArray *_passengerItemArray;
}

+ (id)shareInstance;
@property(nonatomic) _Bool isMember; // @synthesize isMember=_isMember;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(nonatomic) __weak NSMutableArray *passengerItemArray; // @synthesize passengerItemArray=_passengerItemArray;
@property(nonatomic) __weak FTKNewPassengerBirthDayItem *birthdayItem; // @synthesize birthdayItem=_birthdayItem;
@property(retain, nonatomic) NSMutableArray *validateArray; // @synthesize validateArray=_validateArray;
@property(retain, nonatomic) NSString *validateString; // @synthesize validateString=_validateString;
@property(nonatomic) __weak FTKNewPassengerPhoneItem *phoneItem; // @synthesize phoneItem=_phoneItem;
@property(nonatomic) __weak FTKNewPassengerLastNameItem *lastNameItem; // @synthesize lastNameItem=_lastNameItem;
@property(nonatomic) __weak FTKNewPassengerFirstNameItem *firstNameItem; // @synthesize firstNameItem=_firstNameItem;
@property(nonatomic) __weak FTKNewPassengerNameItem *nameItem; // @synthesize nameItem=_nameItem;
@property(nonatomic) __weak FTKNewPassengerIDItem *cardItem; // @synthesize cardItem=_cardItem;
@property(nonatomic) __weak FTKSubmitOrderContacterPhoneItem *contacterPhoneItem; // @synthesize contacterPhoneItem=_contacterPhoneItem;
@property(nonatomic) __weak FTKSubmitOrderContacterNameItem *contacterNameItem; // @synthesize contacterNameItem=_contacterNameItem;
@property(nonatomic) __weak FTKSubmitOrderContacterPhoneItem *memberPhoneItem; // @synthesize memberPhoneItem=_memberPhoneItem;
@property(nonatomic) __weak FTKSubmitOrderContacterNameItem *memberNameItem; // @synthesize memberNameItem=_memberNameItem;
@property(nonatomic) __weak FTKSubmitOrderContacterIDItem *memberIDItem; // @synthesize memberIDItem=_memberIDItem;
- (void).cxx_destruct;
- (_Bool)validateOfNewUser:(_Bool)arg1 memberUser:(_Bool)arg2;
@property(readonly, nonatomic) _Bool hasValidateTips;
- (void)clearData;

@end

