//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSLocking-Protocol.h"

@class NSString;
@protocol OS_dispatch_queue;

@interface PFMultiProcessFileLock : NSObject <NSLocking>
{
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    int _fileDescriptor;
    NSString *_filePath;
    NSString *_lockFilePath;
}

+ (id)lockForFileWithPath:(id)arg1;
@property(copy, nonatomic) NSString *lockFilePath; // @synthesize lockFilePath=_lockFilePath;
@property(copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (_Bool)_tryLock;
- (void)unlock;
- (void)lock;
- (void)dealloc;
- (id)initForFileWithPath:(id)arg1;

@end

