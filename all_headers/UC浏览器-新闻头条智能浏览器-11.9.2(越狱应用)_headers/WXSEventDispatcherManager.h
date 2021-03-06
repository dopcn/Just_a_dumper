//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WXSEventDispatcherManager : NSObject
{
    NSMutableDictionary *_weexEventListener;
    CDUnknownBlockType _eventBlock;
}

+ (id)sharedManager;
@property(copy, nonatomic) CDUnknownBlockType eventBlock; // @synthesize eventBlock=_eventBlock;
@property(retain, nonatomic) NSMutableDictionary *weexEventListener; // @synthesize weexEventListener=_weexEventListener;
- (void).cxx_destruct;
- (void)setEventDispatchBlock:(CDUnknownBlockType)arg1;
- (void)fireEventByName:(id)arg1 parameters:(id)arg2;
- (void)removeEventListener:(id)arg1;
- (void)removeEventListener:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackId:(id)arg3;
- (void)addEventListener:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackId:(id)arg3 weexInstance:(id)arg4;
- (id)init;

@end

