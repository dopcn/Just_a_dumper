//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface FMEmailFilterManager : NSObject
{
    NSMutableDictionary *_filterMapping;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_processHistory:(id)arg1 withFilter:(id)arg2;
- (void)processHistory:(long long)arg1;
- (void)processFilters:(id)arg1;
- (void)deleteEmailFilterWithAccountId:(long long)arg1;
- (void)deleteEmailFilter:(id)arg1;
- (void)createEmailFilters:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_createEmailFilter:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)readFiltersOfFolder:(id)arg1;
- (id)readFilters:(long long)arg1;
- (id)init;

@end

