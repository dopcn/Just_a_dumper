//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PRoomTypeSwitchRes-Protocol.h"

@class NSSet, NSString, PResult;

@interface PRoomTypeSwitchRes : NSObject <PRoomTypeSwitchRes>
{
    PResult *_result;
    NSString *_serverTime;
    NSSet *_needDecryptKeys;
}

@property(copy, nonatomic) NSSet *needDecryptKeys; // @synthesize needDecryptKeys=_needDecryptKeys;
@property(copy, nonatomic) NSString *serverTime; // @synthesize serverTime=_serverTime;
@property(retain, nonatomic) PResult *result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

