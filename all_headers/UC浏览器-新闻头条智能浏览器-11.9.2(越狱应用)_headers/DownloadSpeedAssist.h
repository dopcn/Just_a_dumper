//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface DownloadSpeedAssist : NSObject
{
    unsigned int taskId;
    long long timeInterval;
    NSMutableArray *downloadSizeArray;
}

@property(retain, nonatomic) NSMutableArray *downloadSizeArray; // @synthesize downloadSizeArray;
@property(nonatomic) long long timeInterval; // @synthesize timeInterval;
@property(nonatomic) unsigned int taskId; // @synthesize taskId;
- (void)resetArray;
- (void)setArrayWith:(float)arg1;
- (long long)getAverageSpeedInFixedInterval;
- (void)dealloc;
- (id)initWithTask:(long long)arg1 interval:(long long)arg2;

@end

