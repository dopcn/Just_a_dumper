//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NBDomainProtocol-Protocol.h"

@class NSString;

@interface NBPADomainHelperBase : NSObject <NBDomainProtocol>
{
    NSString *_mainHost;
}

@property(copy, nonatomic) NSString *mainHost; // @synthesize mainHost=_mainHost;
- (id)domainHelperGetDomain;
- (id)getDomain;
- (id)domainHelperTryChangeDomain:(id)arg1;
- (id)tryChangeDomain:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

