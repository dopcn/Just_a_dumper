//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class TransFileModel;

@interface TransOperationBase : NSOperation
{
    TransFileModel *_transFile;
    _Bool _isCancelled;
    _Bool _isExecuting;
    _Bool _isFinished;
    _Bool _isSuspended;
    _Bool _deleted;
    _Bool _paused;
    CDUnknownBlockType _transStartBlock;
    CDUnknownBlockType _transProgressBlock;
    CDUnknownBlockType _transDoneBlock;
    CDUnknownBlockType _icloudProgressBlock;
    CDUnknownBlockType _heicConvertBlock;
}

@property(copy, nonatomic) CDUnknownBlockType heicConvertBlock; // @synthesize heicConvertBlock=_heicConvertBlock;
@property(copy, nonatomic) CDUnknownBlockType icloudProgressBlock; // @synthesize icloudProgressBlock=_icloudProgressBlock;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic, getter=isDeleted) _Bool deleted; // @synthesize deleted=_deleted;
@property(copy, nonatomic) CDUnknownBlockType transDoneBlock; // @synthesize transDoneBlock=_transDoneBlock;
@property(copy, nonatomic) CDUnknownBlockType transProgressBlock; // @synthesize transProgressBlock=_transProgressBlock;
@property(copy, nonatomic) CDUnknownBlockType transStartBlock; // @synthesize transStartBlock=_transStartBlock;
@property(retain, nonatomic) TransFileModel *transFile; // @synthesize transFile=_transFile;
- (void).cxx_destruct;
- (_Bool)isSuspended;
- (void)setSuspended:(_Bool)arg1;
- (void)finish;
- (_Bool)isCancelled;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isConcurrent;
- (id)init;

@end

