//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface BDNNativeCallMessage : NSObject
{
    unsigned long long _type;
    NSString *_action;
    NSString *_service;
    NSMutableDictionary *_args;
    NSDictionary *_hybridParams;
    CDUnknownBlockType _callback;
    NSString *_token;
}

+ (id)reactCallbackMessageWithCallbackId:(id)arg1 value:(id)arg2 type:(long long)arg3;
+ (id)reactPageTokenWithArgs:(id)arg1;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSDictionary *hybridParams; // @synthesize hybridParams=_hybridParams;
@property(retain, nonatomic) NSMutableDictionary *args; // @synthesize args=_args;
@property(copy, nonatomic) NSString *service; // @synthesize service=_service;
@property(copy, nonatomic) NSString *action; // @synthesize action=_action;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isRegistedAction;
- (unsigned long long)actionType;
- (id)initWithArgs:(id)arg1 hybridParams:(id)arg2 token:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (id)initWithArgs:(id)arg1 hybridParams:(id)arg2;
- (id)init;

@end

