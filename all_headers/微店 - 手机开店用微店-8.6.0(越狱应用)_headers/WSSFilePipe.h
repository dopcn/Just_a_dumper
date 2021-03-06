//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WSSFilePipeDelegate;

@interface WSSFilePipe : NSObject
{
    id <WSSFilePipeDelegate> _delegate;
    long long _status;
    NSMutableArray *_segments;
    long long _currentRunningIndex;
}

@property(nonatomic) long long currentRunningIndex; // @synthesize currentRunningIndex=_currentRunningIndex;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) __weak id <WSSFilePipeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)runSegemntAtIndex:(long long)arg1 withInput:(id)arg2;
- (void)errorHappend:(id)arg1 atSegemtn:(id)arg2;
- (void)endWithOutput:(id)arg1;
- (void)startWithInput:(id)arg1;
- (void)replaceSegment:(id)arg1 atIndex:(long long)arg2;
- (void)removeSegment:(id)arg1;
- (void)removeSegmentAtIndex:(long long)arg1;
- (void)insertSegment:(id)arg1 atIndex:(long long)arg2;
- (void)addSegment:(id)arg1;
- (id)segmentAtIndex:(long long)arg1;
- (long long)segemntsCount;
- (id)listSegments;
- (id)description;
- (id)init;

@end

