//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QNBCHCloudTask.h"

@class NSArray;

@interface QNBCHCloudDeleteTask : QNBCHCloudTask
{
    _Bool _isDeleteAll;
    NSArray *_recordList;
    double _delDataVersion;
}

+ (id)taskWithRecordList:(id)arg1 isDeleteAll:(_Bool)arg2 dataVersion:(double)arg3;
@property(nonatomic) double delDataVersion; // @synthesize delDataVersion=_delDataVersion;
@property(nonatomic) _Bool isDeleteAll; // @synthesize isDeleteAll=_isDeleteAll;
@property(retain, nonatomic) NSArray *recordList; // @synthesize recordList=_recordList;
- (void).cxx_destruct;
- (void)schedule:(CDUnknownBlockType)arg1;

@end

