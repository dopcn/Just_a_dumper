//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableOrderedSet;

@interface EMUDPLDeepLinkRouter : NSObject
{
    CDUnknownBlockType _applicationCanHandleDeepLinksBlock;
    CDUnknownBlockType _routeCompletionHandler;
    NSMutableOrderedSet *_routes;
    NSMutableDictionary *_classesByRoute;
    NSMutableDictionary *_blocksByRoute;
}

@property(retain, nonatomic) NSMutableDictionary *blocksByRoute; // @synthesize blocksByRoute=_blocksByRoute;
@property(retain, nonatomic) NSMutableDictionary *classesByRoute; // @synthesize classesByRoute=_classesByRoute;
@property(retain, nonatomic) NSMutableOrderedSet *routes; // @synthesize routes=_routes;
@property(copy, nonatomic) CDUnknownBlockType routeCompletionHandler; // @synthesize routeCompletionHandler=_routeCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType applicationCanHandleDeepLinksBlock; // @synthesize applicationCanHandleDeepLinksBlock=_applicationCanHandleDeepLinksBlock;
- (void).cxx_destruct;
- (void)completeRouteWithSuccess:(_Bool)arg1 error:(id)arg2;
- (_Bool)handleRoute:(id)arg1 withDeepLink:(id)arg2 error:(id *)arg3;
- (void)handleURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)registerBlock:(CDUnknownBlockType)arg1 forRoute:(id)arg2;
- (void)registerHandlerClass:(Class)arg1 forRoute:(id)arg2;
- (_Bool)applicationCanHandleDeepLinks;
- (id)init;

@end

