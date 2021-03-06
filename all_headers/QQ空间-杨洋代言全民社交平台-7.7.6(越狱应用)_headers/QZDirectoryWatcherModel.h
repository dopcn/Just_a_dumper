//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;
@protocol OS_dispatch_source;

@interface QZDirectoryWatcherModel : NSObject
{
    _Bool _isCheckingDirectory;
    _Bool _directoryChanging;
    NSString *_path;
    NSObject<OS_dispatch_source> *_source;
    NSArray *_reportedArray;
    long long _retriesLeft;
}

@property(nonatomic) long long retriesLeft; // @synthesize retriesLeft=_retriesLeft;
@property(nonatomic) _Bool directoryChanging; // @synthesize directoryChanging=_directoryChanging;
@property(nonatomic) _Bool isCheckingDirectory; // @synthesize isCheckingDirectory=_isCheckingDirectory;
@property(retain, nonatomic) NSArray *reportedArray; // @synthesize reportedArray=_reportedArray;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *source; // @synthesize source=_source;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;

@end

