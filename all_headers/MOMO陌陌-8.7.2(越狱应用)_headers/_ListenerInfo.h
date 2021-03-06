//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDMultiListener, NSString, Protocol;
@protocol OS_dispatch_queue;

@interface _ListenerInfo : NSObject
{
    MDMultiListener *_listener;
    SEL _action;
    Protocol *_protocol;
    NSString *_key;
    NSObject<OS_dispatch_queue> *queue;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithListener:(id)arg1 action:(SEL)arg2 key:(id)arg3;

@end

