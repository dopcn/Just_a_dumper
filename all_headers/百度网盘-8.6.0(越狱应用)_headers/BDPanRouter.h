//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface BDPanRouter : NSObject
{
    NSMutableDictionary *_routeDictionary;
}

+ (id)globalRouter;
@property(retain, nonatomic) NSMutableDictionary *routeDictionary; // @synthesize routeDictionary=_routeDictionary;
- (void).cxx_destruct;
- (_Bool)canOpenURL:(id)arg1;
- (id)findRouteItemWithURL:(id)arg1;
- (void)openURL:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeURLPattern:(id)arg1;
- (void)registerURLPattern:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)init;

@end

