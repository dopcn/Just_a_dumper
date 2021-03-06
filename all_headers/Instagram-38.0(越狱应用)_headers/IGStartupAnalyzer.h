//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGPerformanceLogger, IGPerformanceTimestampLogger, NSDate, NSString;

@interface IGStartupAnalyzer : NSObject
{
    IGPerformanceTimestampLogger *_logger;
    IGPerformanceLogger *_performanceLogger;
    _Bool _isLogging;
    NSString *_endSurface;
    _Bool _applicationHasBeenActive;
    unsigned long long _startUpType;
    NSDate *_coldStartDate;
    NSDate *_warmStartDate;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSDate *warmStartDate; // @synthesize warmStartDate=_warmStartDate;
@property(readonly, nonatomic) NSDate *coldStartDate; // @synthesize coldStartDate=_coldStartDate;
- (void).cxx_destruct;
- (void)didBecomeActive;
- (void)backgrounded;
- (void)resetStartupParameters;
- (void)completeWithSuccess:(_Bool)arg1 failureReason:(id)arg2;
- (void)failWithReason:(id)arg1 surface:(id)arg2;
- (void)failWithSurface:(id)arg1;
- (void)succeedWithSurface:(id)arg1;
- (_Bool)shouldEndOnSurface:(id)arg1;
- (void)willEndOnSurface:(id)arg1;
- (void)markLaunchUsable;
- (void)startWithType:(unsigned long long)arg1 enableOldLogging:(_Bool)arg2;
- (void)startWarm;
- (void)startCold;
- (void)setOrigin:(long long)arg1;
- (void)setStartupType:(unsigned long long)arg1;
- (void)setApplicationState:(long long)arg1;
- (void)setUserIsLoggedIn:(_Bool)arg1;
- (void)markAnnotationKey:(id)arg1 annotationBool:(_Bool)arg2;
- (void)markAnnotationKey:(id)arg1 annotationValue:(id)arg2;
- (void)markPointWithName:(id)arg1;
- (void)oldLoggingAddExtraValue:(id)arg1 forKey:(id)arg2;
- (void)oldLoggingMarkEventName:(id)arg1;
- (void)disable;
- (void)dealloc;
- (id)initWithLogger:(id)arg1 newPerformanceLogger:(id)arg2;

@end

