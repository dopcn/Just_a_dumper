//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol FKReportDelegate;

@interface FKPerformance : NSObject
{
    id <FKReportDelegate> _delegate;
    NSMutableDictionary *_perfDict;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *perfDict; // @synthesize perfDict=_perfDict;
@property(nonatomic) __weak id <FKReportDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)init;

@end

