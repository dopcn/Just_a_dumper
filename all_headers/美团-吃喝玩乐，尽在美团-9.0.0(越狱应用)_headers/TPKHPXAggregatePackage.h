//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SAKDomainObject.h"

@class NSArray, TPKHPXRoomInfo;

@interface TPKHPXAggregatePackage : SAKDomainObject
{
    TPKHPXRoomInfo *_roomInfo;
    NSArray *_packageArray;
}

+ (id)packageArrayJSONTransformer;
+ (id)roomInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSArray *packageArray; // @synthesize packageArray=_packageArray;
@property(retain, nonatomic) TPKHPXRoomInfo *roomInfo; // @synthesize roomInfo=_roomInfo;
- (void).cxx_destruct;

@end

