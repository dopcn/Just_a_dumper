//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "PLCrashReportFormatter-Protocol.h"

@interface FlurryPLCrashReportTextFormatter : NSObject <PLCrashReportFormatter>
{
    int _textFormat;
    unsigned long long _stringEncoding;
}

+ (id)stringValueForCrashReport:(id)arg1 withTextFormat:(int)arg2;
+ (id)formatStackFrame:(id)arg1 frameIndex:(unsigned long long)arg2 report:(id)arg3 lp64:(_Bool)arg4;
- (id)formatReport:(id)arg1 error:(id *)arg2;
- (id)initWithTextFormat:(int)arg1 stringEncoding:(unsigned long long)arg2;

@end

