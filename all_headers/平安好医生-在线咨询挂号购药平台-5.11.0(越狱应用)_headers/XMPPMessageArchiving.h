//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPPModule.h"

@class DDXMLElement;
@protocol XMPPMessageArchivingStorage;

@interface XMPPMessageArchiving : XMPPModule
{
    id <XMPPMessageArchivingStorage> xmppMessageArchivingStorage;
    _Bool clientSideMessageArchivingOnly;
    DDXMLElement *preferences;
}

- (void).cxx_destruct;
- (void)xmppStream:(id)arg1 didReceiveMessage:(id)arg2;
- (void)xmppStream:(id)arg1 didSendMessage:(id)arg2;
- (_Bool)xmppStream:(id)arg1 didReceiveIQ:(id)arg2;
- (void)xmppStreamDidAuthenticate:(id)arg1;
- (_Bool)shouldArchiveMessage:(id)arg1 outgoing:(_Bool)arg2 xmppStream:(id)arg3;
@property(copy) DDXMLElement *preferences;
@property _Bool clientSideMessageArchivingOnly;
@property(readonly) id <XMPPMessageArchivingStorage> xmppMessageArchivingStorage;
- (void)deactivate;
- (_Bool)activate:(id)arg1;
- (id)initWithMessageArchivingStorage:(id)arg1 dispatchQueue:(id)arg2;
- (id)initWithMessageArchivingStorage:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1;
- (id)init;

@end

