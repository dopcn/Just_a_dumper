//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LMDomainHandlerProtocol-Protocol.h"

@class LMOptimalBaseUrl, NSString;

@interface LMAPIDomainHandler : NSObject <LMDomainHandlerProtocol>
{
    LMOptimalBaseUrl *_optimalBaseUrl;
}

@property(retain, nonatomic) LMOptimalBaseUrl *optimalBaseUrl; // @synthesize optimalBaseUrl=_optimalBaseUrl;
- (void).cxx_destruct;
- (id)updateDomainWithCurrent:(id)arg1;
- (id)currentAvaliableDomain;
- (id)transferDomain;
- (id)defaultDomain;
- (_Bool)canHandlerWithUrlPath:(id)arg1;
- (id)handlerUrlPaths;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

