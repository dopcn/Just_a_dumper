//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class MttDataBaseQueue;

@interface MttDataBaseOperation : NSOperation
{
    CDUnknownBlockType _block;
    MttDataBaseQueue *_dbQueue;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)main;
- (id)initWithBlock:(CDUnknownBlockType)arg1 completeBlock:(CDUnknownBlockType)arg2 andDBQueue:(id)arg3;

@end

