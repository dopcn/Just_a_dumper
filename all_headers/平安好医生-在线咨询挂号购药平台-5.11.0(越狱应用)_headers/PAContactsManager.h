//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PAContactsManager : NSObject
{
}

+ (_Bool)isStringAllChinese:(id)arg1;
+ (id)composeNameWithFirstName:(id)arg1 lastName:(id)arg2;
+ (void)parseAddressBook:(void *)arg1 result:(CDUnknownBlockType)arg2;
+ (void)readAddressBookWithStart:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;
+ (void)fetchContactsFormAddressBookIfAuthoriedWithStart:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;
+ (void)fetchContactsFormAddressBookWithStart:(CDUnknownBlockType)arg1 result:(CDUnknownBlockType)arg2;
+ (_Bool)isAddressBookNotAuthorised;

@end

