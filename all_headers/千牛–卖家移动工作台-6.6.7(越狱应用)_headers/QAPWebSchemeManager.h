//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QAPDefaultManager.h"

#import "QAPWebSchemeHandler-Protocol.h"

@class NSString, QAPThreadSafeMutableDictionary;

@interface QAPWebSchemeManager : QAPDefaultManager <QAPWebSchemeHandler>
{
    CDUnknownBlockType _requestInterceptor;
    QAPThreadSafeMutableDictionary *_schemeHandlerDict;
    QAPThreadSafeMutableDictionary *_urlFilterDict;
}

+ (id)defaultManager;
@property(retain, nonatomic) QAPThreadSafeMutableDictionary *urlFilterDict; // @synthesize urlFilterDict=_urlFilterDict;
@property(retain, nonatomic) QAPThreadSafeMutableDictionary *schemeHandlerDict; // @synthesize schemeHandlerDict=_schemeHandlerDict;
@property(copy, nonatomic) CDUnknownBlockType requestInterceptor; // @synthesize requestInterceptor=_requestInterceptor;
- (void).cxx_destruct;
- (void)registerQAPBridgeCapabilities;
- (id)stringifyResponse:(id)arg1;
- (void)unregisterFilterForURLPattern:(id)arg1;
- (void)registerFilter:(CDUnknownBlockType)arg1 forURLPattern:(id)arg2;
- (void)unregisterHandlerForWebScheme:(id)arg1;
- (void)registerHandler:(CDUnknownBlockType)arg1 forWebScheme:(id)arg2;
- (void)unregisterInterceptor;
- (void)registerInterceptor:(CDUnknownBlockType)arg1;
- (_Bool)filterURLRequest:(id)arg1 onWebView:(id)arg2 withInfo:(id)arg3;
- (void)initInDefaultManagerImpl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

