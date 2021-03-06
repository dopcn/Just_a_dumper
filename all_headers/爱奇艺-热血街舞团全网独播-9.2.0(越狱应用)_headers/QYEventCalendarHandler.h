//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "IQYDataLoadManagerDelegate-Protocol.h"

@class IQYPhoneNumberSubscribeManager, NSDictionary, NSString;

@interface QYEventCalendarHandler : NSObject <IQYDataLoadManagerDelegate>
{
    IQYPhoneNumberSubscribeManager *_subscribeManager;
    NSDictionary *_dicData;
    NSString *_handlerResultStatus;
    CDUnknownBlockType _completeBlock;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedEventCalendar;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) NSString *handlerResultStatus; // @synthesize handlerResultStatus=_handlerResultStatus;
@property(retain, nonatomic) NSDictionary *dicData; // @synthesize dicData=_dicData;
@property(retain, nonatomic) IQYPhoneNumberSubscribeManager *subscribeManager; // @synthesize subscribeManager=_subscribeManager;
- (void).cxx_destruct;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)requestSubscribePhoneNumber:(id)arg1;
- (void)showToast:(id)arg1;
- (_Bool)isPureElevenNumandCharacters:(id)arg1;
- (void)openSettings;
- (void)setH5SubscribeDate;
- (id)getH5SubscribeDate;
- (void)phoneMegSubscribe;
- (void)handleCalendarOrPhoneSubscribe:(id)arg1 completeBlcok:(CDUnknownBlockType)arg2;
- (void)showAlert:(id)arg1 resultCode:(id)arg2;
- (id)defaultCalendar:(id)arg1;
- (void)createEventCalendar:(id)arg1 dic:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

