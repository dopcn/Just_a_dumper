//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface TRVolumeSensor : NSObject
{
    long long _volumeLevel;
    unsigned long long _ringerMode;
    NSArray *_outputTypes;
}

@property(retain, nonatomic) NSArray *outputTypes; // @synthesize outputTypes=_outputTypes;
@property(nonatomic) unsigned long long ringerMode; // @synthesize ringerMode=_ringerMode;
@property(nonatomic) long long volumeLevel; // @synthesize volumeLevel=_volumeLevel;
- (void).cxx_destruct;

@end

