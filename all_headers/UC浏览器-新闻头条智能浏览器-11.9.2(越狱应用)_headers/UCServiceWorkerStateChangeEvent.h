//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UCServiceWorkerExtendableEvent.h"

#import "UCServiceWorkerStateChangeEventExport-Protocol.h"

@interface UCServiceWorkerStateChangeEvent : UCServiceWorkerExtendableEvent <UCServiceWorkerStateChangeEventExport>
{
    id _activeWorker;
}

@property(readonly, retain, nonatomic) id activeWorker; // @synthesize activeWorker=_activeWorker;
- (void)dealloc;
- (id)initWithType:(id)arg1 eventInitDict:(id)arg2;

@end

