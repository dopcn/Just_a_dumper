//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PCContainer-Protocol.h"

@class NSString;

@interface PCContainerImplementation : NSObject <PCContainer>
{
}

- (_Bool)jumpToLink:(id)arg1 withObject:(id)arg2;
@property(readonly, nonatomic) long long vipType;
@property(readonly, nonatomic) NSString *passportToken;
@property(readonly, nonatomic) _Bool isVIP;
@property(readonly, nonatomic) NSString *userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

