//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface WVURLProtocolService : NSObject
{
    NSMutableSet *_pageURL;
}

+ (void)reportResourceFinish:(id)arg1 atTime:(double)arg2 dataSize:(unsigned long long)arg3;
+ (void)reportResource:(id)arg1 withResponse:(id)arg2 withExternalHeaders:(id)arg3 withFromType:(long long)arg4;
+ (void)reportResourceStart:(id)arg1 atTime:(double)arg2;
+ (id)registeredWVURLMonitorHandler;
+ (void)registerWVURLMonitorHandler:(id)arg1;
+ (_Bool)isPageURL:(id)arg1;
+ (void)markAsPageURL:(id)arg1;
+ (_Bool)containsUserAgentMark:(id)arg1 checkCustom:(_Bool)arg2;
+ (void)registerUserAgentMark:(id)arg1;
+ (_Bool)rewrite:(id)arg1 phase:(long long)arg2;
+ (void)registerRequestRewriter:(id)arg1;
+ (void)unregisterWKScheme:(id)arg1;
+ (void)registerWKScheme:(id)arg1;
+ (void)setSupportWKURLProtocol:(_Bool)arg1;
+ (_Bool)supportWKURLProtocol;
+ (_Bool)containsScheme:(id)arg1;
+ (void)registerScheme:(id)arg1;
+ (_Bool)enumerateProtocolsUsingBlock:(CDUnknownBlockType)arg1;
+ (void)registerURLProtocol:(Class)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableSet *pageURL; // @synthesize pageURL=_pageURL;
- (void).cxx_destruct;
- (id)init;

@end

