//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPFReporter : NSObject
{
}

+ (id)generateCustomerReportDictionaryWith:(id)arg1 tagsDict:(id)arg2 optionalTagsDict:(id)arg3 ts:(id)arg4 metrics:(id)arg5;
+ (id)sharedReporter;
- (void)stop;
- (void)addTimer:(id)arg1;
- (void)start;

@end

