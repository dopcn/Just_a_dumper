//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSString;

@interface FTKFlightSeatSpace : SAKDomainObject
{
    NSString *_type;
    NSString *_name;
    NSString *_filterTypeId;
    NSString *_filterItemId;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *filterItemId; // @synthesize filterItemId=_filterItemId;
@property(retain, nonatomic) NSString *filterTypeId; // @synthesize filterTypeId=_filterTypeId;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

