//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JSONModel.h"

#import "HNTVBaseModelConfigDelegate-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface DownloadConfig : JSONModel <HNTVBaseModelConfigDelegate, NSCopying>
{
    NSString *version;
    NSNumber *reviewMode;
    NSNumber *developmentEnvironment;
    NSNumber *logLevel;
    NSNumber *logEnabled;
    NSNumber *_canStatistics;
}

+ (id)sharedConfig;
@property(retain, nonatomic) NSNumber *canStatistics; // @synthesize canStatistics=_canStatistics;
@property(retain, nonatomic) NSNumber *logEnabled; // @synthesize logEnabled;
@property(retain, nonatomic) NSNumber *logLevel; // @synthesize logLevel;
@property(retain, nonatomic) NSNumber *developmentEnvironment; // @synthesize developmentEnvironment;
@property(retain, nonatomic) NSNumber *reviewMode; // @synthesize reviewMode;
@property(retain, nonatomic) NSString *version; // @synthesize version;
- (void).cxx_destruct;
- (void)update;
- (void)updateWithConfig:(id)arg1;
- (void)loadWithPlist:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

