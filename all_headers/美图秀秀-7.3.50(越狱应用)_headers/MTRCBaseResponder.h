//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTRCBaseProcessor.h"

#import "MTRCResponderProtocol-Protocol.h"

@class NSArray, NSString;

@interface MTRCBaseResponder : MTRCBaseProcessor <MTRCResponderProtocol>
{
}

- (void)loopResponderWithURL:(id)arg1 object:(id)arg2 params:(id)arg3 result:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *host;
@property(readonly, nonatomic) NSArray *pathSegments;
@property(readonly, nonatomic) NSString *scheme;
@property(readonly, nonatomic) unsigned long long scopeType;
@property(readonly) Class superclass;

@end

