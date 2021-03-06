//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class Entry, NSString;

@protocol Cache <NSObject>
- (void)clear;
- (void)remove:(NSString *)arg1;
- (_Bool)isExpired:(Entry *)arg1;
- (_Bool)isRefreshNeeded:(Entry *)arg1;
- (void)access:(NSString *)arg1;
- (void)put:(NSString *)arg1 Entry:(Entry *)arg2;
- (Entry *)get:(NSString *)arg1;
@end

