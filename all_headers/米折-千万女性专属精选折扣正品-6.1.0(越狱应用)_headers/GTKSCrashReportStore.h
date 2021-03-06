//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface GTKSCrashReportStore : NSObject
{
    NSString *_path;
    NSString *_bundleName;
}

+ (id)storeWithPath:(id)arg1;
@property(retain, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)getReportType:(id)arg1;
- (id)pathToRecrashReportWithID:(id)arg1;
- (id)pathToCrashReportWithID:(id)arg1;
- (id)reportIDFromFilename:(id)arg1;
- (id)recrashReportFilenameWithID:(id)arg1;
- (id)crashReportFilenameWithID:(id)arg1;
- (void)convertTimestamp:(id)arg1 inReport:(id)arg2;
- (void)performOnFields:(id)arg1 inReport:(id)arg2 operation:(CDUnknownBlockType)arg3 okIfNotFound:(_Bool)arg4;
@property(readonly, nonatomic) unsigned long long reportCount;
- (id)reportIDs;
- (id)initWithPath:(id)arg1;

@end

