//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CTVASTCreative.h"

@class NSArray, NSDictionary, NSMutableDictionary, NSString;

@interface CTVASTLinearCreative : CTVASTCreative
{
    NSString *_skipOffset;
    NSString *_duration;
    NSString *_staticResource;
    NSMutableDictionary *_VASTTrackingEvents;
    NSDictionary *_VASTVideoClicks;
    NSArray *_VASTMediaFiles;
}

@property(retain, nonatomic) NSArray *VASTMediaFiles; // @synthesize VASTMediaFiles=_VASTMediaFiles;
@property(retain, nonatomic) NSDictionary *VASTVideoClicks; // @synthesize VASTVideoClicks=_VASTVideoClicks;
@property(retain, nonatomic) NSMutableDictionary *VASTTrackingEvents; // @synthesize VASTTrackingEvents=_VASTTrackingEvents;
@property(retain, nonatomic) NSString *staticResource; // @synthesize staticResource=_staticResource;
@property(retain, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *skipOffset; // @synthesize skipOffset=_skipOffset;
- (void).cxx_destruct;
- (id)initWithVASTCreative:(id)arg1;

@end

