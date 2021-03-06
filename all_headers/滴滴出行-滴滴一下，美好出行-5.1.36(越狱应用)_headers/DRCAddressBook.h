//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface DRCAddressBook : NSObject
{
    unsigned long long _fieldsMask;
    CDUnknownBlockType _filterBlock;
    NSArray *_sortDescriptors;
    void *_addressBook;
    CDUnknownBlockType _changeCallback;
}

+ (unsigned long long)access;
@property(copy, nonatomic) CDUnknownBlockType changeCallback; // @synthesize changeCallback=_changeCallback;
@property(readonly) void *addressBook; // @synthesize addressBook=_addressBook;
@property(retain, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
@property(nonatomic) unsigned long long fieldsMask; // @synthesize fieldsMask=_fieldsMask;
- (void).cxx_destruct;
- (void)stopObserveChanges;
- (void)loadContactsOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadContacts:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

