//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RLMObject.h"

@class NSData, NSString;

@interface OWLDBCrashData : RLMObject
{
    NSString *_crashId;
    NSData *_crash;
}

@property(retain) NSData *crash; // @synthesize crash=_crash;
@property(retain) NSString *crashId; // @synthesize crashId=_crashId;
- (void).cxx_destruct;

@end

