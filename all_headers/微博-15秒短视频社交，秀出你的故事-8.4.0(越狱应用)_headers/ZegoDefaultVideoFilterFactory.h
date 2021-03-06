//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ZegoVideoFilterFactory-Protocol.h"

@class NSString;
@protocol ZegoVideoFilter;

@interface ZegoDefaultVideoFilterFactory : NSObject <ZegoVideoFilterFactory>
{
    id <ZegoVideoFilter> filter_;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)zego_destroy:(id)arg1;
- (id)zego_create;
- (void)enableFilter:(_Bool)arg1;
- (void)setFilter:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

