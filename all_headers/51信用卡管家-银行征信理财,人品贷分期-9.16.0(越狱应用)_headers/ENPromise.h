//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface ENPromise : NSObject
{
    long long _state;
    ENPromise *_thenPromise;
    id _thenBlock;
    CDUnknownBlockType _catchBlock;
    CDUnknownBlockType _finallyBlock;
    CDUnknownBlockType _resolve;
    CDUnknownBlockType _reject;
    id _obj;
    NSError *_error;
}

+ (id)promise:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) id obj; // @synthesize obj=_obj;
@property(copy, nonatomic) CDUnknownBlockType reject; // @synthesize reject=_reject;
@property(copy, nonatomic) CDUnknownBlockType resolve; // @synthesize resolve=_resolve;
@property(copy, nonatomic) CDUnknownBlockType finallyBlock; // @synthesize finallyBlock=_finallyBlock;
@property(copy, nonatomic) CDUnknownBlockType catchBlock; // @synthesize catchBlock=_catchBlock;
@property(copy, nonatomic) id thenBlock; // @synthesize thenBlock=_thenBlock;
@property(retain, nonatomic) ENPromise *thenPromise; // @synthesize thenPromise=_thenPromise;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)reject:(id)arg1;
- (void)resolve:(id)arg1;
- (void)finale;
- (CDUnknownBlockType)finally;
- (CDUnknownBlockType)catch;
- (CDUnknownBlockType)then;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

