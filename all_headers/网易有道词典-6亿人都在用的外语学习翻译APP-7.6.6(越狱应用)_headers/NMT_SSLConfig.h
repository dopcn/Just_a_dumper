//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "NMT_Config-Protocol.h"

@class NSString;

@interface NMT_SSLConfig : NSObject <NMT_Config>
{
    struct ICloudServicesConfigSection *_sslConfig;
    char *_certData;
}

- (struct ICloudServicesConfigSection *)getCppConfig;
- (void)dealloc;
- (id)initWithSelfSigned:(_Bool)arg1 summary:(id)arg2 cert:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

