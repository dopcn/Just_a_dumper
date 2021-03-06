//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MTAWXOEventProtocol-Protocol.h"

@class NSString;

@interface MTAWXOEvent : NSObject <MTAWXOEventProtocol>
{
    _Bool _isRealTime;
    unsigned int _sid;
    unsigned int _ts;
    NSString *_appkey;
}

@property _Bool isRealTime; // @synthesize isRealTime=_isRealTime;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property unsigned int ts; // @synthesize ts=_ts;
@property unsigned int sid; // @synthesize sid=_sid;
- (id)toJsonString:(_Bool)arg1;
- (id)toJsonString;
- (void)encode:(id)arg1;
- (int)getType;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

