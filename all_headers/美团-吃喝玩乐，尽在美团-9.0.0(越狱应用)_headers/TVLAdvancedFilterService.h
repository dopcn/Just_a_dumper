//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKBaseService.h"

@class TVLAdvancedFilterLoader;

@interface TVLAdvancedFilterService : SAKBaseService
{
    TVLAdvancedFilterLoader *_advancedFilterLoader;
}

@property(retain, nonatomic) TVLAdvancedFilterLoader *advancedFilterLoader; // @synthesize advancedFilterLoader=_advancedFilterLoader;
- (void).cxx_destruct;
- (id)getUniversalFilter:(long long)arg1 categoryID:(long long)arg2;
- (id)getAdvancedFilterSignal:(long long)arg1 categoryID:(long long)arg2 fromCateId:(long long)arg3;
- (id)init:(_Bool)arg1;
- (id)init;

@end

