//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSFRDMEvent_ConnHttpToTcp : NSObject
{
    NSString *_eventName;
    double _startTime;
    _Bool _isWifi;
    NSString *_netName;
    NSString *_httpIP;
    int _httpPort;
    NSString *_httpNetIP;
    int _httpNetPort;
    int _sendNum;
    int _recvNum;
    int _dt;
    _Bool _isTcpCheck;
}

+ (id)instance;
@property(retain, nonatomic) NSString *httpNetIP; // @synthesize httpNetIP=_httpNetIP;
@property(retain, nonatomic) NSString *httpIP; // @synthesize httpIP=_httpIP;
@property(retain, nonatomic) NSString *netName; // @synthesize netName=_netName;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void)cancelEvent;
- (void)updateEventTcp:(id)arg1 port:(int)arg2;
- (void)updateEventTcpCheckOk;
- (void)updateEventHttp:(int)arg1 recvNum:(int)arg2 dt:(int)arg3;
- (void)updateEventHttp_SetNetIP:(id)arg1 port:(int)arg2;
- (void)startEvent:(_Bool)arg1 netName:(id)arg2 httpIP:(id)arg3 httpPort:(int)arg4;
- (void)dealloc;
- (id)init;

@end

