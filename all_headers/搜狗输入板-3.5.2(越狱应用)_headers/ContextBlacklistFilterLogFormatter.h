//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DDLogFormatter-Protocol.h"

@class LoggingContextSet;

@interface ContextBlacklistFilterLogFormatter : NSObject <DDLogFormatter>
{
    LoggingContextSet *contextSet;
}

- (void).cxx_destruct;
- (id)formatLogMessage:(id)arg1;
- (BOOL)isOnBlacklist:(int)arg1;
- (id)blacklist;
- (void)removeFromBlacklist:(int)arg1;
- (void)addToBlacklist:(int)arg1;
- (id)init;

@end

