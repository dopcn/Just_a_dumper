//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDate;

@interface DateRange : NSObject
{
    NSDate *_from;
    NSDate *_to;
}

@property(retain) NSDate *to; // @synthesize to=_to;
@property(retain) NSDate *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (id)convertDateToLogDate:(id)arg1;
- (id)convertLogDateToDate:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithFrom:(id)arg1 to:(id)arg2;

@end

