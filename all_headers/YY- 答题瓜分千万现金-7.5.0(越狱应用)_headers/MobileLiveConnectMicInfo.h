//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface MobileLiveConnectMicInfo : NSObject
{
    unsigned int _result;
    unsigned int _inviter;
    unsigned int _invitee;
    unsigned int _topcid;
    unsigned int _subcid;
    unsigned int _inviterTerminal;
    unsigned int _inviteeTerminal;
    unsigned int _inviterAppid;
    unsigned int _inviteeAppid;
    unsigned int _is_notify;
    unsigned long long _type;
    unsigned long long _respond;
    NSString *_errcode;
}

@property(retain, nonatomic) NSString *errcode; // @synthesize errcode=_errcode;
@property(nonatomic) unsigned int is_notify; // @synthesize is_notify=_is_notify;
@property(nonatomic) unsigned int inviteeAppid; // @synthesize inviteeAppid=_inviteeAppid;
@property(nonatomic) unsigned int inviterAppid; // @synthesize inviterAppid=_inviterAppid;
@property(nonatomic) unsigned int inviteeTerminal; // @synthesize inviteeTerminal=_inviteeTerminal;
@property(nonatomic) unsigned int inviterTerminal; // @synthesize inviterTerminal=_inviterTerminal;
@property(nonatomic) unsigned int subcid; // @synthesize subcid=_subcid;
@property(nonatomic) unsigned int topcid; // @synthesize topcid=_topcid;
@property(nonatomic) unsigned int invitee; // @synthesize invitee=_invitee;
@property(nonatomic) unsigned int inviter; // @synthesize inviter=_inviter;
@property(nonatomic) unsigned long long respond; // @synthesize respond=_respond;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned int result; // @synthesize result=_result;
- (void).cxx_destruct;

@end

