//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KWLNetSrcRequestClient.h"

@interface KWLGetWarehouseStockRequest : KWLNetSrcRequestClient
{
    unsigned long long _userId;
    unsigned long long _sessionId;
}

@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) unsigned long long userId; // @synthesize userId=_userId;
- (_Bool)buildURL:(char *)arg1 len:(int)arg2;

@end

