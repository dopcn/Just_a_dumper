//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface FBLigerSamplingRequestObserver : NSObject
{
    NSDictionary *_extra;
    unsigned int _ratio;
}

- (void).cxx_destruct;
- (id)extraForRequest:(id)arg1;
- (_Bool)shouldLogEvent;
- (id)initWithSamplingRatio:(unsigned int)arg1;
- (id)init;

@end

