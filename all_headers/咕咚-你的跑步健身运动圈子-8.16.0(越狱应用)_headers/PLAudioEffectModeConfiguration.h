//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PLAudioEffectConfiguration.h"

@class NSArray;

@interface PLAudioEffectModeConfiguration : PLAudioEffectConfiguration
{
    NSArray *_subConfigurations;
}

+ (id)reverbHeightLevelModeConfiguration;
+ (id)reverbMediumLevelModeConfiguration;
+ (id)reverbLowLevelModeConfiguration;
- (void).cxx_destruct;
- (void)configureWithFilter:(id)arg1 withAudioUnits:(id)arg2;
- (id)initWithSubConfigurations:(id)arg1;

@end

