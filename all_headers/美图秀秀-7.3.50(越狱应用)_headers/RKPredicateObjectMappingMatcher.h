//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RKObjectMappingMatcher.h"

@class NSPredicate;

@interface RKPredicateObjectMappingMatcher : RKObjectMappingMatcher
{
    NSPredicate *_predicate;
}

@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
- (void).cxx_destruct;
- (id)description;
- (_Bool)matches:(id)arg1;
- (id)initWithPredicate:(id)arg1 objectMapping:(id)arg2;
- (id)init;

@end

