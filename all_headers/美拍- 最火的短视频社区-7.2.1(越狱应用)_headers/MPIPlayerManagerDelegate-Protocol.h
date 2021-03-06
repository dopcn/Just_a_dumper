//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, NSMutableDictionary, NSURL;
@protocol MPIPlayerManagerInterface;

@protocol MPIPlayerManagerDelegate <NSObject>
- (void)playerManager:(id <MPIPlayerManagerInterface>)arg1 loadFailed:(NSError *)arg2;

@optional
- (void)playerManager:(id <MPIPlayerManagerInterface>)arg1 saveRestoreDic:(NSMutableDictionary *)arg2;
- (void)playerManager:(id <MPIPlayerManagerInterface>)arg1 cacheExistedWithFileURL:(NSURL *)arg2;
- (void)playerManager:(id <MPIPlayerManagerInterface>)arg1 cacheProgressDidChange:(double)arg2;
- (void)playerManager:(id <MPIPlayerManagerInterface>)arg1 progressDidChange:(double)arg2;
- (void)playerManager:(id <MPIPlayerManagerInterface>)arg1 statusDidChanged:(unsigned long long)arg2;
@end

