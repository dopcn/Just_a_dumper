//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QNResolverDelegate-Protocol.h"

@class NSString, QNResolver;

@interface QNHijackingDetectWrapper : NSObject <QNResolverDelegate>
{
    QNResolver *_resolver;
}

@property(readonly, nonatomic) QNResolver *resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)initWithResolver:(id)arg1;
- (id)query:(id)arg1 networkInfo:(id)arg2 error:(id *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

