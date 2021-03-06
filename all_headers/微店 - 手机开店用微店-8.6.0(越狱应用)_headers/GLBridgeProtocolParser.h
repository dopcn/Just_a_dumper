//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GLBridgeProtocolConfig;
@protocol GLBridgeProtocolParserDelegate><GLBridgeProtocolParserDataSource;

@interface GLBridgeProtocolParser : NSObject
{
    GLBridgeProtocolConfig *_protocolConfig;
    id <GLBridgeProtocolParserDelegate><GLBridgeProtocolParserDataSource> _delegate;
}

@property(nonatomic) __weak id <GLBridgeProtocolParserDelegate><GLBridgeProtocolParserDataSource> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) GLBridgeProtocolConfig *protocolConfig; // @synthesize protocolConfig=_protocolConfig;
- (void).cxx_destruct;
- (void)notifyParseFinish:(id)arg1;
- (void)requestWithMethod:(id)arg1 param:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)jsbridgeCallbackWithContextID:(id)arg1 result:(id)arg2;
- (_Bool)checkIsSuppportedForModule:(id)arg1 identifier:(id)arg2;
- (_Bool)checkIfStringIsValid:(id)arg1;
- (id)bridgeScheme;
- (id)newSessionID;
- (void)jsbridgeCallWithParams:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)parseProtocolURL:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)validateProtocolURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

