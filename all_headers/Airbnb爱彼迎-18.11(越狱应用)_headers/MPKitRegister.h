//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPExtensionKitProtocol-Protocol.h"

@class NSNumber, NSString;
@protocol MPKitProtocol;

@interface MPKitRegister : NSObject <MPExtensionKitProtocol>
{
    _Bool _startImmediately;
    NSNumber *_code;
    id <MPKitProtocol> _wrapperInstance;
    NSString *_name;
    NSString *_className;
}

@property(readonly, nonatomic) _Bool startImmediately; // @synthesize startImmediately=_startImmediately;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) id <MPKitProtocol> wrapperInstance; // @synthesize wrapperInstance=_wrapperInstance;
@property(readonly, nonatomic) NSNumber *code; // @synthesize code=_code;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (id)initWithName:(id)arg1 className:(id)arg2 startImmediately:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

