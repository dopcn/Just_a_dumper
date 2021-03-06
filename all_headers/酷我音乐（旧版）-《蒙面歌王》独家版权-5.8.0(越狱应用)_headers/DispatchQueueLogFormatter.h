//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DDLogFormatter-Protocol.h"

@class NSDateFormatter, NSMutableDictionary, NSString;

@interface DispatchQueueLogFormatter : NSObject <DDLogFormatter>
{
    NSDateFormatter *dateFormatter;
    int lock;
    unsigned long long _minQueueLength;
    unsigned long long _maxQueueLength;
    NSMutableDictionary *_replacements;
}

@property unsigned long long maxQueueLength; // @synthesize maxQueueLength=_maxQueueLength;
@property unsigned long long minQueueLength; // @synthesize minQueueLength=_minQueueLength;
- (void).cxx_destruct;
- (id)formatLogMessage:(id)arg1;
- (id)queueThreadLabelForLogMessage:(id)arg1;
- (void)setReplacementString:(id)arg1 forQueueLabel:(id)arg2;
- (id)replacementStringForQueueLabel:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

