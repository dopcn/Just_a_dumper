//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TunePlaylist : NSObject
{
    _Bool _fromDisk;
    _Bool _fromConnectedMode;
    NSDictionary *_powerHooks;
    NSDictionary *_inAppMessages;
    NSDictionary *_experimentDetails;
    NSDictionary *_segments;
    NSString *_schemaVersion;
}

+ (id)playlistWithDictionary:(id)arg1;
@property(nonatomic) _Bool fromConnectedMode; // @synthesize fromConnectedMode=_fromConnectedMode;
@property(nonatomic) _Bool fromDisk; // @synthesize fromDisk=_fromDisk;
@property(copy, nonatomic) NSString *schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property(copy, nonatomic) NSDictionary *segments; // @synthesize segments=_segments;
@property(copy, nonatomic) NSDictionary *experimentDetails; // @synthesize experimentDetails=_experimentDetails;
@property(copy, nonatomic) NSDictionary *inAppMessages; // @synthesize inAppMessages=_inAppMessages;
@property(copy, nonatomic) NSDictionary *powerHooks; // @synthesize powerHooks=_powerHooks;
- (void).cxx_destruct;
- (id)toDictionary;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)setupWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

