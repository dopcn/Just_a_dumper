//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ManagerHandler-Protocol.h"

@class NSMutableArray, NSString;
@protocol ContactManagerDelegate;

@interface ContactManager : NSObject <ManagerHandler>
{
    NSMutableArray *friendListArray;
    long long friendListSize;
    id <ContactManagerDelegate> _delegate;
}

+ (id)sharedContactManager;
@property(nonatomic) id <ContactManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendUploadContactInfo:(id)arg1 withType:(long long)arg2;
- (void)searchUrapportContactWithMobileNum:(long long)arg1;
- (void)updateMaskWithContactInfo:(id)arg1;
- (void)updateLocalNameWithContactInfo:(id)arg1;
- (void)agreeAddContactWithContactInfo:(id)arg1;
- (void)getContactListBatchWithVersion:(long long)arg1;
- (void)getContactListWithVersion:(long long)arg1;
- (void)removeUrapportContactWithContactInfo:(id)arg1;
- (void)addUrapportContactWithContactInfo:(id)arg1;
- (void)dealloc;
- (id)init;
- (_Bool)handleNotify:(id)arg1;
- (_Bool)handle:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

