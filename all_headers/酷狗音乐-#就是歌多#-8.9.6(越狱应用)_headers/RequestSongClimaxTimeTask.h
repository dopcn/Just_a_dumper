//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface RequestSongClimaxTimeTask : NSObject
{
    long long _taskId;
    NSArray *_arrSongHash;
}

@property(retain, nonatomic) NSArray *arrSongHash; // @synthesize arrSongHash=_arrSongHash;
@property(nonatomic) long long taskId; // @synthesize taskId=_taskId;
- (void).cxx_destruct;
- (id)requestSongClimaxTimeInfoWithError:(id *)arg1;

@end

