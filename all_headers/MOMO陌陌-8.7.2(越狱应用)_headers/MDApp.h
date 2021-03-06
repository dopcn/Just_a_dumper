//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MDAppStatusProvider, MDCryptLogManager;
@protocol OS_dispatch_queue;

@interface MDApp : NSObject
{
    NSObject<OS_dispatch_queue> *dbQueue;
    MDAppStatusProvider *statusProvider;
    MDCryptLogManager *cryptLogManager;
}

@property(readonly) MDAppStatusProvider *status; // @synthesize status=statusProvider;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // @synthesize dbQueue;
@property(readonly, nonatomic) MDCryptLogManager *cryptLogManager;
- (void)dealloc;
- (id)init;

@end

