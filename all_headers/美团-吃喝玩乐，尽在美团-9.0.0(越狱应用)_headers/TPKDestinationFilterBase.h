//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface TPKDestinationFilterBase : SAKDomainObject
{
    NSString *_desc;
    long long _filterID;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long filterID; // @synthesize filterID=_filterID;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void).cxx_destruct;

@end

