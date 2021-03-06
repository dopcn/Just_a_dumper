//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBValueObject.h"

#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface IGDirectPublishedMessageMetadata : FBValueObject <NSCopying>
{
    NSDate *_serverTimestamp;
    NSString *_serverId;
    NSString *_clientContext;
    NSString *_threadId;
}

@property(readonly, copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(readonly, copy, nonatomic) NSString *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property(readonly, copy, nonatomic) NSDate *serverTimestamp; // @synthesize serverTimestamp=_serverTimestamp;
- (void).cxx_destruct;
- (id)initWithServerTimestamp:(id)arg1 serverId:(id)arg2 clientContext:(id)arg3 threadId:(id)arg4;

@end

