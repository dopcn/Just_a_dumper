//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, XMPPJID;

@interface XMPPRoomOccupant : NSObject
{
    XMPPJID *jid;
    NSString *nick;
    NSString *role;
}

+ (id)occupantWithJID:(id)arg1 nick:(id)arg2 role:(id)arg3;
@property(readonly) NSString *role; // @dynamic role;
@property(readonly) NSString *nick; // @dynamic nick;
@property(readonly) XMPPJID *jid; // @dynamic jid;
- (void)dealloc;
- (id)initWithJID:(id)arg1 nick:(id)arg2 role:(id)arg3;

@end

