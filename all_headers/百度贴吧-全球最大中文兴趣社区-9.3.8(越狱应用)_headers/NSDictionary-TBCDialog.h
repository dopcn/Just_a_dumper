//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDictionary.h>

#import "TBCDialogUserDataProtocol-Protocol.h"

@class NSString;

@interface NSDictionary (TBCDialog) <TBCDialogUserDataProtocol>
+ (id)dictionaryWithUserData:(id)arg1 shouldDismiss:(_Bool)arg2;
@property(readonly, nonatomic) id userData;
@property(readonly, nonatomic) _Bool shouldDismiss;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

