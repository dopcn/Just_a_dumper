//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LocationDelegate-Protocol.h"

@class NSMutableArray, NSString;

@interface VLocationService : NSObject <LocationDelegate>
{
    NSMutableArray *_delegates;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
- (void).cxx_destruct;
- (void)callBackWithLocation:(id)arg1;
- (void)callLocationBack:(id)arg1;
- (void)callLocation:(id)arg1;
- (void)getLocationWithSystemBack:(id)arg1 placemark:(id)arg2;
- (void)getLocationWithSystem:(id)arg1;
- (void)UpdateToLocation:(id)arg1 fromLocation:(id)arg2 WithPurpose:(id)arg3 andError:(id)arg4 andErrorCode:(long long)arg5;
- (void)searchLocationWithDlgt:(id)arg1 andPurpose:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

