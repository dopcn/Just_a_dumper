//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@interface TideBriefPort : MTLModel <MTLJSONSerializing>
{
    double _baseline;
    unsigned long long _portId;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) unsigned long long portId; // @synthesize portId=_portId;
@property(nonatomic) double baseline; // @synthesize baseline=_baseline;

@end

