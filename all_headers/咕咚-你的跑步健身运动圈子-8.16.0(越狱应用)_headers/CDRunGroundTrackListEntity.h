//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CDRunGroundLocation;

@interface CDRunGroundTrackListEntity : NSObject
{
    long long _trackId;
    CDRunGroundLocation *_location;
}

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
@property(retain, nonatomic) CDRunGroundLocation *location; // @synthesize location=_location;
@property(nonatomic) long long trackId; // @synthesize trackId=_trackId;
- (void).cxx_destruct;

@end

