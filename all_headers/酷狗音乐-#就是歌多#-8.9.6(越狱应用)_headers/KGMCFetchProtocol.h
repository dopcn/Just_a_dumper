//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KGHttpProtocol.h"

@class KGMCFetchMessage;

@interface KGMCFetchProtocol : KGHttpProtocol
{
    KGMCFetchMessage *_messages;
}

@property(retain, nonatomic) KGMCFetchMessage *messages; // @synthesize messages=_messages;
- (void).cxx_destruct;
- (_Bool)synAccessService;
- (id)initWithApiKey:(id)arg1 deviceId:(id)arg2;

@end

