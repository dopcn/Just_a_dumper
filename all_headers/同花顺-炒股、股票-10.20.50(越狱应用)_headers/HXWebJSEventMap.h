//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableDictionary;

@interface HXWebJSEventMap : NSObject
{
    NSMapTable *_handlerMap;
    NSMutableDictionary *_handlerDic;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *handlerDic; // @synthesize handlerDic=_handlerDic;
@property(retain, nonatomic) NSMapTable *handlerMap; // @synthesize handlerMap=_handlerMap;
- (void).cxx_destruct;
- (void)registAcionClass:(Class)arg1;
- (void)loadStaticHandler;
- (id)getHandleForEventMethod:(id)arg1;
- (void)unregisterHandler:(id)arg1;
- (void)registerHandler:(id)arg1;
- (id)init;

@end

