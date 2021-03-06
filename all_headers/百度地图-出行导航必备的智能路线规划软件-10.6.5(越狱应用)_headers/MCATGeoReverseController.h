//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCATGeoReverseProxyDelegate-Protocol.h"

@class NSLock, NSMapTable, NSMutableArray, NSString;

@interface MCATGeoReverseController : NSObject <MCATGeoReverseProxyDelegate>
{
    NSMapTable *_successBlockMap;
    NSMapTable *_errorBlockMap;
    NSMutableArray *_reqIds;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableArray *reqIds; // @synthesize reqIds=_reqIds;
@property(retain, nonatomic) NSMapTable *errorBlockMap; // @synthesize errorBlockMap=_errorBlockMap;
@property(retain, nonatomic) NSMapTable *successBlockMap; // @synthesize successBlockMap=_successBlockMap;
- (void).cxx_destruct;
- (void)geoReverseProxyCallBack:(id)arg1 result:(id)arg2;
- (void)reversePoint:(struct BMPoint)arg1 successBlock:(CDUnknownBlockType)arg2 errorBlock:(CDUnknownBlockType)arg3;
- (_Bool)reverseMyLocation:(CDUnknownBlockType)arg1 errorBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

