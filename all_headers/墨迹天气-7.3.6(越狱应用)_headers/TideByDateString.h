//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, TideBriefPort;

@interface TideByDateString : MTLModel <MTLJSONSerializing>
{
    TideBriefPort *_tideBriefPort;
    NSArray *_briefTides;
    long long _counts;
}

+ (id)briefTidesJSONTransformer;
+ (id)tideBriefPortJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long counts; // @synthesize counts=_counts;
@property(retain, nonatomic) NSArray *briefTides; // @synthesize briefTides=_briefTides;
@property(retain, nonatomic) TideBriefPort *tideBriefPort; // @synthesize tideBriefPort=_tideBriefPort;
- (void).cxx_destruct;

@end

