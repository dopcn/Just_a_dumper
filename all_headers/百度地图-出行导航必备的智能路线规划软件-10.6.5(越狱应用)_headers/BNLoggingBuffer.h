//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface BNLoggingBuffer : NSObject
{
    NSMutableArray *_buffers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _bufferCapacity;
}

@property(nonatomic) unsigned long long bufferCapacity; // @synthesize bufferCapacity=_bufferCapacity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(retain, nonatomic) NSMutableArray *buffers; // @synthesize buffers=_buffers;
- (void).cxx_destruct;
- (void)removeFile:(id)arg1;
- (void)writeFile:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)writeFile:(id)arg1 text:(id)arg2;
- (void)addLog:(id)arg1;
- (void)commonInit;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;

@end

