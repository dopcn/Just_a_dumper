//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <swiftCore/SwiftObject.h>

@class NSArray;

@interface _TtC17AirbnbExperiments16TrebuchetManager : SwiftObject
{
    // Error parsing type: , name: dataUpdateQueue
    // Error parsing type: , name: ioQueue
    // Error parsing type: , name: trebuchets
    // Error parsing type: , name: trebuchetOverrides
}

@property(nonatomic, readonly) NSArray *allTrebuchetNames;
- (_Bool)isLaunched:(long long)arg1;
- (id)getTrebuchetDataForReactNativeOnly;
- (id)currentTrebuchetNames;
- (void)setTrebuchetOverrideWithTrebuchet:(long long)arg1 launched:(_Bool)arg2;
- (void)setTrebuchetOverride:(id)arg1 launched:(_Bool)arg2;
- (_Bool)isLaunchedNamed:(id)arg1;
- (void)fetchAndUpdateTrebuchetsWithCompletion:(CDUnknownBlockType)arg1;

@end

